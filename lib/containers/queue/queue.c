/*
<-CUSTOM HIGH-SPEED QUEUE->
This queue is implemented as an array in order to take advantage of memory locality/caching.

Written by Bobby Crawford

*/

//Create a new queue.
queue* _queue_new(standard_library_context*, size_t);

//Delete a queue.
void _queue_delete(queue*);

//Delete all data within the queue using a deallocator.
void _queue_delete_all(queue*, void (void*));

//Enqueue a new item.
void _queue_enqueue(queue*, void*);

//Remove the item at the front of the queue.
void* _queue_dequeue(queue*);

//Peek at the front of the queue.
void* _queue_peek(queue*);

//Queue deallocator.
void _queue_dealloc(void*);


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
	destroy(q->ctx, q->entries);

	//Reassign the pointer.
	q->entries = entries;

}

void _queue_delete(queue* q){

	if(!q)
		return;

	destroy(q->ctx, q->entries);
	destroy(q->ctx, q);

}

void _queue_dealloc(void* q){

	_queue_delete((queue*)q);

}

void _queue_delete_all(queue* q, void (*dealloc)(void*)){

	size_t i;

	for(i = 0; i < q->size; i++){

		if(q->entries[i])
			dealloc(q->entries[i]);

	}

	_queue_delete(q);
	
}

queue* _queue_new(standard_library_context* ctx, size_t start_size){

	//Create a new object.
	queue* q = allocate(ctx, sizeof(queue));

	//Create a new queue array.
	q->entries = allocate(ctx, sizeof(size_t) * start_size);
	q->size = start_size;
	q->ctx = ctx;

	return q;


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







