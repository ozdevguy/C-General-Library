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

map_structs.c
========================================================================


*/

struct hashmap_entry{

	string* key;

	void* data;
	
};

struct map_entry{

	//Used
	bool used;

	//Key
	size_t key;

	//Data pointer.
	void* data;

	//Other data?
	void* ext;

	//Next map entry.
	map_entry* next;

};

struct map{

	//Standard library context.
	standard_library_context* ctx;

	//Iterator table entry.
	size_t iter_tbl;

	//Iterator list entry.
	map_entry* iter_list;

	//Hash table size.
	size_t size;

	//Total items in hash table.
	size_t total;

	//Table.
	map_entry* map_table;

	//Hash function (hashmap only).
	size_t (*hash_algorithm)(byte*);

};