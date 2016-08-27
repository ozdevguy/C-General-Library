#include "../lib/queue.h"
#include "../lib/utf8.h"
#include "../lib/string.h"
#include "../lib/vector.h"

void main(){

	int first = 61092;
	int second = 1213;
	int third = 3543;

	standard_library_context ctx;

	_std_lib_default(&ctx);

	ctx.logger("hello there!\n", 1, 1, 1);


	queue* myQueue = _queue_new(&ctx, 1);
	string* str = _string_new(&ctx);

	_queue_enqueue(myQueue, &first, 1, sizeof(first));
	_queue_enqueue(myQueue, &second, 1, sizeof(second));
	_queue_enqueue(myQueue, &third, 1, sizeof(third));

	printf("Hello: %d\n", *((int*)_queue_dequeue(myQueue).data));


	_queue_delete(myQueue);

	vector* myVector = _vector_new(&ctx, 10, sizeof(string));

	_vector_add(myVector, str);

	_vector_delete(myVector);
	_string_delete(str);

	return;

}