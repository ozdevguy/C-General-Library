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

st_quick_sort.c
========================================================================


*/

//Sort a list in ascending order.
bool _quicksort_list_asc(list*, size_t, uint8_t);

//Sort a list in descending order.
bool _quicksort_list_desc(list*, size_t, uint8_t);

//Sort a vector in ascending order.
bool _quicksort_vector_asc(vector*, size_t, uint8_t);

//Sort a vector in descending order.
bool _quicksort_vector_desc(vector*, size_t, uint8_t);

//Sort a normal integer array in ascending order.
bool _quicksort_arr_asc(void*, uint8_t);

//Sort a normal integer array in descending order.
bool _quicksort_arr_desc(void*, uint8_t);

size_t test = 0;

static long int_quicksort_vect_value(quicksort_vect_description* desc, size_t index){

	if(desc->val_size == sizeof(char))
		return (long)*((char*)(_vector_get(desc->vect, index) + desc->offset));
	else if(desc->val_size == sizeof(short))
		return (long)*((short*)(_vector_get(desc->vect, index) + desc->offset));
	else if(desc->val_size == sizeof(int))
		return (long)*((int*)(_vector_get(desc->vect, index) + desc->offset));
	else if(desc->val_size == sizeof(long))
		return (long)*((long*)(_vector_get(desc->vect, index) + desc->offset));

}

static void int_quicksort_swap(quicksort_vect_description* desc, size_t a, size_t b){

	_vector_set(desc->vect, desc->vect->used - 1, _vector_get(desc->vect, b));
	_vector_set(desc->vect, b, _vector_get(desc->vect, a));
	_vector_set(desc->vect, a, _vector_get(desc->vect, desc->vect->used - 1));

}

static size_t int_quicksort_vect_partition_desc(quicksort_vect_description* desc, size_t start, size_t end){

	size_t w, i;
	long p;
	vector* vect;

	vect = desc->vect;
	w = start;
	p = int_quicksort_vect_value(desc, end);

	for(i = start; i < end; i++){

		if(int_quicksort_vect_value(desc, i) > p)
			int_quicksort_swap(desc, i, w++);

	}

	if(w != end)
		int_quicksort_swap(desc, end, w);

	else
		w--;

	return w;

}

static size_t int_quicksort_vect_partition_asc(quicksort_vect_description* desc, size_t start, size_t end){

	size_t w, i;
	long p;
	vector* vect;

	vect = desc->vect;
	w = start;
	p = int_quicksort_vect_value(desc, end);

	for(i = start; i < end; i++){

		if(int_quicksort_vect_value(desc, i) < p)
			int_quicksort_swap(desc, i, w++);

	}

	if(w != end)
		int_quicksort_swap(desc, end, w);

	else
		w--;

	return w;

}

static void int_quicksort_vect(quicksort_vect_description* desc, size_t start, size_t end){

	size_t w;

	if(start < end){

		if(desc->order)
			w = int_quicksort_vect_partition_asc(desc, start, end);
		else
			w = int_quicksort_vect_partition_desc(desc, start, end);

		int_quicksort_vect(desc, start, w);

		int_quicksort_vect(desc, w + 1, end);

	}
}

bool _quicksort_vector_asc(vector* vect, size_t offset, uint8_t val_size){

	quicksort_vect_description* desc;

	if(!vect || !val_size)
		return false;

	if(vect->used <= 1)
		return false;

	desc = allocate(vect->ctx, sizeof(quicksort_vect_description));
	desc->vect = vect;
	desc->offset = offset;
	desc->val_size = val_size;
	desc->order = 1;

	//Add an additional item to the end of the vector (for temporary purposes).
	_vector_add(vect, _vector_get(vect, 0));

	int_quicksort_vect(desc, 0, vect->used - 2);

	_vector_remove(vect, vect->used - 1);

	destroy(vect->ctx, desc);

	return true;

}

bool _quicksort_vector_desc(vector* vect, size_t offset, uint8_t val_size){

	quicksort_vect_description* desc;

	if(!vect || !val_size)
		return false;

	if(vect->used <= 1)
		return false;

	desc = allocate(vect->ctx, sizeof(quicksort_vect_description));
	desc->vect = vect;
	desc->offset = offset;
	desc->val_size = val_size;

	//Add an additional item to the end of the vector (for temporary purposes).
	_vector_add(vect, _vector_get(vect, 0));

	int_quicksort_vect(desc, 0, vect->used - 2);

	_vector_remove(vect, vect->used - 1);

	destroy(vect->ctx, desc);

	return true;

}