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

priority_queue.c
========================================================================


*/


priority_queue* _priority_queue_new(standard_library_context* ctx, size_t start_size){

	priority_queue* pq;

	if(!ctx || !start_size)
		return 0;
	
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

void _priority_queue_enqueue(priority_queue* queue, long priority, void* data){

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

void _priority_queue_type(priority_queue* queue, uint8_t type){

	if(!queue)
		return;

	_binary_heap_ordering(queue->heap, type);

}
