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

trie_structs.c | Trie Structs
========================================================================

*/

typedef struct trie_map trie_map;
typedef struct trie_map_entry trie_map_entry;


struct trie_map{

	//Standard library context.
	standard_library_context* ctx;

	//First trie entry.
	trie_map_entry* entry;

};

struct trie_map_entry{

	//Array of trie map entries.
	trie_map_entry* entries;

	/* OBJECT */

	//Object pointer.
	void* object;

	//Chained trie map.
	trie_map* chained;

};