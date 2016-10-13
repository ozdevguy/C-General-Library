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



static void int_mergesort_merge(standard_library_context* ctx, sort_representation* arr, size_t start, size_t middle, size_t end){

	sort_representation* tmp;
	size_t i, j, k;
	
	if(!(end - start))
		return;

	tmp = allocate(ctx, (end - start) * sizeof(sort_representation));

	for(i = start; i <= middle; i++){

		if()
	}
	

}


static void int_mergesort(standard_library_context* ctx, sort_representation* arr, size_t start, size_t end){

	size_t end1, start2;

	end1 = ((end - start) / 2) + start;
	start2 = end1 + 1;

	if((end - start) > 1){

		int_mergesort(ctx, arr, start, end1);
		int_mergesort(ctx, arr, start2, end);

	}

	int_mergesort_merge(ctx, arr, start, end1, end);

}

bool _mergesort_list_asc(list* input, size_t offset, uint8_t val_size){

	size_t i;
	void* data;

	sort_representation* sort_arr;

	if(!input)
		return false;

	//Create a sortable array.
	sort_arr = allocate(input->ctx, input->used * sizeof(sort_representation));

	for(i = 0; i < input->used; i++){

		data = _list_get(input, i);

		if(val_size == sizeof(byte))
			sort_arr[i].value = *((byte*)(data + offset));

		else if(val_size == sizeof(short))
			sort_arr[i].value = *((short*)(data + offset));

		else if(val_size == sizeof(int))
			sort_arr[i].value = *((int*)(data + offset));

		sort_arr[i].data = data;

	}

	int_mergesort(input->ctx, sort_arr, 0, input->used);

	for(i = 0; i < input->used; i++)
		printf("%ld\n", sort_arr[i].value);

}