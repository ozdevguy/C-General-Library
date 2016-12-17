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

trie_map.h
========================================================================


*/

/* STRUCTURES */

typedef struct trie_map trie_map;
typedef struct trie_map_entry trie_map_entry;

/* TRIE MAP */

//(Context, charactaristic)
trie_map* _trie_map_new(standard_library_context*);

//(Map, Entry Value, Object, Chained trie (true, false))
trie_map_entry* _trie_map_add(trie_map*, uint32_t, void*, bool);

//Get a complete trie entry.
trie_map_entry* _trie_map_lookup_e(trie_map*, uint32_t);

//Get a trie object.
void* _trie_map_lookup(trie_map*, uint32_t);

//Delete a trie.
void _trie_map_delete(trie_map*);

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "trie_structs.c"
	#include "trie_map.c"

#endif