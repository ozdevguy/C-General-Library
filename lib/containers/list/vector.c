
//Create a new vector.
vector* _vector_new(standard_library_context*, size_t, size_t);

//Delete a vector.
void _vector_delete(vector*);

//Vector deallocator.
void _vector_dealloc(void*);

//Vector delete all.
void _vector_delete_all(vector*, void (void*));

//Add an item to the vector.
void _vector_add(vector*, void*);

//Get an item from the vector.
void* _vector_get(vector*, size_t);

//Remove an item from the vector.
void _vector_remove(vector*, size_t);

//Reset the iterator.
void _vector_reset_iterator(vector*);

//See if there are items left to be iterated through.
bool _vector_has_next(vector*);

//Get the next item in the vector.
void* _vector_get_next(vector*);



vector* _vector_new(standard_library_context* ctx, size_t data_size, size_t start_size){

	vector* vect = allocate(ctx, sizeof(vector));
	vect->ctx = ctx;
	vect->data_size = data_size;

	vect->data = allocate(ctx, data_size * start_size);
	vect->size = start_size;

	return vect;

}

static void int_vector_resize(vector* vect){

	size_t i;
	byte* new_data = allocate(vect->ctx, vect->data_size * vect->size * 2);

	for(i = 0; i < (vect->used * vect->data_size); i++)
		new_data[i] = vect->data[i];
	
	vect->size *= 2;
	destroy(vect->ctx, vect->data);

	vect->data = new_data;

}

void _vector_add(vector* vect, void* data){

	size_t i = 0;

	if(vect->used == vect->size)
		int_vector_resize(vect);

	for(i = 0; i < vect->data_size; i++)
		vect->data[(vect->used++ * vect->data_size) + i] = (byte*)data[i];


}

void* _vector_get(vector* vect, size_t pos){

	if(pos < vect->used)
		return (void*)(vect->data + (pos * vect->data_size));

	return 0;

}

void _vector_remove(vector* vect, size_t pos){

	size_t i, b_size;

	if(!vect)
		return;

	vect->iterator = 0;

	if(pos >= vect->used)
		return;

	b_size = (--vect->used * vect->data_size);
	pos *= vect->data_size;

	for(i = pos; i < b_size; i++)
		vect->data[i] = vect->data[i + vect->data_size];

}

void _vector_reset_iterator(vector* vect){

	vect->iterator = 0;

}

bool _vector_has_next(vector* vect){

	if(vect->iterator < vect->used)
		return true;

	return false;

}

void* _vector_get_next(vector* vect){

	if(vect->iterator < vect->used)
		return (void*)(vect->data + (vect->iterator++ * vect->data_size));

	return 0;

}

void _vector_delete(vector* vect){

	destroy(vect->ctx, vect->data);
	destroy(vect->ctx, vect);

}

void _vector_delete_all(vector* vect, void (*dealloc)(void*)){

	size_t i;

	for(i = 0; i < vect->used; i++)
		dealloc(vect->data + (i * vect->data_size));

	_vector_delete(vect);

}

void _vector_dealloc(void* vect){

	_vector_delete((vector*)vect);

}


