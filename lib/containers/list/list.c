
//Create a new list.
list* _list_new(standard_library_context*, size_t); //COMPLETE

//Delete a list.
void _list_delete(list*); //COMPLETE

//Add an item to the list.
void _list_add(list*, void*); //COMPLETE

//Get an item from the list.
void* _list_get(list*, size_t); //COMPLETE

//Remove an item from the list.
bool _list_remove(list*, size_t); //COMPLETE

//Reset the iterator.
void _list_reset_iterator(list*); //COMPLETE

//See if there are items left to be iterated through.
bool _list_has_next(list*); //COMPLETE

//Get the next item in the list.
void* _list_get_next(list*); //COMPLETE

//Merge two lists.
bool _list_merge(list*, list*);

static void int_list_resize(list* lst, size_t new_size){

	byte** new_data;
	size_t i;

	if(!lst)
		return;

	if(new_size <= lst->size)
		return;

	new_data = allocate(lst->ctx, new_size * sizeof(size_t));

	for(i = 0; i < lst->used; i++)
		new_data[i] = lst->data[i];

	destroy(lst->ctx, lst->data);

	lst->data = new_data;
	lst->size = new_size;

}

list* _list_new(standard_library_context* ctx, size_t start_size){

	if(!ctx || !start_size)
		return 0;
	
	list* l = allocate(ctx, sizeof(list));
	l->ctx = ctx;
	l->data = allocate(ctx, sizeof(size_t) * start_size);
	l->size = start_size;

	return l;

}

void _list_delete(list* lst){

	if(!lst)
		return;

	destroy(lst->ctx, lst->data);
	destroy(lst->ctx, lst);

}

void _list_add(list* lst, void* data){

	int8_t i;

	if(!lst)
		return;

	if(lst->used == lst->size)
		int_list_resize(lst, lst->size * 2);

	lst->data[lst->used++] = (byte*)data;
	
}

void _list_reset_iterator(list* lst){

	if(!lst)
		return;

	lst->iterator = 0;

}

bool _list_has_next(list* lst){

	if(!lst)
		return false;

	if(lst->iterator < lst->used)
		return true;

	return false;
}

void* _list_get_next(list* lst){

	size_t* l;

	if(!lst)
		return 0;

	if(lst->iterator >= lst->used)
		return 0;

	return (void*)lst->data[lst->iterator++];

}

bool _list_remove(list* lst, size_t pos){

	size_t i;
	bool removed;

	if(!lst)
		return false;

	if(pos >= lst->used)
		return false;

	for(i = pos; i < (lst->used - 1); i++)
		lst->data[i] = lst->data[i + 1];

	lst->used--;

	return true;

}

void* _list_get(list* lst, size_t pos){

	size_t* l;

	if(!lst)
		return 0;

	if(pos >= lst->used)
		return 0;


	return (void*)lst->data[pos];

}

bool _list_merge(list* lst1, list* lst2){

	size_t i;

	if(!lst1 || !lst2)
		return false;

	for(i = 0; i < lst2->used; i++)
		_list_add(lst1, lst2->data[i]);

	return true;

}

