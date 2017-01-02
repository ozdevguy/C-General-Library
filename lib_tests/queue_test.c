#include "../lib/queue.h"

void main(){

	_lib_init();

	standard_library_context* ctx;

	ctx = _ctx_init();

	queue* myQueue = _queue_new(ctx, 3);

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

	ts_queue* myTSQueue = _ts_queue_new(ctx, 3);

	_ts_queue_enqueue(myTSQueue, &a);
	_ts_queue_enqueue(myTSQueue, &b);
	_ts_queue_enqueue(myTSQueue, &a);
	_ts_queue_enqueue(myTSQueue, &b);
	_ts_queue_enqueue(myTSQueue, &a);

	for(i = 0; i < 4; i++)
		printf("Dat: %d\n", *((int*)_ts_queue_dequeue(myTSQueue)));

	_ts_queue_delete(myTSQueue);


	ts_queue* newQueue = _ts_queue_new(ctx, 10);

	newQueue->enqueue(newQueue, &a);
	newQueue->enqueue(newQueue, &b);

	printf("Data: %d\n", *((int*)newQueue->dequeue(newQueue)));

	newQueue->delete(newQueue);
	
	_ctx_delete(ctx);

}