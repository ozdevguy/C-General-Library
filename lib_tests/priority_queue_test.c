#include "../lib/ile_stdlib.h"

void main(){

	standard_library_context ctx;

	_std_lib_default(&ctx);

	int t1 = 3;
	int t2 = 5;
	int t3 = 1;
	int t4 = 2;
	int t5 = 4;

	priority_queue* q = _priority_queue_new(&ctx, 5);

	_priority_queue_enqueue(q, 124, &t1, TYPE_INT, 1);
	_priority_queue_enqueue(q, -1, &t2, TYPE_INT, 1);
	_priority_queue_enqueue(q, 200, &t3, TYPE_INT, 1);
	_priority_queue_enqueue(q, 150, &t4, TYPE_INT, 1);


	queue_entry entry;

	_priority_queue_dequeue(q, &entry);
	printf("%d\n", *((int*)entry.data));

	_priority_queue_dequeue(q, &entry);
	printf("%d\n", *((int*)entry.data));

	_priority_queue_enqueue(q, 120, &t2, 1, 1);

	
	_priority_queue_dequeue(q, &entry);
	printf("%d\n", *((int*)entry.data));

	_priority_queue_dequeue(q, &entry);
	printf("%d\n", *((int*)entry.data));


	_priority_queue_dequeue(q, &entry);
	printf("%d\n", *((int*)entry.data));

	
	
	if(_priority_queue_dequeue(q, &entry))
		printf("%d\n", *((int*)entry.data));
	

	_priority_queue_delete(q);


}