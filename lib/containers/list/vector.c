/*
ozdevguy | C General Libraries

Copyright 2016 Bobby Crawford (ozdevguy)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

vector.c
========================================================================


*/

vector* _vector_new(standard_library_context* ctx, size_t data_size, size_t start_size){

	if(!ctx || !start_size)
		return 0;
	
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
	destroy(vect->ctx, (void**)&vect->data);

	vect->data = new_data;

}

void _vector_add(vector* vect, void* data){

	size_t i = 0;

	if(!vect)
		return;
	
	if(vect->used == vect->size)
		int_vector_resize(vect);

	for(i = 0; i < vect->data_size; i++)
		vect->data[(vect->used * vect->data_size) + i] = ((byte*)data)[i];

	vect->used++;

}

void* _vector_get(vector* vect, size_t pos){

	if(!vect)
		return 0;

	if(pos < vect->used)
		return (void*)(vect->data + (pos * vect->data_size));

	return 0;

}

bool _vector_set(vector* vect, size_t pos, void* data){

	size_t i, end;

	if(!vect)
		return false;

	if(pos >= vect->used)
		return false;

	pos *= vect->data_size;
	end = pos + vect->data_size;

	for(i = pos; i < end; i++)
		vect->data[i] = *((byte*)(data + i - pos));

	return true;
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

	destroy(vect->ctx, (void**)&vect->data);
	destroy(vect->ctx, (void**)&vect);

}


