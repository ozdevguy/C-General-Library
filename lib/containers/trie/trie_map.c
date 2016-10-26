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

trie_map.c | Trie Map
========================================================================

*/

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


static void int_trie_map_delete(standard_library_context* ctx, trie_map_entry* entry){

	if(entry->chained_trie)
			_trie_map_delete(entry->chained_trie);
		
	if(entry->entries){

		int_trie_map_delete(ctx, entry->entries);
		int_trie_map_delete(ctx, entry->entries + 1);
		int_trie_map_delete(ctx, entry->entries + 2);
		int_trie_map_delete(ctx, entry->entries + 3);
		int_trie_map_delete(ctx, entry->entries + 4);
		int_trie_map_delete(ctx, entry->entries + 5);
		int_trie_map_delete(ctx, entry->entries + 6);
		int_trie_map_delete(ctx, entry->entries + 7);
		int_trie_map_delete(ctx, entry->entries + 8);
		int_trie_map_delete(ctx, entry->entries + 9);
		destroy(ctx, entry->entries);

	}

}

trie_map* _trie_map_new(standard_library_context* ctx){

	trie_map* tm;
	trie_map_entry* root;

	if(!ctx)
		return 0;

	tm = allocate(ctx, sizeof(trie_map));
	root = allocate(ctx, sizeof(trie_map_entry));
	root->entries = allocate(ctx, sizeof(trie_map_entry) * 10);

	tm->root = root;
	tm->ctx = ctx;

	return tm;

}

trie_map_entry* _trie_map_add(trie_map* tm, uint32_t value, void* ptr, bool chained){

	uint32_t rem, val, d1 = 10, d2 = 1;
	trie_map_entry* entry;

	if(!tm)
		return 0;

	rem = value;
	entry = tm->root;

	while(rem && entry){

		val = rem % d1;
		rem -= val;
		val /= d2;

		d1 *= 10;
		d2 *= 10;

		if(!entry->entries)
			entry->entries = allocate(tm->ctx, sizeof(trie_map_entry) * 10);

		entry = entry->entries + val;

	}

	//This item already exists!
	if(entry->object)
		return 0;

	if(chained)
		entry->chained_trie = _trie_map_new(tm->ctx);

	entry->object = ptr;
	return entry;

}

trie_map_entry* _trie_map_lookup_e(trie_map* tm, uint32_t value){

	uint32_t rem, val, d1 = 10, d2 = 1;
	trie_map_entry* entry;

	if(!tm)
		return 0;

	rem = value;
	entry = tm->root;

	while(rem && entry){

		val = rem % d1;
		rem -= val;
		val /= d2;

		d1 *= 10;
		d2 *= 10;

		if(entry->entries)
			entry = entry->entries + val;

	}

	//The item was not found (reached the end of the tree before item detected.)
	if(rem)
		return 0;

	if(!entry->object)
		return 0;

	return entry;

}

void _trie_map_delete(trie_map* tm){

	if(!tm)
		return;

	int_trie_map_delete(tm->ctx, tm->root);

	destroy(tm->ctx, tm->root);
	destroy(tm->ctx, tm);

}

void* _trie_map_lookup(trie_map* tm, uint32_t value){

	trie_map_entry* entry;

	if(!tm)
		return 0;

	entry = _trie_map_lookup_e(tm, value);

	if(entry)
		return entry->object;

	return 0;

}	

