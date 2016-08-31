#include "../lib/queue.h"
#include "../lib/utf8.h"
#include "../lib/string.h"
#include "../lib/vector.h"
#include "../lib/stack.h"
#include "../lib/map.h"

void main(){

	int first = 61092;
	int second = 1213;
	int third = 3543;

	standard_library_context ctx;

	_std_lib_default(&ctx);

	_log_info(&ctx, "Hello world!->\n", 11);


	queue* myQueue = _queue_new(&ctx, 1);
	string* str = _string_new(&ctx);
	stack* myStack = _stack_new(&ctx, 1);
	vector* myVector = _vector_new(&ctx, sizeof(string), 10);
	map* myMap = _map_new(&ctx, 10);

	_queue_enqueue(myQueue, &first, 1, sizeof(first));
	_queue_enqueue(myQueue, &second, 1, sizeof(second));
	_queue_enqueue(myQueue, &third, 1, sizeof(third));

	_stack_push(myStack, &first, 1, sizeof(first));
	_stack_push(myStack, &second, 1, sizeof(second));
	_stack_push(myStack, &third, 1, sizeof(third));


	int i = 0;

	for(i = 0; i < 3; i++)
		printf("Dequeue: %d\n", *((int*)_queue_dequeue(myQueue).data));

	for(i = 0; i < 3; i++)
		printf("Stack Pop: %d\n", *((int*)_stack_pop(myStack).data));

	_queue_delete(myQueue);
	_stack_delete(myStack);

	_vector_add(myVector, str);

	_vector_delete(myVector);
	_string_delete(str);

	return;

}