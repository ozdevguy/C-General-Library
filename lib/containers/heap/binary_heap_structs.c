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

binary_heap_structs.c
========================================================================


*/

struct binary_heap_entry{

	//Value
	long key;

	//Data
	void* data;

};

struct binary_heap{

	//Standard library context.
	standard_library_context* ctx;

	//Pointer to the heap.
	binary_heap_entry* data;

	//Iterator position.
	size_t iterator;

	//Type of ordering.
	uint8_t ordering;

	//Size of the heap.
	size_t size;

	//Total number of used positions in the heap.
	size_t used;
 
};