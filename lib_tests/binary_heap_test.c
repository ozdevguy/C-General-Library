#include "../lib/genlib.h"

void main(){

	printf("Hello world!\n");

	standard_library_context ctx;

	_std_lib_default(&ctx);

	binary_heap* myHeap = _binary_heap_new(&ctx, 5);

	int i;

	printf("test...\n");
	_binary_heap_ordering(myHeap, BINARY_HEAP_MAX);
	printf("t...\n");

	for(i = 100; i >= 0; i--)
		_binary_heap_insert(myHeap, i, 0);

	for(i = 0; i < 100; i++)
		printf("%ld\n", myHeap->data[i].key);

	_binary_heap_insert(myHeap, 12, 0);
	
	printf("\n\n\n\n");

	for(i = 0; i < 100; i++){

		int j;

		binary_heap_entry entry;

		_binary_heap_remove_root(myHeap, &entry);

		printf("%ld\n", entry.key);

	}

	_binary_heap_delete(myHeap);

}