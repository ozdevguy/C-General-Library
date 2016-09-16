
//Create a new list.
list* _list_new(standard_library_context*, size_t); //COMPLETE

//Delete a list.
void _list_delete(list*); //COMPLETE

//List deallocator.
void _list_dealloc(void*); //COMPLETE

//List delete all.
void _list_delete_all(list*, void (void*)); //COMPLETE

//Add an item to the list.
void _list_add(list*, void*); //COMPLETE

//Change an item at a particular index.
bool _list_mod(list*, void*, size_t); //COMPLETE

//Get an item from the list.
void* _list_get(list*, size_t); //COMPLETE

//Remove an item from the list.
void _list_remove(list*, size_t); //COMPLETE

//Find a pointer in the list.
size_t _list_find(list*, void*, size_t); //COMPLETE

//Reset the iterator.
void _list_reset_iterator(list*); //COMPLETE

//See if there are items left to be iterated through.
bool _list_has_next(list*); //COMPLETE

//Get the next item in the list.
void* _list_get_next(list*); //COMPLETE

static void int_list_resize(list* lst, size_t new_size){

	byte* new_data;
	size_t i;

	if(!lst)
		return;

	if(new_size <= lst->size)
		return;

	new_data = allocate(lst->ctx, new_size * sizeof(size_t));

	for(i = 0; i < (lst->used * sizeof(size_t)); i++)
		new_data[i] = lst->data[i];

	destroy(lst->ctx, lst->data);

	lst->data = new_data;
	lst->size = new_size;

}

list* _list_new(standard_library_context* ctx, size_t start_size){

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

void _list_delete_all(list* lst, void (*dealloc)(void*)){

	size_t i;

	if(!lst || !dealloc)
		return;

	for(i = 0; i < lst->used; i++)
		dealloc(_list_get(lst, i));
	

	_list_delete(lst);

}

void _list_dealloc(void* lst){

	_list_delete(lst);

}

void _list_add(list* lst, void* data){

	int8_t i;
	size_t val;
	byte* ptr_dat;

	val = (size_t)data;
	ptr_dat = (byte*)&val;

	if(!lst)
		return;

	if(lst->used == lst->size)
		int_list_resize(lst, lst->size * 2);

	for(i = 0; i < sizeof(size_t); i++)
		lst->data[(lst->used * sizeof(size_t)) + i] = ptr_dat[i];


	lst->used++;
	

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

	l = (size_t*)lst->data;

	return (void*)l[lst->iterator++];

}

void _list_remove(list* lst, size_t pos){

	size_t i;
	bool removed;

	if(!lst)
		return;

	if(pos >= lst->used)
		return;

	for(i = ((pos + 1) * sizeof(size_t)); i < (lst->used * sizeof(size_t)); i++)
		lst->data[i - sizeof(size_t)] = lst->data[i];

	lst->used--;

}

void* _list_get(list* lst, size_t pos){

	size_t* l;

	if(!lst)
		return 0;

	if(pos >= lst->used)
		return 0;

	l = (size_t*)lst->data;

	return (void*)l[pos];

}

size_t _list_find(list* lst, void* ptr, size_t start_pos){

	size_t i;

	if(!lst)
		return 0;

	if(start_pos >= lst->used)
		return 0;

	for(i = start_pos; i < lst->used; i++){

		if(_list_get(lst, i) == ptr)
			return i;

	}

	return 0;
}

bool _list_mod(list* lst, void* data, size_t pos){

	int8_t i;
	size_t val;
	byte* ptr_dat;

	val = (size_t)data;
	ptr_dat = (byte*)&val;

	if(!lst)
		return false;

	if(pos >= lst->used)
		return false;

	if(lst->used == lst->size)
		int_list_resize(lst, lst->size * 2);

	for(i = 0; i < sizeof(size_t); i++)
		lst->data[(pos * sizeof(size_t)) + i] = ptr_dat[i];

	return true;
}
