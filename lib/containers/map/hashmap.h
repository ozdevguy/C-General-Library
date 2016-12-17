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

hashmap.h
========================================================================


*/

/* HASHMAP */

//Create a new hashmap.
map* _hashmap_new(standard_library_context*, size_t);

//Delete a hashmap.
void _hashmap_delete(map*);

//Set a custom hash algorithm.
void _hashmap_set_algorithm(map*, size_t (byte*));

//Resize a hashmap.
bool _hashmap_resize(map*, size_t);

//Insert into a hashmap using a character array.
bool _hashmap_insert_fbytes(map*, byte*, void*);

//Insert into hashmap using a string.
bool _hashmap_insert(map*, string*, void*);

//Get an item from the hashmap.
void* _hashmap_lookup_fbytes(map*, byte*);

//Get an item from the hashmap.
void* _hashmap_lookup(map*, string*);

//Remove an item from a hashmap.
bool _hashmap_remove_fbytes(map*, byte*);

//Remove an item from a hashmap.
bool _hashmap_remove(map*, string*);

//Reset the hashmap iterator.
void _hashmap_reset_iterator(map*);

//Check to see if there are any additional items to iterate through.
bool _hashmap_has_next(map*);

//Pull the next data pointer in the iteration.
void* _hashmap_get_next(map*);

//Pull the next item in the iteration.
hashmap_entry* _hashmap_get_next_e(map*);

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "hashmap.c"

#endif