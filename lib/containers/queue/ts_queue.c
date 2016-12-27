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

//Create a new thread safe queue.
ts_queue* _ts_queue_new(standard_library_context* ctx, size_t start_size){

	ts_queue* q;

	if(!ctx || !start_size)
		return 0;

	q = allocate(ctx, sizeof(ts_queue));
	q->q = _queue_new(ctx, start_size);
	pthread_mutex_init(&(q->lock), 0);

	return q;

}

//Reset a thread safe queue.
void _ts_queue_reset(ts_queue* q){

	if(!q)
		return;

	pthread_mutex_lock(&(q->lock));
	_queue_reset(q->q);
	pthread_mutex_unlock(&(q->lock));

}

//Delete the thread safe queue.
void _ts_queue_delete(ts_queue* q){

	queue* qt;

	if(!q)
		return;

	qt = q->q;

	destroy(qt->ctx, q);
	_queue_delete(qt);

}

//Enqueue
void _ts_queue_enqueue(ts_queue* q, void* ptr){

	if(!q)
		return;

	pthread_mutex_lock(&(q->lock));
	_queue_enqueue(q->q, ptr);
	pthread_mutex_unlock(&(q->lock));

}

//Remove the item at the front of the queue.
void* _ts_queue_dequeue(ts_queue* q){

	void* ptr;

	if(!q)
		return 0;

	pthread_mutex_lock(&(q->lock));
	ptr = _queue_dequeue(q->q);
	pthread_mutex_unlock(&(q->lock));

	return ptr;

}

//Peek at the front of the queue.
void* _ts_queue_peek(ts_queue* q){

	void* ptr;

	if(!q)
		return 0;

	pthread_mutex_lock(&(q->lock));
	ptr = _queue_peek(q->q);
	pthread_mutex_unlock(&(q->lock));

	return ptr;

}

