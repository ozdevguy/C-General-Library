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

priority_queue.h
========================================================================


*/

typedef struct priority_queue priority_queue;
typedef struct ts_priority_queue ts_priority_queue;

/* PRIORITY QUEUE */

//Create a new queue.
priority_queue* _priority_queue_new(standard_library_context*, size_t); //FINISHED

//Delete a queue.
void _priority_queue_delete(priority_queue*); //FINISHED

//Enqueue a new item.
void _priority_queue_enqueue(priority_queue*, long, void*); //FINISHED

//Remove the item at the front of the queue.
void* _priority_queue_dequeue(priority_queue*); //FINISHED

//Peek at the front of the queue.
void* _priority_queue_peek(priority_queue*); //FINISHED

//Rebuild the priority queue (after possibly making changes to a heap entry).
void _priority_queue_rebuild(priority_queue*); //FINISHED

//Change the queue type.
void _priority_queue_type(priority_queue*, uint8_t);

//Get a pointer to an item.
binary_heap_entry* _priority_queue_get(priority_queue*, size_t);

/* THREAD SAFE PRIORITY QUEUE */

//Create a new queue.
ts_priority_queue* _ts_priority_queue_new(standard_library_context*, size_t); //FINISHED

//Delete a queue.
void _ts_priority_queue_delete(ts_priority_queue*); //FINISHED

//Enqueue a new item.
void _ts_priority_queue_enqueue(ts_priority_queue*, long, void*); //FINISHED

//Remove the item at the front of the queue.
void* _ts_priority_queue_dequeue(ts_priority_queue*); //FINISHED

//Peek at the front of the queue.
void* _ts_priority_queue_peek(ts_priority_queue*); //FINISHED

//Rebuild the priority queue (after possibly making changes to a heap entry).
void _ts_priority_queue_rebuild(ts_priority_queue*); //FINISHED

//Change the queue type.
void _ts_priority_queue_type(ts_priority_queue*, uint8_t);

//Get a pointer to an item.
binary_heap_entry* _ts_priority_queue_get(ts_priority_queue*, size_t);


#include "priority_queue.c"
#include "ts_priority_queue.c"