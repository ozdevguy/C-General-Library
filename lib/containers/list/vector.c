
vector* _vector_new(unsigned long start_size, size_t data_size){

	vector* vect = allocate(sizeof(vector));
	vect->data_size = data_size;

	vect->data = allocate(data_size * start_size);
	vect->size = start_size;

	return vect;

}

static void int_vector_resize(vector* vect){

	int i;
	byte* data = vect->data;
	byte* new_data = allocate(vect->data_size * vect->size * 2);

	for(i = 0; i < (vect->used * vect->data_size); i++)
		new_data[i] = data[i];
	

	vect->size *= 2;
	destroy(data);

	vect->data = new_data;

}

void _vector_add(vector* vect, void* data){

	int i = 0;

	byte* dat = data;

	if(vect->used >= vect->size)
		int_vector_resize(vect);

	for(i = 0; i < vect->data_size; i++)
		vect->data[(vect->used * vect->data_size) + i] = dat[i];

	vect->used++;


}

void* _vector_get(vector* vect, unsigned int pos){

	if(pos < vect->used)
		return (void*)(vect->data + (pos * vect->data_size));

	return 0;

}

void _vector_reset_iterator(vector* vect){

	vect->iterator = 0;

}

void* _vector_get_next(vector* vect){

	if(vect->iterator < vect->used)
		return (void*)(vect->data + (vect->iterator++ * vect->data_size));

	return 0;

}



void _vector_destroy(vector* vect){

	destroy(vect->data);
	destroy(vect);

}


