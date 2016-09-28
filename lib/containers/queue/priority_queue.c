//Create a new queue.
priority_queue* _priority_queue_new(standard_library_context*, size_t); //FINISHED

//Delete a queue.
void _priority_queue_delete(priority_queue*); //FINISHED

//Delete all data within the queue using a deallocator.
void _priority_queue_delete_all(priority_queue*, void (void*)); //FINISHED

//Enqueue a new item.
void _priority_queue_enqueue(priority_queue*, int32_t, void*); //FINISHED

//Remove the item at the front of the queue.
void* _priority_queue_dequeue(priority_queue*); //FINISHED

//Peek at the front of the queue.
void* _priority_queue_peek(priority_queue*); //FINISHED

//Priority queue deallocator.
void _priority_queue_dealloc(void*); //FINISHED

//Change the queue type.
void _priority_queue_type(uint8_t);

//Get a pointer to an item.
binary_heap_entry* _priority_queue_get(priority_queue*, size_t);


priority_queue* _priority_queue_new(standard_library_context* ctx, size_t start_size){

	priority_queue* pq;

	pq = allocate(ctx, sizeof(priority_queue));
	pq->heap = _binary_heap_new(ctx, start_size);

	pq->ctx = ctx;

	return pq;

}

void _priority_queue_delete(priority_queue* queue){

	size_t i;

	if(!queue)
		return;

	_binary_heap_delete(queue->heap);

	destroy(queue->ctx, queue);

}

void _priority_queue_delete_all(priority_queue* queue, void (*dealloc)(void*)){

	if(!queue)
		return;

	_binary_heap_delete(queue->heap);

	destroy(queue->ctx, queue);

}

void _priority_queue_dealloc(void* queue){

	_priority_queue_delete((priority_queue*)queue);

}

void _priority_queue_enqueue(priority_queue* queue, int32_t priority, void* data){

	queue_entry* entry;

	if(!queue)
		return;

	_binary_heap_insert(queue->heap, priority, data);

}

void* _priority_queue_dequeue(priority_queue* queue){

	binary_heap_entry heap_entry;

	if(!queue)
		return 0;

	if(_binary_heap_remove_root(queue->heap, &heap_entry))
		return heap_entry.data;


	return 0;

}

void* _priority_queue_peek(priority_queue* queue){

	binary_heap_entry heap_entry;

	if(!queue)
		return 0;

	if(_binary_heap_peek(queue->heap, &heap_entry))
		return heap_entry.data;


	return 0;
	
}

binary_heap_entry* _priority_queue_get(priority_queue* queue, size_t pos){

	if(!queue)
		return 0;

	return _binary_heap_get(queue->heap, pos);

}

void _priority_queue_rebuild(priority_queue* queue){

	if(!queue)
		return;

	_binary_heap_build(queue->heap);
}
