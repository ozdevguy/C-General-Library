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

map.h
========================================================================


*/

/* STRUCTURES */

typedef struct map map;
typedef struct map_entry map_entry;
typedef struct hashmap_entry hashmap_entry;

/* MAP */

//Create a new map.
map* _map_new(standard_library_context*, size_t);

//Delete a map.
void _map_delete(map*);

//Resize a map.
bool _map_resize(map*, size_t);

//Map an item.
bool _map_insert(map*, size_t, void*);

//Map an item, and return its map entry pointer.
map_entry* _map_insert_e(map*, size_t, void*);

//Remove an item from the map, and return its data pointer.
void* _map_remove(map*, size_t);

//Remove an item from the map, and return a copy of its map entry.
bool _map_remove_e(map*, size_t, map_entry*);

//Get an item from the map.
void* _map_lookup(map*, size_t);

//Get an entry from the map.
map_entry* _map_lookup_e(map*, size_t);

//Reset the map iterator.
void _map_reset_iterator(map*);

//Check to see if there are any additional items to iterate through.
bool _map_has_next(map*);

//Pull the next item in the iteration.
void* _map_get_next(map*);

//Pull the next full map entry.
map_entry* _map_get_next_e(map*);

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "map_structs.c"
	#include "map.c"

#endif