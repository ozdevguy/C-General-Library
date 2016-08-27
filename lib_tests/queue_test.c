#include "../lib/queue.h"
#include "../lib/utf8.h"
#include "../lib/string.h"

void* logger(byte* data, size_t size, uint8_t type, uint32_t id){

	printf("Data: %s\n", (char*)data);

	return 0;

}



void main(){

	int first = 61092;
	int second = 1213;
	int third = 3543;

	_std_lib_environment_setup(3232);
	_std_lib_environment_set_memory_allocator(0);
	_std_lib_environment_set_memory_deallocator(0);
	_std_lib_environment_set_logger(logger);

	STD_LIB_STATIC_ENV.logger("hello there!\n", 1, 1, 1);


	queue* myQueue = _queue_new(1);

	_queue_enqueue(myQueue, &first, 1, sizeof(first));
	_queue_enqueue(myQueue, &second, 1, sizeof(second));
	_queue_enqueue(myQueue, &third, 1, sizeof(third));

	printf("Hello: %d\n", *((int*)_queue_dequeue(myQueue).data));


	_queue_delete(myQueue);

	return;

}