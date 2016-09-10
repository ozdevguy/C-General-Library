#include "../lib/ile_stdlib.h"

void main(){

	printf("Hello world!\n");

	standard_library_context ctx;

	_std_lib_default(&ctx);

	binary_heap* myHeap = _binary_heap_new(&ctx, 5);

	int i;

	_binary_heap_ordering(myHeap, BINARY_HEAP_MIN);

	for(i = 0; i < 10000000; i++)
		_binary_heap_insert(myHeap, i, 0);


	printf("test...\n");

	for(i = 0; i < 10000000; i++){

		binary_heap_entry entry;

		entry = _binary_heap_remove_root(myHeap);

		//printf("%d\n", entry.key);

	}

	_binary_heap_delete(myHeap);

}