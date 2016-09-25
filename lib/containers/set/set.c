//Create a new set.
set* _set_new(standard_library_context*, size_t); //COMPLETE

//Destroy a set.
void _set_delete(set*); //COMPLETE

//Insert an item into the set (returns false if null pointer is given, or if the item already exists in the set).
bool _set_insert(set*, size_t, void*); //COMPLETE

//Check to see if an item is in the set.
bool _set_has(set*, size_t); //COMPLETE

//Get an item from the set by index.
bool _set_get(set*, size_t, set_item*);

//Get an item from the set by identifier.
void* _set_get_by_id(set*, size_t);

//Remove an item from the set by index.
void* _set_remove(set*, size_t);

//Remove an item from the set by identifier.
void* _set_remove_by_id(set*, size_t);

//Reset the iterator.
void _set_reset_iterator(set*);

//Check to see if the set has any other items (iterator).
bool _set_has_next(set*);

//Get the next item in the set.
bool _set_get_next(set*, set_item*);


static void int_set_resize(set* st, size_t new_size){

	set_item* new_items;
	size_t i;

	if(!st)
		return;

	new_items = allocate(st->ctx, new_size * sizeof(set_item));

	for(i = 0; i < st->used; i++)
		new_items[i] = st->items[i];

	destroy(st->ctx, st->items);

	st->items = new_items;
	st->size = new_size;

}

static void int_set_splice(set* st, size_t split_index){


}

set* _set_new(standard_library_context* ctx, size_t start_size){

	set* new_set;

	if(!ctx)
		return 0;

	new_set = allocate(ctx, sizeof(set));
	new_set->items = allocate(ctx, start_size * sizeof(set_item));
	new_set->size = start_size;
	new_set->ctx = ctx;

	return new_set;

}

void _set_delete(set* st){

	if(!st)
		return;

	destroy(st->ctx, st->items);
	destroy(st->ctx, st);

}

bool _set_has(set* st, size_t id){

	size_t i;

	if(!st)
		return false;

	for(i = 0; i < st->used; i++){

		if(st->items[i].identifier == id)
			return true;

	}

}

bool _set_insert(set* st, size_t id, void* ptr){

	size_t i;

	if(!st)
		return false;

	if(_set_has(st, id))
		return false;

	if(st->used >= st->size)
		int_set_resize(st, st->size * 2);

	st->items[st->used].identifier = id;
	st->items[st->used++].ptr = ptr;
	return true;

}




