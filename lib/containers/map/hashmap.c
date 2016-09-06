
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
map_entry _hashmap_lookup_fbytes(map*, byte*);

//Get an item from the hashmap.
map_entry _hashmap_lookup(map*, string*);

//Remove an item from a hashmap.
bool _hashmap_remove_fbytes(map*, byte*);

//Remove an item from a hashmap.
bool _hashmap_remove(map*, string*);

//Reset the hashmap iterator.
void _hashmap_reset_iterator(map*);

//Check to see if there are any additional items to iterate through.
bool _hashmap_has_next(map*);

//Pull the next item in the iteration.
map_entry _hashmap_get_next(map*);


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

	if(!hashmap || !key || !data)
		return false;

	hashed_key = hashmap->hash_algorithm(key);

	return _map_insert(hashmap, hashed_key, data, type, size);

}

bool _hashmap_insert(map* hashmap, string* key, void* data, uint8_t type, size_t size){

	size_t hashed_key;
	byte* key_data;

	if(!hashmap || !key || !data)
		return false;

	key_data = _string_pull(key, &hashed_key);

	hashed_key = hashmap->hash_algorithm(key_data);

	destroy(hashmap->ctx, key_data);

	return _map_insert(hashmap, hashed_key, data, type, size);



}

bool _hashmap_remove_fbytes(map* hashmap, byte* key){

	size_t hashed_key;

	if(!hashmap || !key)
		return false;

	hashed_key = hashmap->hash_algorithm(key);

	return _map_remove(hashmap, hashed_key);

}

bool _hashmap_remove(map* hashmap, string* key){

	size_t hashed_key;
	byte* key_data;

	if(!hashmap || !key)
		return false;

	key_data = _string_pull(key, &hashed_key);

	hashed_key = hashmap->hash_algorithm(key_data);

	destroy(hashmap->ctx, key_data);

	return _map_remove(hashmap, hashed_key);

}

map_entry _hashmap_lookup(map* hashmap, string* key){

	size_t hashed_key;
	byte* key_data;
	map_entry entry;
	entry.success = false;

	if(!hashmap || !key)
		return entry;

	key_data = _string_pull(key, &hashed_key);

	hashed_key = hashmap->hash_algorithm(key_data);

	destroy(hashmap->ctx, key_data);

	return _map_lookup(hashmap, hashed_key);

}

map_entry _hashmap_lookup_fbytes(map* hashmap, byte* key){

	size_t hashed_key;
	map_entry entry;
	entry.success = false;

	if(!hashmap || !key)
		return entry;

	hashed_key = hashmap->hash_algorithm(key);

	return _map_lookup(hashmap, hashed_key);

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

map_entry _hashmap_get_next(map* hashmap){

	map_entry entry;
	entry.success = false;

	if(!hashmap)
		return entry;

	return _map_get_next(hashmap);

}