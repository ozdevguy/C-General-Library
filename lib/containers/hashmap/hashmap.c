

hashmap* _hashmap_new(standard_library_context* ctx, size_t start_size){

	hashmap* map;

	if(!ctx)
		return 0;

	map = allocate(ctx, sizeof(hashmap));
	map->ctx = ctx;
	map->size = start_size;

	map->hash_table = allocate(ctx, sizeof(hashmap_entry) * start_size);


	return map;

}

bool _hashmap_delete(hashmap* map){

	hashmap_entry* current;
	hashmap_entry* next;
	
	if(!map)
		return false;

	for(i = 0; i < map->size; i++){

		if(map->hash_table[i].key){


		}
	}

	destroy(map->ctx, map);
}