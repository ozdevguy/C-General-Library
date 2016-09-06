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

	_string_delete(myNameString);
	_string_delete(myNameString2);
	
	return;
}