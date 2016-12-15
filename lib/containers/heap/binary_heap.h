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

binary_heap.h
========================================================================


*/

/* STRUCTURES */

typedef struct binary_heap binary_heap;
typedef struct binary_heap_entry binary_heap_entry;

enum{BINARY_HEAP_MAX, BINARY_HEAP_MIN};

/* BINARY HEAP */

//Create a binary heap.
binary_heap* _binary_heap_new(standard_library_context*, size_t); //FINISHED

//Delete a binary heap.
bool _binary_heap_delete(binary_heap*); //FINISHED

//Insert into a binary heap.
void _binary_heap_insert(binary_heap*, long, void*); //FINISHED

//Remove an item from the binary heap at the given index.
bool _binary_heap_remove(binary_heap*, size_t, binary_heap_entry*); //TO DO

//Set heap ordering.
void _binary_heap_ordering(binary_heap*, uint8_t); //FINISHED

//Reset iterator.
void _binary_heap_reset_iterator(binary_heap*); //FINISHED

//Iterator has next?
bool _binary_heap_has_next(binary_heap*); //FINISHED

//Get the next item.
binary_heap_entry* _binary_heap_get_next(binary_heap*); //FINISHED

//Get an item at the specified index.
binary_heap_entry* _binary_heap_get(binary_heap*, size_t); //FINISHED

//Get and remove the root of the binary heap.
bool _binary_heap_remove_root(binary_heap*, binary_heap_entry*); //FINISHED

//Peek at the root of the binary heap.
bool _binary_heap_peek(binary_heap*, binary_heap_entry*); //FINISHED

//Rebuild the heap.
void _binary_heap_build(binary_heap*);

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "binary_heap_structs.c"
	#include "binary_heap.c"

#endif