//Create a new queue.
priority_queue* _priority_queue_new(standard_library_context*, size_t);

//Delete a queue.
void _priority_queue_delete(priority_queue*);

//Delete all data within the queue using a deallocator.
void _priority_queue_delete_all(priority_queue*, void (void*));

//Enqueue a new item.
void _priority_queue_enqueue(priority_queue*, uint32_t, void*, uint8_t, size_t);

//Remove the item at the front of the queue.
queue_entry _priority_queue_dequeue(priority_queue*);

//Peek at the front of the queue.
queue_entry _priority_queue_peek(priority_queue*);

//Priority queue deallocator.
void _priority_queue_dealloc(void*);

