#include "../lib/queue.h"

void main(){

	standard_library_context ctx;
	_std_lib_default(&ctx);

	queue* myQueue = _queue_new(&ctx, 3);

	int a = 1234;
	int b = 5678;

	_queue_enqueue(myQueue, &a);
	_queue_enqueue(myQueue, &b);

	printf("Data: %d\n", *((int*)_queue_dequeue(myQueue)));
	printf("Data: %d\n", *((int*)_queue_dequeue(myQueue)));

	printf("\n\n");

	_queue_enqueue(myQueue, &a);
	_queue_enqueue(myQueue, &a);
	_queue_enqueue(myQueue, &a);
	_queue_enqueue(myQueue, &b);
	_queue_enqueue(myQueue, &a);
	_queue_enqueue(myQueue, &b);
	_queue_enqueue(myQueue, &a);
	_queue_enqueue(myQueue, &b);
	_queue_enqueue(myQueue, &b);

	int i;

	for(i = 0; i < 9; i++)
		printf("Data: %d\n", *((int*)_queue_dequeue(myQueue)));

	_queue_delete(myQueue);

}