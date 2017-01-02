#include "../lib/hashmap.h"


void main(){

	genlib_context* ctx;

	_lib_init();
	ctx = _ctx_init();

	int test1 = 1234;
	int test2 = 5678;
	int test3 = 91011;
	int test4 = 121314;

	map* myHashmap = _hashmap_new(ctx, 10);
	string* str_test = _string_new_fbytes(ctx, "blah");

	_hashmap_insert_fbytes(myHashmap, "Hi", &test1);
	_hashmap_insert_fbytes(myHashmap, "Bobbai", &test2);
	_hashmap_insert(myHashmap, str_test, &test3);

	printf("Dat: %d\n", *((int*)_hashmap_lookup_fbytes(myHashmap, "blah")));


	_hashmap_remove_fbytes(myHashmap, "blah");
	
	_hashmap_reset_iterator(myHashmap);

	while(_hashmap_has_next(myHashmap))
		printf("Data: %d\n", *((int*)_hashmap_get_next(myHashmap)));

	_hashmap_delete(myHashmap);
	_string_delete(str_test);
	_ctx_delete(ctx);

}