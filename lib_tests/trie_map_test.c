#include "../lib/genlib.h"

int main(){

	standard_library_context ctx;
	trie_map* mp;

	int a1 = 20;
	int a2 = 23;
	int a3 = 24;
	int a4 = 5;

	_std_lib_default(&ctx);

	mp = _trie_map_new(&ctx);

	_trie_map_add(mp, 1234, &a1, false);
	_trie_map_add(mp, 1233, &a2, false);
	_trie_map_add(mp, 1234, &a2, false);
	_trie_map_add(mp, 1235, &a2, false);
	_trie_map_add(mp, 1236, &a2, false);
	_trie_map_add(mp, 1237, &a2, false);
	_trie_map_add(mp, 1238, &a2, false);

	trie_map_entry* ent = _trie_map_add(mp, 1239, &a4, true);
	_trie_map_add(ent->chained_trie, 332, &a3, false);


	_trie_map_add(mp, 12391, &a1, false);

	trie_map_entry* entry;

	entry = _trie_map_lookup_e(mp, 1234);

	printf("Value: %d\n", *((int*)(entry->object)));

	entry = _trie_map_lookup_e(mp, 1233);

	printf("Value: %d\n", *((int*)(entry->object)));

	entry = _trie_map_lookup_e(mp, 1239);

	printf("Value: %d\n", *((int*)(entry->object)));

	entry = _trie_map_lookup_e(entry->chained_trie, 332);

	printf("Value: %d\n", *((int*)(entry->object)));




	entry = _trie_map_lookup_e(mp, 12391);

	printf("Value: %d\n", *((int*)(entry->object)));


	_trie_map_delete(mp);

	return 0;
}