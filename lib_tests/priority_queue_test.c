#include "../lib/priority_queue.h"

void main(){

	standard_library_context ctx;

	_std_lib_default(&ctx);

	priority_queue* pqueue = _priority_queue_new(&ctx, 5);

	int a = 12;
	int b = 34;
	int c = 56;
	int d = 78;
	int e = 910;

	_priority_queue_enqueue(pqueue, 20, &a);
	_priority_queue_enqueue(pqueue, 5, &b);
	_priority_queue_enqueue(pqueue, 1, &c);
	_priority_queue_enqueue(pqueue, 100, &d);
	_priority_queue_enqueue(pqueue, 50, &e);


	int i;

	for(i = 0; i < 5; i++)
		printf("Value: %d\n", *((int*)_priority_queue_dequeue(pqueue)));
	

	_priority_queue_delete(pqueue);

}