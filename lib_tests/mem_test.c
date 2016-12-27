#include "../lib/genlib.h"

void main(){

	//Initialize the global data.
	_lib_init();

	//Create a new context.
	genlib_context* ctx = _ctx_init();

	//Set the default context.
	_lib_set_default_ctx(ctx);

	string* myString = _string_new(ctx);
	_string_append_fbytes(myString, "Hello there! ☢\n");

	size_t length;
	char* ca = _string_pull(myString, &length);

	printf("String: %s", ca);

	_string_delete(myString);

	stack* myStack = _stack_new(ctx, 10);

	graph* myGraph = _graph_new(ctx, 30);

	_stack_push(myStack, ca);

	printf("String again: %s\n", (char*)_stack_pop(myStack));

	free(ca);

	_stack_delete(myStack);
	_graph_delete(myGraph);
	_ctx_delete(ctx);

	return;
}