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

queue.h
========================================================================


*/

/* STRUCTURES */

typedef struct queue queue;
typedef struct queue_entry queue_entry;
typedef struct priority_queue priority_queue;

/* QUEUE */

//Create a new queue.
queue* _queue_new(standard_library_context*, size_t);

//Reset the queue.
void _queue_reset(queue*);

//Delete a queue.
void _queue_delete(queue*);

//Enqueue a new item.
void _queue_enqueue(queue*, void*);

//Remove the item at the front of the queue.
void* _queue_dequeue(queue*);

//Peek at the front of the queue.
void* _queue_peek(queue*);


#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "queue_structs.c"
	#include "queue.c"

#endif
