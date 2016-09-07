#include "../lib/hashmap.h"

void main(){

	standard_library_context ctx;

	_std_lib_default(&ctx);

	int val1 = 1234;
	int val2 = 5678;

	map* myHashmap;

	string* myNameString = _string_new(&ctx);
	_string_append_fbytes(myNameString, "Value 1");

	string* myNameString2 = _string_new(&ctx);
	_string_append_fbytes(myNameString2, "Value 2");

	myHashmap = _hashmap_new(&ctx, 10);
	_hashmap_insert(myHashmap, myNameString, &val1, 1, 1);
	_hashmap_insert(myHashmap, myNameString2, &val2, 1, 1);

	map_entry entry;

	entry = _hashmap_lookup(myHashmap, myNameString);

	printf("Val: %d\n", *((int*)entry.data));

	entry = _hashmap_lookup(myHashmap, myNameString2);

	printf("Val: %d\n", *((int*)entry.data));


	//Test...

	_hashmap_reset_iterator(myHashmap);
	map_entry ent;
	size_t sz;

	while(_hashmap_has_next(myHashmap)){

		ent = _hashmap_get_next(myHashmap);

		byte* dat = _string_pull((string*)ent.ext, &sz);

		printf("%s %d\n", dat, *((int*)ent.data));

		destroy(&ctx, dat);

	}

	_string_delete(myNameString);
	_string_delete(myNameString2);
	_hashmap_delete(myHashmap);
	
	return;
}