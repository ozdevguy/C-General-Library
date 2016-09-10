//Create a new queue.
priority_queue* _priority_queue_new(standard_library_context*, size_t); //FINISHED

//Delete a queue.
void _priority_queue_delete(priority_queue*); //FINISHED

//Delete all data within the queue using a deallocator.
void _priority_queue_delete_all(priority_queue*, void (void*)); //FINISHED

//Enqueue a new item.
void _priority_queue_enqueue(priority_queue*, int32_t, void*, uint8_t, size_t); //FINISHED

//Remove the item at the front of the queue.
queue_entry _priority_queue_dequeue(priority_queue*); //FINISHED

//Peek at the front of the queue.
queue_entry _priority_queue_peek(priority_queue*); //FINISHED

//Priority queue deallocator.
void _priority_queue_dealloc(void*); //FINISHED


priority_queue* _priority_queue_new(standard_library_context* ctx, size_t start_size){

	priority_queue* pq;
	binary_heap* bh;

	pq = allocate(ctx, sizeof(priority_queue));
	bh = _binary_heap_new(ctx, start_size);

	pq->ctx = ctx;
	pq->heap = bh;

	return pq;

}

void _priority_queue_delete(priority_queue* queue){

	size_t i;
	binary_heap* heap;

	if(!queue)
		return;

	heap = queue->heap;

	_binary_heap_reset_iterator(queue->heap);

	while(_binary_heap_has_next(queue->heap))
		destroy(queue->ctx, _binary_heap_get_next(queue->heap).data);

	_binary_heap_delete(queue->heap);

	destroy(queue->ctx, queue);

}

void _priority_queue_delete_all(priority_queue* queue, void (*dealloc)(void*)){

	size_t i;
	binary_heap* heap;
	queue_entry* entry;

	if(!queue)
		return;

	heap = queue->heap;

	_binary_heap_reset_iterator(queue->heap);

	while(_binary_heap_has_next(queue->heap)){

		entry = _binary_heap_get_next(queue->heap).data;

		dealloc(entry->data);
		destroy(queue->ctx, entry);

	}

	_binary_heap_delete(queue->heap);

	destroy(queue->ctx, queue);

}

void _priority_queue_dealloc(void* queue){

	_priority_queue_delete((priority_queue*)queue);

}

void _priority_queue_enqueue(priority_queue* queue, int32_t priority, void* data, uint8_t type, size_t data_size){

	queue_entry* entry;

	if(!queue)
		return;

	entry = allocate(queue->ctx, sizeof(queue_entry));
	entry->data = data;
	entry->size = data_size;
	entry->type = type;

	_binary_heap_insert(queue->heap, priority, entry);

}

queue_entry _priority_queue_dequeue(priority_queue* queue){

	queue_entry entry;
	binary_heap_entry heap_entry;

	if(!queue)
		return entry;

	heap_entry = _binary_heap_remove_root(queue->heap);

	if(heap_entry.data)
		entry = *((queue_entry*)heap_entry.data);

	destroy(queue->ctx, heap_entry.data);

	return entry;

}

queue_entry _priority_queue_peek(priority_queue* queue){

	queue_entry entry;
	binary_heap_entry heap_entry;

	if(!queue)
		return entry;

	heap_entry = _binary_heap_peek(queue->heap);

	if(heap_entry.data)
		entry = *((queue_entry*)heap_entry.data);

	return entry;

}

size_t _priority_queue_total(priority_queue* queue){

	binary_heap* heap;

	if(!queue)
		return 0;

	heap = queue->heap;

	return heap->used;

}