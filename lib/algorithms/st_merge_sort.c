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

st_merge_sort.c
========================================================================


*/

//Sort a list in ascending order.
bool _mergesort_list_asc(list*, size_t, uint8_t);

//Sort a list in descending order.
bool _mergesort_list_desc(list*, size_t, uint8_t);

//Sort a vector in ascending order.
bool _mergesort_vector_asc(vector*, size_t, uint8_t);

//Sort a vector in descending order.
bool _mergesort_vector_desc(vector*, size_t, uint8_t);

//Sort a normal integer array in ascending order.
bool _mergesort_arr_asc(void*, uint8_t);

//Sort a normal integer array in descending order.
bool _mergesort_arr_desc(void*, uint8_t);


static mergesort_representation* int_mergesort_vect_copy(mergesort_vect_description* desc, size_t start, size_t end){

	size_t total, i, j, data_size, offset;
	mergesort_representation* rep;
	vector* vect;
	byte* pos;

	total = end - start + 1;
	vect = desc->vect;
	data_size = vect->data_size;
	offset = desc->offset;
	rep = allocate(vect->ctx, sizeof(mergesort_representation) * total);

	for(i = 0; i < total; i++){

		pos = vect->data + (data_size * (start + i));

		if(desc->val_size == sizeof(byte))
			rep[i].value = *((byte*)(pos + offset));

		else if(desc->val_size == sizeof(short))
			rep[i].value = *((short*)(pos + offset));

		else if(desc->val_size == sizeof(int))
			rep[i].value = *((int*)(pos + offset));

		else if(desc->val_size == sizeof(long))
			rep[i].value = *((long*)(pos + offset));

		rep[i].copy = allocate(vect->ctx, data_size);

		for(j = 0; j < data_size && j < 100; j++)
			rep[i].copy[j] = *((byte*)(pos + j));
	
	}

	return rep;

}

static void int_mergesort_merge_vect_asc(mergesort_vect_description* desc, size_t start, size_t middle, size_t end){

	mergesort_representation *left, *right;
	vector* vect;
	size_t i, j = 0, k = 0, left_total, right_total;

	left_total = (middle - start) + 1;
	right_total = end - middle;
	vect = desc->vect;

	//Create out temporary left and right arrays.
	left = int_mergesort_vect_copy(desc, start, middle);
	right = int_mergesort_vect_copy(desc, (middle + 1), end);

	
	for(i = start; i <= end; i++){

		if(j < left_total && k < right_total){

			if(left[j].value < right[k].value){

				_vector_set(vect, i, left[j].copy);
				destroy(vect->ctx, left[j++].copy);

			}
			else{

				_vector_set(vect, i, right[k].copy);
				destroy(vect->ctx, right[k++].copy);

			}

		}
		
		else if(j < left_total){

			_vector_set(vect, i, left[j].copy);
			destroy(vect->ctx, left[j++].copy);

		}

		else{

			_vector_set(vect, i, right[k].copy);
			destroy(vect->ctx, right[k++].copy);

		}

	}

	destroy(vect->ctx, left);
	destroy(vect->ctx, right);

}

static void int_mergesort_merge_vect_desc(mergesort_vect_description* desc, size_t start, size_t middle, size_t end){

	mergesort_representation *left, *right;
	vector* vect;
	size_t i, j = 0, k = 0, left_total, right_total;

	left_total = (middle - start) + 1;
	right_total = end - middle;
	vect = desc->vect;

	//Create out temporary left and right arrays.
	left = int_mergesort_vect_copy(desc, start, middle);
	right = int_mergesort_vect_copy(desc, (middle + 1), end);

	
	for(i = start; i <= end; i++){

		if(j < left_total && k < right_total){

			if(left[j].value > right[k].value){

				_vector_set(vect, i, left[j].copy);
				destroy(vect->ctx, left[j++].copy);

			}
			else{

				_vector_set(vect, i, right[k].copy);
				destroy(vect->ctx, right[k++].copy);

			}

		}
		
		else if(j < left_total){

			_vector_set(vect, i, left[j].copy);
			destroy(vect->ctx, left[j++].copy);

		}

		else{

			_vector_set(vect, i, right[k].copy);
			destroy(vect->ctx, right[k++].copy);

		}

	}

	destroy(vect->ctx, left);
	destroy(vect->ctx, right);

}


static void int_mergesort_vect(mergesort_vect_description* desc, size_t start, size_t end){

	size_t middle = (start + end) / 2;

	if(start < end){

		int_mergesort_vect(desc, start, middle);
		int_mergesort_vect(desc, middle + 1, end);

		if(!desc->order)
			int_mergesort_merge_vect_desc(desc, start, middle, end);
		else
			int_mergesort_merge_vect_asc(desc, start, middle, end);

	}

}

bool _mergesort_vector_asc(vector* input, size_t offset, uint8_t val_size){

	if(!input)
		return false;

	//int_mergesort_vect_asc(input, offset, 0, vector->used);

	return true;

}

bool _mergesort_vector_desc(vector* input, size_t offset, uint8_t val_size){

	mergesort_vect_description* desc;

	if(!input)
		return false;

	desc = allocate(input->ctx, sizeof(mergesort_vect_description));
	desc->vect = input;
	desc->offset = offset;
	desc->val_size = val_size;
	desc->order = 0;

	int_mergesort_vect(desc, 0, input->used);

	destroy(input->ctx, desc);

	return true;

}