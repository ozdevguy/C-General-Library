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

set.h
========================================================================


*/

/* STRUCTURES */

typedef struct vset_int vset_int;
typedef struct vset_config vset_config;

/* SET */

//Create a new list.
list* _set_new(standard_library_context*, size_t); //COMPLETE

//Delete a list.
void _set_delete(list*); //COMPLETE

//Add an item to the list.
bool _set_add(list*, void*); //COMPLETE

//Get an item from the list.
void* _set_get(list*, size_t); //COMPLETE

//Remove an item from the list.
bool _set_remove(list*, size_t); //COMPLETE

//Reset the iterator.
void _set_reset_iterator(list*); //COMPLETE

//See if there are items left to be iterated through.
bool _set_has_next(list*); //COMPLETE

//Get the next item in the list.
void* _set_get_next(list*); //COMPLETE

//Does this set contain the given pointer?
bool _set_contains(list*, void*);

//Create a union of two sets.
list* _set_union(list*, list*);

//Get the intersection of two sets.
list* _set_intersect(list*, list*);

/* VECTOR SET */

//Create a new set. (context, data size, value offset, value size, start size)
vector* _vset_new(standard_library_context*, size_t, void*, void*, size_t, size_t);

//Delete a vector.
void _vset_delete(vector*);

//Add an item to the vector.
bool _vset_add(vector*, void*);

//Get an item from the vector.
void* _vset_get(vector*, size_t);

//Remove an item from the vector.
void _vset_remove(vector*, size_t);

//Reset the iterator.
void _vset_reset_iterator(vector*);

//See if there are items left to be iterated through.
bool _vset_has_next(vector*);

//Get the next item in the vector.
void* _vset_get_next(vector*);

//Does this set contain the given object?
bool _vset_contains(vector*, size_t);

//Create a union of two sets.
vector* _vset_union(vector*, vector*);

//Get the intersection of two sets.
vector* _vset_intersect(vector*, vector*);


#ifndef GENLIB_LINK_OBJECT_NCOMP
	
	#include "set_structs.c"
	#include "vset.c"
	#include "set.c"

#endif
