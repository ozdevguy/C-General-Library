/*
<-CUSTOM HIGH-SPEED QUEUE->
This queue is implemented as an array in order to take advantage of memory locality/caching.

Written by Bobby Crawford

*/

static void int_queue_resize(queue* queue){

	//New queue size.
	unsigned int new_size = queue->size * 2, i, j = 0;

	//Create a new, larger queue.
	queue_entry* entries = allocate(sizeof(queue_entry) * new_size);

	//Copy over the data.
	for(i = queue->front; j < queue->size; i = ((i + 1) % queue->size)){

		entries[j].data = queue->entries[i].data;
		entries[j].size = queue->entries[i].size;
		j++;

	}

	queue->front = 0;
	queue->back = queue->size;
	queue->size = new_size;

	//Free previously used memory.
	destroy(queue->entries);

	//Reassign the pointer.
	queue->entries = entries;

}

void _queue_delete(queue* queue){

	if(!queue)
		return;

	destroy(queue->entries);
	destroy(queue);

}

void _queue_delete_all(queue* queue){

	int i;

	for(i = 0; i < queue->size; i++){

		if(queue->entries[i].data)
			destroy(queue->entries[i].data);

	}

	_queue_delete(queue);
	
}

queue* _queue_new(unsigned int start_size){

	//Create a new object.
	queue* queue = allocate(sizeof(queue));

	//Create a new queue array.
	queue->entries = allocate(sizeof(queue_entry) * start_size);
	queue->size = start_size;

	return queue;


}


queue_entry _queue_dequeue(queue* queue){

	queue_entry s_entry;

	s_entry.data = 0;

	if(!queue)
		return s_entry;

	int frontpos = queue->front;

	if(!queue->used)
		return s_entry;

	if(frontpos == queue->size - 1)
		frontpos = 0;
	else
		frontpos++;
	
	queue_entry* entry = (queue->entries + queue->front);
	queue->front = frontpos;
	queue->used--;

	s_entry.data = entry->data;
	s_entry.size = entry->size;
	s_entry.type = entry->type;

	return s_entry;

}

queue_entry _queue_peek(queue* queue){

	queue_entry s_entry;
	queue_entry* entry;

	s_entry.data = 0;

	if(!queue)
		return s_entry;

	if(!queue->used)
		return s_entry;

	entry = (queue->entries + queue->front);

	s_entry.data = entry->data;
	s_entry.size = entry->size;
	s_entry.type = entry->type;

	return s_entry;

}

void _queue_enqueue(queue* queue, void* data, unsigned short type, unsigned int size){

	if(!queue)
		return;

	int backpos;

	if(queue->used == queue->size)
		int_queue_resize(queue);

	if(queue->back == queue->size - 1)
		backpos = 0;

	else
		backpos = queue->back + 1;

	queue->entries[queue->back].data = data;
	queue->entries[queue->back].size = size;
	queue->entries[queue->back].type = type;

	queue->back = backpos;
	queue->used++;


}







