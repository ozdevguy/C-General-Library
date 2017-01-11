/*
ozdevguy | C General Libraries

Copyright 2016 Bobby Crawford (ozdevguy)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

queue.c
========================================================================


*/

/*
<-CUSTOM HIGH-SPEED QUEUE->
This queue is implemented as an array in order to take advantage of memory locality/caching.

Written by Bobby Crawford

*/

static void int_queue_resize(queue* q){

	//New queue size.
	size_t new_size = q->size * 2, i, j = 0;

	//Create a new, larger queue.
	byte** entries = allocate(q->ctx, sizeof(size_t) * new_size);

	//Copy over the data.
	for(i = q->front; j < q->size; i = ((i + 1) % q->size)){

		entries[j] = q->entries[i];
		j++;

	}

	q->front = 0;
	q->back = q->size;
	q->size = new_size;

	//Free previously used memory.
	destroy(q->ctx, (void**)&q->entries);

	//Reassign the pointer.
	q->entries = entries;

}

void _queue_delete(queue* q){

	if(!q)
		return;

	destroy(q->ctx, (void**)&q->entries);
	destroy(q->ctx, (void**)&q);

}

queue* _queue_new(standard_library_context* ctx, size_t start_size){

	if(!ctx || !start_size)
		return 0;
	
	//Create a new object.
	queue* q = allocate(ctx, sizeof(queue));

	//Create a new queue array.
	q->entries = allocate(ctx, sizeof(size_t) * start_size);
	q->size = start_size;
	q->ctx = ctx;

	return q;

}

void _queue_reset(queue* q){

	
	destroy(q->ctx, (void**)&q->entries);

	q->entries = allocate(q->ctx, q->size);
	q->used = 0;
	q->front = 0;
	q->back = 0;

}


void* _queue_dequeue(queue* q){

	void* entry;

	if(!q)
		return 0;

	size_t frontpos = q->front;

	if(!q->used)
		return 0;

	if(frontpos == q->size - 1)
		frontpos = 0;
	else
		frontpos++;
	
	entry = (void*)(q->entries[q->front]);
	q->front = frontpos;
	q->used--;

	return entry;

}

void* _queue_peek(queue* q){

	void* entry;

	if(!q)
		return 0;

	if(!q->used)
		return 0;

	entry = (void*)(q->entries[q->front]);

	return entry;

}

void _queue_enqueue(queue* q, void* data){

	if(!q)
		return;

	size_t backpos;

	if(q->used == q->size)
		int_queue_resize(q);

	if(q->back == q->size - 1)
		backpos = 0;

	else
		backpos = q->back + 1;

	q->entries[q->back] = data;

	q->back = backpos;
	q->used++;

}







