#include "../lib/queue.h"

void main(){

	int first = 61092;
	int second = 1213;
	int third = 3543;

	queue* myQueue = _queue_new(1);

	_queue_enqueue(myQueue, &first, 1, sizeof(first));
	_queue_enqueue(myQueue, &second, 1, sizeof(second));
	_queue_enqueue(myQueue, &third, 1, sizeof(third));

	printf("Hello: %d\n", *((int*)_queue_dequeue(myQueue).data));


	_queue_delete(myQueue);

	return;

}