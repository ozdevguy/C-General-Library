
//Create a new map.
map* _map_new(standard_library_context*, size_t);

//Delete a map.
bool _map_delete(map*);

//Resize a map.
bool _map_resize(map*, size_t);

//Delete a map and all of its data.
bool _map_delete_all(map*, void (void*));

//Map deallocator.
void _map_dealloc(void*);

//Map an item.
bool _map_insert(map*, size_t, void*, uint8_t, size_t);

//Map an item (and return its pointer).
bool _map_insert_ptr(map*, size_t, void*, uint8_t, size_t, map_entry_int**);

//Remove an item from the map.
bool _map_remove(map*, size_t);

//Remove an item from the map (and return its ext pointer).
bool _map_remove_eptr(map*, size_t, void**);

//Get an item from the map.
bool _map_lookup(map*, size_t, map_entry*);

//Reset the map iterator.
void _map_reset_iterator(map*);

//Check to see if there are any additional items to iterate through.
bool _map_has_next(map*);

//Pull the next item in the iteration.
bool _map_get_next(map*, map_entry*);


static void int_map_int_copy(map_entry_int* to, map_entry_int* from){

	to->used = from->used;
	to->key = from->key;
	to->size = from->size;
	to->type = from->type;
	to->data = from->data;
	to->next = from->next;

}

static void int_map_copy(map_entry_int* ent, map_entry* ext){

	ext->key = ent->key;
	ext->size = ent->size;
	ext->type = ent->type;
	ext->data = ent->data;
	ext->ext = ent->ext;

}

static void int_map_int_delete(map* mp){

	size_t i;
	map_entry_int *entry, *next;

	//Delete the old map.
	for(i = 0; i < mp->size; i++){

		if(mp->map_table[i].data){

			entry = mp->map_table[i].next;

			while(entry){

				next = entry->next;

				destroy(mp->ctx, entry);

				if(next)
					entry = next;
				else
					break;

			}

		}
	}

}

bool _map_resize(map* mp, size_t new_size){

	map* new_map;
	map_entry e;
	size_t i;

	if(!mp)
		return false;

	if(new_size){

		new_map = _map_new(mp->ctx, new_size);

		//Insertion into new table.
		_map_reset_iterator(mp);

		while(_map_has_next(mp)){

			_map_get_next(mp, &e);

			_map_insert(new_map, e.key, e.data, e.type, e.size);

		}

		
		int_map_int_delete(mp);

		destroy(mp->ctx, mp->map_table);

		//Transfer over data...
		mp->size = new_map->size;
		mp->total = new_map->total;
		mp->map_table = new_map->map_table;

		destroy(mp->ctx, new_map);

	}

	return false;

}


void _map_reset_iterator(map* mp){

	if(!mp)
		return;

	mp->iter_tbl = 0;
	mp->iter_list = 0;

}

bool _map_has_next(map* mp){

	if(!mp)
		return;

	if(mp->iter_tbl <= mp->size){

		//This table position has at least one entry, and we are starting from the beginning.
		if(!mp->iter_list && mp->map_table[mp->iter_tbl].used)
			mp->iter_list = mp->map_table + mp->iter_tbl++;
			
		//We are in the middle of a table entry list.
		else if(mp->iter_list && mp->iter_list->next)
			mp->iter_list = mp->iter_list->next;

		//Find the next used table entry...
		else{

			while(mp->iter_tbl < mp->size){

				if(mp->map_table[mp->iter_tbl].used){

					mp->iter_list = mp->map_table + mp->iter_tbl++;
					return true;

				}

				mp->iter_tbl++;

			}

			return false;

		}

		return true;

	}


	return false;

}

bool _map_get_next(map* mp, map_entry* entry){

	if(!mp || !entry)
		return false;

	if(mp->iter_list){

		int_map_copy(mp->iter_list, entry);
		return true;

	}

	return false;
}

map* _map_new(standard_library_context* ctx, size_t start_size){

	map* mp;

	if(!ctx)
		return 0;

	mp = allocate(ctx, sizeof(map));
	mp->ctx = ctx;
	mp->size = start_size;

	mp->map_table = allocate(ctx, sizeof(map_entry_int) * start_size);


	return mp;

}

bool _map_insert(map* mp, size_t key, void* dat, uint8_t type, size_t size){

	size_t table_pos;
	map_entry_int* entry;
	byte* data;

	if(!mp || !dat)
		return;

	data = dat;

	//Compute the position of the item within the table.
	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	//This table position has not been used yet.
	if(!entry->data){

		if(entry->key == key)
			return false;

		entry->data = data;
		entry->key = key;
		entry->size = size;
		entry->type = type;
		entry->used = true;
		entry->next = 0;

		mp->total++;

		return true;

	}

	//Find the last item in the list.
	while(entry){

		if(entry->key == key)
			return false;

		if(!entry->next){

			//Insert data at the next position.
			entry->next = allocate(mp->ctx, sizeof(map_entry_int));
			entry = entry->next;
			entry->data = data;
			entry->key = key;
			entry->size = size;
			entry->type = type;
			entry->used = true;
			entry->next = 0;

			mp->total++;

			return true;

		}

		entry = entry->next;

	}


}

bool _map_insert_ptr(map* mp, size_t key, void* dat, uint8_t type, size_t size, map_entry_int** ptr){

	size_t table_pos;
	map_entry_int* entry;
	byte* data;

	if(!mp || !dat)
		return;

	data = dat;

	//Compute the position of the item within the table.
	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	//This table position has not been used yet.
	if(!entry->data){

		if(entry->key == key)
			return false;

		entry->data = data;
		entry->key = key;
		entry->size = size;
		entry->type = type;
		entry->used = true;
		entry->next = 0;

		mp->total++;
		*ptr = entry;

		return true;

	}

	//Find the last item in the list.
	while(entry){

		if(entry->key == key)
			return false;

		if(!entry->next){

			//Insert data at the next position.
			entry->next = allocate(mp->ctx, sizeof(map_entry_int));
			entry = entry->next;
			entry->data = data;
			entry->key = key;
			entry->size = size;
			entry->type = type;
			entry->used = true;
			entry->next = 0;

			mp->total++;
			*ptr = entry;

			return true;

		}

		entry = entry->next;

	}


}

bool _map_remove(map* mp, size_t key){


	map_entry_int *entry, *tmp, *prev;
	size_t table_pos;

	if(!mp)
		return;

	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	//Check to see if the first item is the item we're looking for.
	if(entry->key == key){

		if(entry->next){

			tmp = entry->next;

			int_map_int_copy(entry, tmp);

			destroy(mp->ctx, tmp);

			return true;

		}

		else{

			entry->key = 0;
			entry->size = 0;
			entry->type = 0;
			entry->data = 0;
			entry->used = false;
			entry->next = 0;
			entry->ext = 0;

		}

	}

	prev = entry;
	entry = entry->next;

	while(entry){

		if(entry->key == key){

			tmp = entry->next;

			if(tmp){

				int_map_int_copy(entry, tmp);
				destroy(mp->ctx, tmp);

				mp->total--;

			}
			else{

				destroy(mp->ctx, entry);
				prev->next = 0;

			}

			return true;

		}

		prev = entry;
		entry = entry->next;

	}

	return false;

}

bool _map_remove_eptr(map* mp, size_t key, void** eptr){


	map_entry_int *entry, *tmp, *prev;
	size_t table_pos;
	void* eptr_i;

	if(!mp)
		return;

	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	//Check to see if the first item is the item we're looking for.
	if(entry->key == key){

		eptr_i = entry->ext;

		if(entry->next){

			tmp = entry->next;

			int_map_int_copy(entry, tmp);

			destroy(mp->ctx, tmp);

		}

		else{

			entry->key = 0;
			entry->size = 0;
			entry->type = 0;
			entry->data = 0;
			entry->used = false;
			entry->next = 0;

		}

		*eptr = eptr_i;
		return true;

	}

	prev = entry;
	entry = entry->next;

	while(entry){

		if(entry->key == key){

			eptr_i = entry->ext;
			tmp = entry->next;

			if(tmp){

				int_map_int_copy(entry, tmp);
				destroy(mp->ctx, tmp);

				mp->total--;

			}
			else{

				destroy(mp->ctx, entry);
				prev->next = 0;

			}

			*eptr = eptr_i;
			return true;

		}

		prev = entry;
		entry = entry->next;

	}

	return false;

}

bool _map_lookup(map* mp, size_t key, map_entry* ext){

	map_entry_int* entry;
	size_t table_pos;

	if(!mp || !ext)
		return false;

	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	if(entry->data){


		while(entry){

			if(entry->key == key){

				int_map_copy(entry, ext);
				return true;

			}

			entry = entry->next;
		}


	}

	return false;
}

bool _map_exists(map* mp, size_t key){

	map_entry_int* entry;
	size_t table_pos;

	if(!mp)
		return false;

	table_pos = key % mp->size;
	entry = mp->map_table + table_pos;

	if(entry->data){


		while(entry){

			if(entry->key == key)
				return true;

		}


	}

	return false;

}

bool _map_delete(map* mp){

	size_t i;
	map_entry_int *entry, *next;
	
	if(!mp)
		return false;

	int_map_int_delete(mp);

	destroy(mp->ctx, mp->map_table);
	destroy(mp->ctx, mp);

}

void _map_dealloc(void* mp){

	_map_delete((map*)mp);

}

bool _map_delete_all(map* mp, void (*deallocator)(void*)){

	size_t i;
	map_entry_int *entry, *next;
	
	if(!mp)
		return false;

	for(i = 0; i < mp->size; i++){

		if(mp->map_table[i].data){

			deallocator(mp->map_table[i].data);

			entry = mp->map_table[i].next;

			while(entry){

				next = entry->next;

				deallocator(entry->data);

				destroy(mp->ctx, entry);

				if(next)
					entry = next;
				else
					break;

			}

		}
	}

	destroy(mp->ctx, mp->map_table);
	destroy(mp->ctx, mp);

	return true;
}