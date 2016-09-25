
//Create a new hashmap.
map* _hashmap_new(standard_library_context*, size_t);

//Delete a hashmap.
bool _hashmap_delete(map*);

//Set a custom hash algorithm.
void _hashmap_set_algorithm(map*, size_t (byte*));

//Resize a hashmap.
bool _hashmap_resize(map*, size_t);

//Delete a map and all of its data.
bool _hashmap_delete_all(map*, void (void*));

//Deallocator
void _hashmap_dealloc(void*);

//Insert into a hashmap using a character array.
bool _hashmap_insert_fbytes(map*, byte*, void*, uint8_t, size_t);

//Insert into hashmap using a string.
bool _hashmap_insert(map*, string*, void*, uint8_t, size_t);

//Get an item from the hashmap.
bool _hashmap_lookup_fbytes(map*, byte*, map_entry*);

//Get an item from the hashmap.
bool _hashmap_lookup(map*, string*, map_entry*);

//Remove an item from a hashmap.
bool _hashmap_remove_fbytes(map*, byte*);

//Remove an item from a hashmap.
bool _hashmap_remove(map*, string*);

//Reset the hashmap iterator.
void _hashmap_reset_iterator(map*);

//Check to see if there are any additional items to iterate through.
bool _hashmap_has_next(map*);

//Pull the next item in the iteration.
bool _hashmap_get_next(map*, map_entry*);


static size_t int_hashmap_hash(byte* input){

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

bool _hashmap_delete(map* hashmap){

	map_entry entry;

	_map_reset_iterator(hashmap);

	while(_map_has_next(hashmap)){

		_map_get_next(hashmap, &entry);
		_string_delete((string*)entry.ext);
	}

	return _map_delete(hashmap);

}

void _hashmap_set_algorithm(map* hashmap, size_t (*hash_algorithm)(byte*)){

	if(!hashmap || !hash_algorithm)
		return;

	hashmap->hash_algorithm = hash_algorithm;

}

bool _hashmap_resize(map* hashmap, size_t new_size){

	return _map_resize(hashmap, new_size);

}

bool _hashmap_delete_all(map* hashmap, void (*deallocator)(void*)){
	
	return _map_delete_all(hashmap, deallocator);

}

void _hashmap_dealloc(void* hashmap){

	_map_dealloc(hashmap);

}


bool _hashmap_insert_fbytes(map* hashmap, byte* key, void* data, uint8_t type, size_t size){

	size_t hashed_key;
	map_entry_int* entry;

	if(!hashmap || !key || !data)
		return false;

	hashed_key = hashmap->hash_algorithm(key);

	if(_map_insert_ptr(hashmap, hashed_key, data, type, size, &entry)){

		entry->ext = _string_new_fbytes(hashmap->ctx, key);

		return true;

	}

	return false;

}

bool _hashmap_insert(map* hashmap, string* key, void* data, uint8_t type, size_t size){

	size_t hashed_key;
	map_entry_int* entry;
	byte* key_data;

	if(!hashmap || !key || !data)
		return false;

	key_data = _string_pull(key, &hashed_key);

	hashed_key = hashmap->hash_algorithm(key_data);

	printf("Hashed key: %ld\n", hashed_key);

	if(_map_insert_ptr(hashmap, hashed_key, data, type, size, &entry)){

		entry->ext = _string_new_fbytes(hashmap->ctx, key_data);
		destroy(hashmap->ctx, key_data);
		return true;

	}


	destroy(hashmap->ctx, key_data);
	return false;


}

bool _hashmap_remove_fbytes(map* hashmap, byte* key){

	size_t hashed_key;
	void* ext;

	if(!hashmap || !key)
		return false;

	hashed_key = hashmap->hash_algorithm(key);

	if(_map_remove_eptr(hashmap, hashed_key, &ext)){

		_string_delete((string*)ext);
		return true;

	}

	return false;

}

bool _hashmap_remove(map* hashmap, string* key){

	size_t hashed_key;
	byte* key_data;
	void* ext;

	if(!hashmap || !key)
		return false;

	key_data = _string_pull(key, &hashed_key);

	hashed_key = hashmap->hash_algorithm(key_data);

	destroy(hashmap->ctx, key_data);

	if(_map_remove_eptr(hashmap, hashed_key, &ext)){

		_string_delete((string*)ext);
		return true;

	}

	return false;

}

bool _hashmap_lookup(map* hashmap, string* key, map_entry* ext){

	size_t hashed_key;
	byte* key_data;

	if(!hashmap || !key || !ext)
		return false;

	key_data = _string_pull(key, &hashed_key);

	hashed_key = hashmap->hash_algorithm(key_data);

	destroy(hashmap->ctx, key_data);

	return _map_lookup(hashmap, hashed_key, ext);

}

bool _hashmap_lookup_fbytes(map* hashmap, byte* key, map_entry* ext){

	size_t hashed_key;

	if(!hashmap || !key || !ext)
		return false;

	hashed_key = hashmap->hash_algorithm(key);

	return _map_lookup(hashmap, hashed_key, ext);

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

bool _hashmap_get_next(map* hashmap, map_entry* ext){

	if(!hashmap)
		return false;

	return _map_get_next(hashmap, ext);

}