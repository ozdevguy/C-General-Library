/*
<-CUSTOM HIGH-SPEED QUEUE->
This queue is implemented as an array in order to take advantage of memory locality/caching.

Written by Bobby Crawford

*/

static void int_queue_resize(queue* q){

	//New queue size.
	size_t new_size = q->size * 2, i, j = 0;

	//Create a new, larger queue.
	queue_entry* entries = allocate(sizeof(queue_entry) * new_size);

	//Copy over the data.
	for(i = q->front; j < q->size; i = ((i + 1) % q->size)){

		entries[j].data = q->entries[i].data;
		entries[j].size = q->entries[i].size;
		j++;

	}

	q->front = 0;
	q->back = q->size;
	q->size = new_size;

	//Free previously used memory.
	destroy(q->entries);

	//Reassign the pointer.
	q->entries = entries;

}

void _queue_delete(queue* q){

	if(!q)
		return;

	destroy(q->entries);
	destroy(q);

}

void _queue_delete_all(queue* q){

	size_t i;

	for(i = 0; i < q->size; i++){

		if(q->entries[i].data)
			destroy(q->entries[i].data);

	}

	_queue_delete(q);
	
}

queue* _queue_new(size_t start_size){

	//Create a new object.
	queue* q = allocate(sizeof(queue));

	//Create a new queue array.
	q->entries = allocate(sizeof(queue_entry) * start_size);
	q->size = start_size;

	return q;


}


queue_entry _queue_dequeue(queue* q){

	queue_entry s_entry;

	s_entry.data = 0;

	if(!q)
		return s_entry;

	size_t frontpos = q->front;

	if(!q->used)
		return s_entry;

	if(frontpos == q->size - 1)
		frontpos = 0;
	else
		frontpos++;
	
	queue_entry* entry = (q->entries + q->front);
	q->front = frontpos;
	q->used--;

	s_entry.data = entry->data;
	s_entry.size = entry->size;
	s_entry.type = entry->type;

	return s_entry;

}

queue_entry _queue_peek(queue* q){

	queue_entry s_entry;
	queue_entry* entry;

	s_entry.data = 0;

	if(!q)
		return s_entry;

	if(!q->used)
		return s_entry;

	entry = (q->entries + q->front);

	s_entry.data = entry->data;
	s_entry.size = entry->size;
	s_entry.type = entry->type;

	return s_entry;

}

void _queue_enqueue(queue* q, void* data, uint8_t type, size_t size){

	if(!q)
		return;

	size_t backpos;

	if(q->used == q->size)
		int_queue_resize(q);

	if(q->back == q->size - 1)
		backpos = 0;

	else
		backpos = q->back + 1;

	q->entries[q->back].data = data;
	q->entries[q->back].size = size;
	q->entries[q->back].type = type;

	q->back = backpos;
	q->used++;


}







