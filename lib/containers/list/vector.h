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

vector.h
========================================================================


*/

/* STRUCTURES */

typedef struct vector vector;

/* VECTOR */

//Create a new vector.
vector* _vector_new(standard_library_context*, size_t, size_t);

//Delete a vector.
void _vector_delete(vector*);

//Add an item to the vector.
void _vector_add(vector*, void*);

//Get an item from the vector.
void* _vector_get(vector*, size_t);

//Set a vector item.
bool _vector_set(vector*, size_t, void*);

//Remove an item from the vector.
void _vector_remove(vector*, size_t);

//Reset the iterator.
void _vector_reset_iterator(vector*);

//See if there are items left to be iterated through.
bool _vector_has_next(vector*);

//Get the next item in the vector.
void* _vector_get_next(vector*);

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "vector_structs.c"
	#include "vector.c"

#endif
