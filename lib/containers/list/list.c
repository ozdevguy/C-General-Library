
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
void _list_remove(list*, size_t);

//Reset the iterator.
void _list_reset_iterator(list*);

//See if there are items left to be iterated through.
bool _list_has_next(list*);

//Get the next item in the list.
void* _list_get_next(list*);

static void int_list_resize(list* lst, size_t new_size){


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

void _list_dealloc(void* lst){

	_list_delete(lst);

}

void _list_add(list* lst, void* data){

	int8_t i;
	size_t val;
	byte* ptr_dat;

	val = (size_t)data;
	ptr_dat = (byte*)&val;

	printf("%p\n", (void*)val);

	if(!lst)
		return;

	if(lst->used == lst->size)
		int_list_resize(lst, lst->size * 2);

	for(i = 0; i < sizeof(size_t); i++)
		lst->data[(lst->used * sizeof(size_t)) + i] = ptr_dat[i];


	lst->used++;
	

}

void _list_remove(list* lst, size_t pos){

	
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
