#include "../lib/genlib.h"

int main(){

	standard_library_context* ctx;
	trie_map* mp;
	trie_map_entry* ent;
	trie_map_entry* entry;

	int a1 = 20;
	int a2 = 23;
	int a3 = 24;
	int a4 = 5;

	_lib_init();

	ctx = _ctx_init();



	/* STRING TEST */

	string* s1 = _string_new_fbytes(ctx, "static");
	string* s2 = _string_new_fbytes(ctx, "inline");
	string* s3 = _string_new_fbytes(ctx, "byte");
	string* s4 = _string_new_fbytes(ctx, "bobby");
	string* s5 = _string_new_fbytes(ctx, "crawford");
	string* s6 = _string_new_fbytes(ctx, "hi");
	string* s7 = _string_new_fbytes(ctx, "lalalalalala");
	string* s8 = _string_new_fbytes(ctx, "hill");
	string* s9 = _string_new_fbytes(ctx, "extern");
	string* s10 = _string_new_fbytes(ctx, "blob");
	string* s11 = _string_new_fbytes(ctx, "class");
	string* s12 = _string_new_fbytes(ctx, "func");
	string* s13 = _string_new_fbytes(ctx, "extends");
	string* s14 = _string_new_fbytes(ctx, "self");
	string* s15 = _string_new_fbytes(ctx, "sizeof");
	string* s16 = _string_new_fbytes(ctx, "size");
	string* s17 = _string_new_fbytes(ctx, "black");
	string* s18 = _string_new_fbytes(ctx, "truetest");

	mp = _trie_map_new(ctx);

	ent = _trie_map_add(mp, (uint32_t)_string_hash(s1), s1, true);
	_trie_map_add(ent->chained_trie, (uint32_t)_string_hash(s2), s2, false);

	ent = _trie_map_add(mp, (uint32_t)_string_hash(s3), s3, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s4), s4, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s5), s5, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s6), s6, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s7), s7, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s8), s8, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s9), s9, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s10), s10, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s11), s11, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s12), s12, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s13), s13, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s14), s14, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s15), s15, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s16), s16, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s17), s17, true);
	ent = _trie_map_add(mp, (uint32_t)_string_hash(s18), s18, true);


	if((entry = _trie_map_lookup_e(mp, (uint32_t)_string_hash(s1)))){

		size_t s;

		char* data = _string_pull(entry->object, &s);
		printf("%s ", data);
		destroy(ctx, data);

		if((entry = _trie_map_lookup_e(entry->chained_trie, (uint32_t)_string_hash(s2)))){

			data = _string_pull(entry->object, &s);
			printf("%s\n", data);
			destroy(ctx, data);

		}

	}

	if((entry = _trie_map_lookup_e(mp, (uint32_t)_string_hash(s1)))){

		size_t s;

		char* data = _string_pull(entry->object, &s);
		printf("%s ", data);
		destroy(ctx, data);

		if((entry = _trie_map_lookup_e(entry->chained_trie, (uint32_t)_string_hash(s3)))){

			data = _string_pull(entry->object, &s);
			printf("%s\n", data);
			destroy(ctx, data);

		}
		else{

			printf("SYNTAX ERROR!\n\n");
		}

	}

	string* str = _trie_map_lookup(mp, (uint32_t)_string_hash(s15));

	size_t s;
	char* data;

	data = _string_pull(str, &s);
	printf("Data: %s\n", data);
	destroy(ctx, data);


	_trie_map_delete(mp);

	_string_delete(s1);
	_string_delete(s2);
	_string_delete(s3);
	_string_delete(s4);
	_string_delete(s5);
	_string_delete(s6);
	_string_delete(s7);
	_string_delete(s8);
	_string_delete(s9);
	_string_delete(s10);
	_string_delete(s11);
	_string_delete(s12);
	_string_delete(s13);
	_string_delete(s14);
	_string_delete(s15);
	_string_delete(s16);
	_string_delete(s17);
	_string_delete(s18);

	_ctx_delete(ctx);


	return 0;
}