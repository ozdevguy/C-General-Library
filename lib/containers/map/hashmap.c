
//Create a new hashmap.
map* _hashmap_new(standard_library_context*, size_t);

//Delete a hashmap.
void _hashmap_delete(map*);

//Set a custom hash algorithm.
void _hashmap_set_algorithm(map*, size_t (byte*));

//Resize a hashmap.
bool _hashmap_resize(map*, size_t);

//Insert into a hashmap using a character array.
bool _hashmap_insert_fbytes(map*, byte*, void*);

//Insert into hashmap using a string.
bool _hashmap_insert(map*, string*, void*);

//Get an item from the hashmap.
void* _hashmap_lookup_fbytes(map*, byte*);

//Get an item from the hashmap.
void* _hashmap_lookup(map*, string*);

//Remove an item from a hashmap.
bool _hashmap_remove_fbytes(map*, byte*);

//Remove an item from a hashmap.
bool _hashmap_remove(map*, string*);

//Reset the hashmap iterator.
void _hashmap_reset_iterator(map*);

//Check to see if there are any additional items to iterate through.
bool _hashmap_has_next(map*);

//Pull the next data pointer in the iteration.
void* _hashmap_get_next(map*);

//Pull the next item in the iteration.
hashmap_entry* _hashmap_get_next_e(map*);


size_t int_hashmap_hash(byte* input){

	size_t i = 0, res = 0;

	while(input[i] && i < 1000000)
		res += (input[i++] * i);

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