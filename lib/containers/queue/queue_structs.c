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

queue_structs.c
========================================================================


*/

//Representation of a queue.
struct queue{

	//Standard library context.
	standard_library_context* ctx;
	
	//Queue entries (array).
	byte** entries;

	//Size of the current queue array.
	size_t size;

	//Current amount of space used.
	size_t used;

	//Front of the queue.
	size_t front;

	//Back of the queue.
	size_t back;

};

//Representation of a priority queue.
struct priority_queue{

	//Standard library context.
	standard_library_context* ctx;

	//Unsigned long offset.
	size_t offset;
	
	//Binary heap pointer.
	void* heap;

};

//Representation of a thread safe queue.
struct ts_queue{

	//Mutex lock.
	pthread_mutex_t lock;

	//Pointer to queue.
	queue* q;

	//Pointer to reset function.
	void (*reset)(ts_queue*);

	//Pointer to the delete function.
	void (*delete)(ts_queue*);

	//Pointer to the enqueue function.
	void (*enqueue)(ts_queue*, void*);

	//Pointer to the dequeue function.
	void* (*dequeue)(ts_queue*);

	//Pointer to the peek function.
	void* (*peek)(ts_queue*);

};

//Representation of a thread safe priority queue.
struct ts_priority_queue{

	//Mutex lock.
	pthread_mutex_t lock;

	//Pointer to priority queue.
	priority_queue* q;

};