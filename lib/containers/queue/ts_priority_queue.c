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

ts_queue.c
========================================================================


*/

ts_priority_queue* _ts_priority_queue_new(standard_library_context* ctx, size_t start_size){

	ts_priority_queue* pq;

	if(!ctx || !start_size)
		return 0;

	pq = allocate(ctx, sizeof(ts_priority_queue));
	pq->q = _priority_queue_new(ctx, start_size);
	pthread_mutex_init(&(pq->lock), 0);

	return pq;

}

void _ts_priority_queue_delete(ts_priority_queue* pq){

	priority_queue* q;

	if(!pq)
		return;

	q = pq->q;

	destroy(q->ctx, pq);
	_priority_queue_delete(q);

}

void _ts_priority_queue_enqueue(ts_priority_queue* pq, long val, void* ptr){

	if(!pq || !ptr)
		return;

	pthread_mutex_lock(&(pq->lock));
	_priority_queue_enqueue(pq->q, val, ptr);
	pthread_mutex_unlock(&(pq->lock));

}

void* _ts_priority_queue_dequeue(ts_priority_queue* pq){

	void* ptr;

	pthread_mutex_lock(&(pq->lock));
	ptr = _priority_queue_dequeue(pq->q);
	pthread_mutex_unlock(&(pq->lock));

	return ptr;

}

void* _ts_priority_queue_peek(ts_priority_queue* pq){

	void* ptr;

	pthread_mutex_lock(&(pq->lock));
	ptr = _priority_queue_peek(pq->q);
	pthread_mutex_unlock(&(pq->lock));

	return ptr;

}

void _ts_priority_queue_rebuild(ts_priority_queue* pq){

	if(!pq)
		return;

	pthread_mutex_lock(&(pq->lock));
	_priority_queue_rebuild(pq->q);
	pthread_mutex_unlock(&(pq->lock));

}

void _ts_priority_queue_type(ts_priority_queue* pq, uint8_t type){

	if(!pq)
		return;

	pthread_mutex_lock(&(pq->lock));
	_priority_queue_type(pq->q, type);
	pthread_mutex_unlock(&(pq->lock));

}

binary_heap_entry* _ts_priority_queue_get(ts_priority_queue* pq, size_t index){

	void* ptr;

	pthread_mutex_lock(&(pq->lock));
	ptr = _priority_queue_get(pq->q, index);
	pthread_mutex_unlock(&(pq->lock));

	return ptr;

}