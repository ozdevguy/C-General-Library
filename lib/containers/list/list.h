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

list.h
========================================================================


*/

/* STRUCTURES */

typedef struct list list;

/* LIST */

//Create a new list.
list* _list_new(standard_library_context*, size_t); //COMPLETE

//Delete a list.
void _list_delete(list*); //COMPLETE

//Add an item to the list.
void _list_add(list*, void*); //COMPLETE

//Get an item from the list.
void* _list_get(list*, size_t); //COMPLETE

//Remove an item from the list.
bool _list_remove(list*, size_t); //COMPLETE

//Reset the iterator.
void _list_reset_iterator(list*); //COMPLETE

//See if there are items left to be iterated through.
bool _list_has_next(list*); //COMPLETE

//Get the next item in the list.
void* _list_get_next(list*); //COMPLETE

//Set an item in the list.
bool _list_set(list*, size_t, void*);

//Merge two lists.
bool _list_merge(list*, list*);

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "list_structs.c"
	#include "list.c"

#endif