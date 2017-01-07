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

hashmap.c
========================================================================


*/

size_t int_hashmap_hash(byte* input){

	size_t i = 0, res = 0;

	while(input[i] && i < 1000000){

		res += (input[i] * i);
		i++;
		
	}

	return res;

}


map* _hashmap_new(standard_library_context* ctx, size_t start_size){

	map* hashmap;

	if(!ctx)
		return 0;

	hashmap = _map_new(ctx, start_size);

	hashmap->hash_algorithm = int_hashmap_hash;

	return hashmap;

}

void _hashmap_delete(map* hashmap){

	void* data;
	map_entry* entry;
	hashmap_entry* hm_entry;

	if(!hashmap)
		return;
	
	_map_reset_iterator(hashmap);

	while(_map_has_next(hashmap)){

		entry = _map_get_next_e(hashmap);
		hm_entry = entry->ext;
		_string_delete(hm_entry->key);
		destroy(hashmap->ctx, hm_entry);
		
	}

	_map_delete(hashmap);

}

void _hashmap_set_algorithm(map* hashmap, size_t (*hash_algorithm)(byte*)){

	if(!hashmap || !hash_algorithm)
		return;

	hashmap->hash_algorithm = hash_algorithm;

}

bool _hashmap_resize(map* hashmap, size_t new_size){

	return _map_resize(hashmap, new_size);

}


bool _hashmap_insert_fbytes(map* hashmap, byte* key, void* data){

	size_t hashed_key;
	map_entry* entry;
	hashmap_entry* hm_entry;

	if(!hashmap || !key || !data)
		return false;

	hashed_key = hashmap->hash_algorithm(key);

	if((entry = _map_insert_e(hashmap, hashed_key, 0))){

		hm_entry = allocate(hashmap->ctx, sizeof(hashmap_entry));
		hm_entry->key = _string_new_fbytes(hashmap->ctx, key);
		hm_entry->data = data;
		entry->ext = hm_entry;
		return true;

	}

	return false;

}

bool _hashmap_insert(map* hashmap, string* key, void* data){

	size_t hashed_key;
	map_entry* entry;
	byte* string_data;
	hashmap_entry* hm_entry;

	if(!hashmap || !key || !data)
		return false;

	string_data = _string_pull(key, &hashed_key);
	hashed_key = hashmap->hash_algorithm(string_data);

	if((entry = _map_insert_e(hashmap, hashed_key, 0))){

		hm_entry = allocate(hashmap->ctx, sizeof(hashmap_entry));
		hm_entry->key = _string_new_fbytes(hashmap->ctx, string_data);
		hm_entry->data = data;
		entry->ext = hm_entry;
		destroy(hashmap->ctx, string_data);
		return true;

	}

	destroy(hashmap->ctx, string_data);
	return false;

}

bool _hashmap_remove_fbytes(map* hashmap, byte* key){

	size_t hashed_key;
	map_entry entry;
	hashmap_entry* hm_entry;

	if(!hashmap || !key)
		return false;

	hashed_key = hashmap->hash_algorithm(key);

	if(_map_remove_e(hashmap, hashed_key, &entry)){

		hm_entry = entry.ext;
		_string_delete(hm_entry->key);
		destroy(hashmap->ctx, hm_entry);
		return true;

	}

	return false;

}

bool _hashmap_remove(map* hashmap, string* key){

	size_t hashed_key;
	byte* string_data;
	map_entry entry;
	hashmap_entry* hm_entry;

	if(!hashmap || !key)
		return false;

	string_data = _string_pull(key, &hashed_key);
	hashed_key = hashmap->hash_algorithm(string_data);
	destroy(hashmap->ctx, string_data);

	if(_map_remove_e(hashmap, hashed_key, &entry)){

		hm_entry = entry.ext;
		_string_delete(hm_entry->key);
		destroy(hashmap->ctx, hm_entry);
		return true;

	}

	return false;

}

void* _hashmap_lookup(map* hashmap, string* key){

	size_t hashed_key;
	byte* key_data;
	map_entry* entry;
	hashmap_entry* hm_entry;

	if(!hashmap || !key)
		return 0;

	key_data = _string_pull(key, &hashed_key);

	hashed_key = hashmap->hash_algorithm(key_data);

	destroy(hashmap->ctx, key_data);

	entry = _map_lookup_e(hashmap, hashed_key);

	 if(!entry)
	 	return 0;

	 hm_entry = entry->ext;

	 return hm_entry->data;

}

void* _hashmap_lookup_fbytes(map* hashmap, byte* key){

	size_t hashed_key;
	map_entry* entry;
	hashmap_entry* hm_entry;

	if(!hashmap || !key)
		return false;

	hashed_key = hashmap->hash_algorithm(key);

	entry = _map_lookup_e(hashmap, hashed_key);

	if(!entry)
		return 0;

	 hm_entry = entry->ext;

	 return hm_entry->data;

}

void _hashmap_reset_iterator(map* hashmap){

	if(!hashmap)
		return;

	_map_reset_iterator(hashmap);

}

bool _hashmap_has_next(map* hashmap){

	if(!hashmap)
		return false;

	return _map_has_next(hashmap);

}

hashmap_entry* _hashmap_get_next_e(map* hashmap){

	map_entry* entry;

	if(!hashmap)
		return false;

	entry = _map_get_next_e(hashmap);

	if(!entry)
		return 0;

	return (hashmap_entry*)entry->ext;
}

void* _hashmap_get_next(map* hashmap){

	hashmap_entry* entry;

	if((entry = _hashmap_get_next_e(hashmap)))
		return entry->data;

	return 0;
}