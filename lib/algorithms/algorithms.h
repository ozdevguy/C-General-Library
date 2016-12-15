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

algorithms.h
========================================================================


*/

/* STRUCTURES */

typedef struct mergesort_representation mergesort_representation;
typedef struct mergesort_vect_description mergesort_vect_description;
typedef struct mergesort_list_description mergesort_list_description;
typedef struct quicksort_vect_description quicksort_vect_description;
typedef struct quicksort_list_description quicksort_list_description;

/* MERGESORT */

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

/* QUICKSORT */

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


#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "sort_structs.c"
	#include "st_merge_sort.c"
	#include "st_quick_sort.c"

#endif