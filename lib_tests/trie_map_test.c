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


	/* STRING TEST */

	string* s1 = _string_new_fbytes(&ctx, "static");
	string* s2 = _string_new_fbytes(&ctx, "inline");
	string* s3 = _string_new_fbytes(&ctx, "byte");

	mp = _trie_map_new(&ctx);

	ent = _trie_map_add(mp, (uint32_t)_string_hash(s1), s1, true);
	_trie_map_add(ent->chained_trie, (uint32_t)_string_hash(s2), s2, false);


	if((entry = _trie_map_lookup_e(mp, (uint32_t)_string_hash(s1)))){

		size_t s;

		char* data = _string_pull(entry->object, &s);
		printf("%s ", data);
		destroy(&ctx, data);

		if((entry = _trie_map_lookup_e(entry->chained_trie, (uint32_t)_string_hash(s2)))){

			data = _string_pull(entry->object, &s);
			printf("%s\n", data);
			destroy(&ctx, data);

		}

	}

	if((entry = _trie_map_lookup_e(mp, (uint32_t)_string_hash(s1)))){

		size_t s;

		char* data = _string_pull(entry->object, &s);
		printf("%s ", data);
		destroy(&ctx, data);

		if((entry = _trie_map_lookup_e(entry->chained_trie, (uint32_t)_string_hash(s3)))){

			data = _string_pull(entry->object, &s);
			printf("%s\n", data);
			destroy(&ctx, data);

		}
		else{

			printf("SYNTAX ERROR!\n\n");
		}

	}

	_trie_map_delete(mp);

	_string_delete(s1);
	_string_delete(s2);
	_string_delete(s3);


	return 0;
}