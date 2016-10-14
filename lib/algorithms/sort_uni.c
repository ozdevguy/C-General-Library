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

sort_uni.c
========================================================================


*/

sort_representation_cont* _sort_setup_flist(list* input, size_t offset, uint8_t val_size){

	size_t i;
	void* data;

	sort_representation_cont* sorter;

	if(!input)
		return 0;

	//Create a sortable array.
	sorter = allocate(input->ctx, sizeof(sort_representation_cont));
	sorter->sort_arr = allocate(input->ctx, input->used * sizeof(sort_representation));
	sorter->total = input->used;
	sorter->ctx = input->ctx;

	for(i = 0; i < input->used; i++){

		data = _list_get(input, i);

		if(val_size == sizeof(byte))
			sorter->sort_arr[i].value = *((byte*)(data + offset));

		else if(val_size == sizeof(short))
			sorter->sort_arr[i].value = *((short*)(data + offset));

		else if(val_size == sizeof(int))
			sorter->sort_arr[i].value = *((int*)(data + offset));

		sorter->sort_arr[i].data = data;

	}

	return sorter;

}

sort_representation_cont* _sort_setup_fvect(vector* input, size_t offset, uint8_t val_size){

	size_t i;
	void* data;

	sort_representation_cont* sorter;

	if(!input)
		return 0;

	//Create a sortable array.
	sorter = allocate(input->ctx, sizeof(sort_representation_cont));
	sorter->sort_arr = allocate(input->ctx, input->used * sizeof(sort_representation));
	sorter->total = input->used;
	sorter->ctx = input->ctx;

	for(i = 0; i < input->used; i++){

		data = _vector_get(input, i);

		if(val_size == sizeof(byte))
			sorter->sort_arr[i].value = *((byte*)(data + offset));

		else if(val_size == sizeof(short))
			sorter->sort_arr[i].value = *((short*)(data + offset));

		else if(val_size == sizeof(int))
			sorter->sort_arr[i].value = *((int*)(data + offset));

		sorter->sort_arr[i].data = data;

	}

	return sorter;

}


void _sort_copy_back_tlist(list* lst, sort_representation_cont* sorter){

	size_t i;

	for(i = 0; i < lst->used; i++)
		lst->data[i] = sorter->sort_arr[i].data;

	destroy(sorter->ctx, sorter->sort_arr);
	destroy(sorter->ctx, sorter);

}

void _sort_copy_back_tvect(vector* vect, sort_representation_cont* sorter){

	size_t i;
	vector* nv;

	nv = _vector_new(sorter->ctx, sizeof(vect->data_size), vect->size);

	for(i = 0; i < vect->used; i++)
		_vector_add(nv, sorter->sort_arr[i].data);

	destroy(sorter->ctx, vect->data);
	vect->data = nv->data;

	destroy(sorter->ctx, nv);
	destroy(sorter->ctx, sorter->sort_arr);
	destroy(sorter->ctx, sorter);

}