#include "../lib/ile_stdlib.h"

void main(){

	printf("Hello world!\n");

	standard_library_context ctx;

	_std_lib_default(&ctx);

	binary_heap* myHeap = _binary_heap_new(&ctx, 10);

	_binary_heap_insert(myHeap, 23, 0);
	_binary_heap_insert(myHeap, 24, 0);
	_binary_heap_insert(myHeap, 25, 0);
	

}