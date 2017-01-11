/*
ozdevguy | C General Libraries

Copyright 2016 Bobby Crawford (ozdevguy)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

map.c
========================================================================


*/


//Create a new map.
map* _map_new(standard_library_context* ctx, size_t start_size){

	map* mp;

	if(!ctx || !start_size)
		return 0;

	mp = allocate(ctx, sizeof(map));
	mp->ctx = ctx;
	mp->size = start_size;

	mp->map_table = allocate(ctx, sizeof(map_entry) * start_size);

	return mp;

}

void _map_delete(map* mp){

	size_t i;
	map_entry *entry, *tmp;

	if(!mp)
		return;

	for(i = 0; i < mp->size; i++){

		entry = mp->map_table[i].next;

		while(entry){

			tmp = entry->next;
			destroy(mp->ctx, (void**)&entry);
			entry = tmp;

		}
	}

	destroy(mp->ctx, (void**)&mp->map_table);
	destroy(mp->ctx, (void**)&mp);

}

bool _map_resize(map* mp, size_t new_size){

	size_t i;
	map* new_map;
	map_entry *entry, *tmp;

	if(!mp || !new_size)
		return false;

	new_map = _map_new(mp->ctx, new_size);

	_map_reset_iterator(mp);

	while(_map_has_next(mp)){

		entry = _map_get_next_e(mp);
		_map_insert(new_map, entry->key, entry->data);

	}
	
	for(i = 0; i < mp->size; i++){

		entry = mp->map_table[i].next;

		while(entry){

			tmp = entry->next;
			destroy(mp->ctx, (void**)&entry);
			entry = tmp;

		}
	}

	destroy(mp->ctx, (void**)&mp->map_table);

	mp->iter_tbl = 0;
	mp->iter_list = 0;
	mp->size = new_map->size;
	mp->total = new_map->total;
	mp->map_table = new_map->map_table;

	destroy(mp->ctx, (void**)&new_map);
	return true;

}

bool _map_insert(map* mp, size_t key, void* data){

	size_t position;
	map_entry *entry;

	if(!mp)
		return false;

	position = key % mp->size;
	entry = mp->map_table + position;

	//Find the position for our new node...
	while(entry){

		//This node already exists!
		if(entry->key == key)
			return false;

		//This is an end node that is no longer in use. Reuse it.
		else if(!entry->used)
			break;

		//We need to add a new node.
		else if(!entry->next){

			entry->next = allocate(mp->ctx, sizeof(map_entry));
			entry = entry->next;
			break;

		}

		entry = entry->next;

	}

	mp->total++;
	entry->used = true;
	entry->key = key;
	entry->data = data;
	return true;

}

map_entry* _map_insert_e(map* mp, size_t key, void* data){

	size_t position;
	map_entry *entry;

	if(!mp)
		return 0;

	position = key % mp->size;
	entry = mp->map_table + position;

	//Find the position for our new node...
	while(entry){

		//This node already exists!
		if(entry->key == key)
			return 0;

		//This is an end node that is no longer in use. Reuse it.
		else if(!entry->used)
			break;

		//We need to add a new node.
		else if(!entry->next){

			entry->next = allocate(mp->ctx, sizeof(map_entry));
			entry = entry->next;
			break;

		}

		entry = entry->next;

	}

	mp->total++;
	entry->used = true;
	entry->key = key;
	entry->data = data;
	return entry;

}


void* _map_remove(map* mp, size_t key){

	map_entry *entry, *tmp;
	size_t table_pos;
	void* data;

	if(!mp)
		return 0;

	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	while(entry){

		if(entry->key == key && entry->next){

			tmp = entry->next;
			data = entry->data;
			*entry = *tmp;
			destroy(mp->ctx, (void**)&tmp);
			mp->total--;
			return data;

		}
		else if(entry->key == key){

			entry->used = false;
			mp->total--;
			return entry->data;

		}

		entry = entry->next;
		
	}

	return false;
}

bool _map_remove_e(map* mp, size_t key, map_entry* cpy){

	map_entry *entry, *tmp;
	size_t table_pos;

	if(!mp || !cpy)
		return 0;

	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	while(entry){

		if(entry->key == key && entry->next){

			tmp = entry->next;
			*cpy = *entry;
			*entry = *tmp;
			destroy(mp->ctx, (void**)&tmp);
			mp->total--;
			return true;

		}
		else if(entry->key == key){

			*cpy = *entry;
			entry->used = false;
			mp->total--;
			return true;

		}

		entry = entry->next;
		
	}

	return false;
}

void* _map_lookup(map* mp, size_t key){

	map_entry* entry;
	size_t table_pos;

	if(!mp)
		return 0;

	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	while(entry){

		if(entry->key == key)
			return entry->data;

		entry = entry->next;

	}

	return 0;

}

map_entry* _map_lookup_e(map* mp, size_t key){

	map_entry* entry;
	size_t table_pos;

	if(!mp)
		return 0;

	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	while(entry){

		if(entry->key == key)
			return entry;

		entry = entry->next;

	}

	return 0;

}

bool _map_exists(map* mp, size_t key){

	if(_map_lookup(mp, key))
		return true;

	return false;

}


/* ITERATOR */
void _map_reset_iterator(map* mp){

	size_t i;

	if(!mp)
		return;

	//Find the first table entry.
	for(i = 0; i < mp->size; i++){

		if(mp->map_table[i].used){

			mp->iter_tbl = i;
			mp->iter_list = mp->map_table + i;
			break;

		}

	}

}

bool _map_has_next(map* mp){

	if(!mp)
		return false;

	if(!mp->total)
		return false;

	if(mp->iter_tbl < mp->size)
		return true;

	return false;
	
}

void* _map_get_next(map* mp){
	
	void* data = 0;

	if(!mp)
		return 0;

	if(mp->iter_list){

		if(mp->iter_list->used){

			data = mp->iter_list->data;
			mp->iter_list = mp->iter_list->next;

		}
	}

	//Load the next item.
	if(mp->iter_list){

		if(mp->iter_list->used)
			return data;

	}

	while(++mp->iter_tbl < mp->size){

		if(mp->map_table[mp->iter_tbl].used){

			mp->iter_list = mp->map_table + mp->iter_tbl;
			return data;

		}

	}

	return data;
	
}

map_entry* _map_get_next_e(map* mp){

	map_entry* entry = 0;

	if(!mp)
		return 0;

	if(mp->iter_list){

		if(mp->iter_list->used){

			entry = mp->iter_list;
			mp->iter_list = mp->iter_list->next;

		}
	}

	//Load the next item.
	if(mp->iter_list){

		if(mp->iter_list->used)
			return entry;

	}

	while(++mp->iter_tbl < mp->size){

		if(mp->map_table[mp->iter_tbl].used){

			mp->iter_list = mp->map_table + mp->iter_tbl;
			return entry;

		}

	}

	return entry;

}
