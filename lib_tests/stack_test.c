#include "../lib/stack.h"

void main(){

	standard_library_context ctx;
	_std_lib_default(&ctx);

	stack* myStack = _stack_new(&ctx, 3);

	int a = 1234;
	int b = 5678;

	_stack_push(myStack, &a);
	_stack_push(myStack, &b);

	printf("Data: %d\n", *((int*)_stack_pop(myStack)));
	printf("Data: %d\n", *((int*)_stack_pop(myStack)));

	printf("\n\n");

	_stack_push(myStack, &a);
	_stack_push(myStack, &b);
	_stack_push(myStack, &a);
	_stack_push(myStack, &b);
	_stack_push(myStack, &a);
	_stack_push(myStack, &b);
	_stack_push(myStack, &a);
	_stack_push(myStack, &b);
	_stack_push(myStack, &b);

	int i;

	for(i = 0; i < 9; i++)
		printf("Data: %d\n", *((int*)_stack_pop(myStack)));

	_stack_delete(myStack);

}