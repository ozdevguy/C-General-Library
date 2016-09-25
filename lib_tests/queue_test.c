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
	stack* myStack = _stack_new(&ctx, 1);

	_queue_enqueue(myQueue, &first, 1, sizeof(first));
	_queue_enqueue(myQueue, &second, 1, sizeof(second));
	_queue_enqueue(myQueue, &third, 1, sizeof(third));

	_stack_push(myStack, &first, 1, sizeof(first));
	_stack_push(myStack, &second, 1, sizeof(second));
	_stack_push(myStack, &third, 1, sizeof(third));


	int i = 0;

	for(i = 0; i < 3; i++){

		queue_entry entry;

		if(_queue_dequeue(myQueue, &entry))
			printf("Dequeue: %d\n", *((int*)entry.data));
	}

	for(i = 0; i < 3; i++){

		stack_item item;

		if(_stack_pop(myStack, &item))
			printf("Stack Pop: %d\n", *((int*)item.data));
	}

	_queue_delete(myQueue);
	_stack_delete(myStack);



	return;

}