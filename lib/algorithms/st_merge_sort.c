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



static void int_mergesort_merge_desc(sort_representation_cont* cont, size_t start, size_t middle, size_t end){

	sort_representation *left, *right, *ptr;
	size_t i, j = 0, k = 0, left_total, right_total;

	left_total = (middle - start) + 1;
	right_total = end - middle;

	left = allocate(cont->ctx, left_total * sizeof(sort_representation));
	right = allocate(cont->ctx, right_total * sizeof(sort_representation));
	ptr = cont->sort_arr;

	for(i = 0; i < left_total; i++)
		left[i] = ptr[i + start];

	for(i = 0; i < right_total; i++)
		right[i] = ptr[i + middle + 1];

	for(i = start; i <= end; i++){

		if(j < left_total && k < right_total){

			if(left[j].value > right[k].value)
				ptr[i] = left[j++];
			else
				ptr[i] = right[k++];

		}
		
		else if(j < left_total)
			ptr[i] = left[j++];

		else
			ptr[i] = right[k++];

	}

	destroy(cont->ctx, left);
	destroy(cont->ctx, right);

}

static void int_mergesort_merge_asc(sort_representation_cont* cont, size_t start, size_t middle, size_t end){

	sort_representation *left, *right, *ptr;
	size_t i, j = 0, k = 0, left_total, right_total;

	left_total = (middle - start) + 1;
	right_total = end - middle;

	left = allocate(cont->ctx, left_total * sizeof(sort_representation));
	right = allocate(cont->ctx, right_total * sizeof(sort_representation));
	ptr = cont->sort_arr;

	for(i = 0; i < left_total; i++)
		left[i] = ptr[i + start];

	for(i = 0; i < right_total; i++)
		right[i] = ptr[i + middle + 1];

	for(i = start; i <= end; i++){

		if(j < left_total && k < right_total){

			if(left[j].value < right[k].value)
				ptr[i] = left[j++];
			else
				ptr[i] = right[k++];

		}

		else if(j < left_total)
			ptr[i] = left[j++];

		else
			ptr[i] = right[k++];


	}

	destroy(cont->ctx, left);
	destroy(cont->ctx, right);

}


static void int_mergesort(sort_representation_cont* cont, size_t start, size_t end){

	size_t middle = (start + end) / 2;

	if(start < end){

		int_mergesort(cont, start, middle);
		int_mergesort(cont, middle + 1, end);

		if(!cont->order)
			int_mergesort_merge_desc(cont, start, middle, end);
		else
			int_mergesort_merge_asc(cont, start, middle, end);

	}

}

bool _mergesort_list_asc(list* input, size_t offset, uint8_t val_size){

	sort_representation_cont* sorter;

	if(!input)
		return false;

	sorter = _sort_setup_flist(input, offset, val_size);

	if(!sorter)
		return false;

	sorter->order = 1;

	int_mergesort(sorter, 0, sorter->total - 1);

	_sort_copy_back_tlist(input, sorter);

	return true;

}

bool _mergesort_list_desc(list* input, size_t offset, uint8_t val_size){

	sort_representation_cont* sorter;

	if(!input)
		return false;

	sorter = _sort_setup_flist(input, offset, val_size);

	if(!sorter)
		return false;

	int_mergesort(sorter, 0, sorter->total - 1);

	_sort_copy_back_tlist(input, sorter);

	return true;

}

bool _mergesort_vector_asc(vector* input, size_t offset, uint8_t val_size){

	sort_representation_cont* sorter;

	if(!input)
		return false;

	sorter = _sort_setup_fvect(input, offset, val_size);

	if(!sorter)
		return false;

	sorter->order = 1;

	int_mergesort(sorter, 0, sorter->total - 1);

	_sort_copy_back_tvect(input, sorter);

	return true;

}

bool _mergesort_vector_desc(vector* input, size_t offset, uint8_t val_size){

	sort_representation_cont* sorter;

	if(!input)
		return false;

	sorter = _sort_setup_fvect(input, offset, val_size);

	if(!sorter)
		return false;

	int_mergesort(sorter, 0, sorter->total - 1);

	_sort_copy_back_tvect(input, sorter);

	return true;

}