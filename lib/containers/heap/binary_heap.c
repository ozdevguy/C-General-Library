//Create a binary heap.
binary_heap* _binary_heap_new(standard_library_context*, size_t); //FINISHED

//Create a binary heap from a list.
binary_heap* _binary_heap_new_flist(standard_library_context*, void*); //TO DO

//Delete a binary heap.
bool _binary_heap_delete(binary_heap*); //FINISHED

//Insert into a binary heap.
void _binary_heap_insert(binary_heap*, int32_t, void*); //FINISHED

//Remove an item from the binary heap at the given index.
void _binary_heap_remove(binary_heap*, size_t); //TO DO

//Set heap ordering.
void _binary_heap_ordering(binary_heap*, uint8_t); //FINISHED

//Reset iterator.
void _binary_heap_reset_iterator(binary_heap*); //FINISHED

//Iterator has next?
bool _binary_heap_has_next(binary_heap*); //FINISHED

//Get the next item.
binary_heap_entry _binary_heap_get_next(binary_heap*); //FINISHED

//Get an item at the specified index.
binary_heap_entry _binary_heap_get(binary_heap*, size_t); //FINISHED

//Get and remove the root of the binary heap.
binary_heap_entry _binary_heap_remove_root(binary_heap*); //FINISHED

//Peek at the root of the binary heap.
binary_heap_entry _binary_heap_peek(binary_heap*); //TO DO



//Swap two items.
static void int_binary_heap_swap(binary_heap_entry* e1, binary_heap_entry* e2){

	binary_heap_entry ent;

	ent = *e1;

	e1->key = e2->key;
	e1->data = e2->data;

	e2->key = ent.key;
	e2->data = ent.data;

}

//Resize the heap.
static void int_binary_heap_resize(binary_heap* heap, size_t new_size){

	binary_heap_entry* tmp;
	size_t i;

	if(!heap)
		return;

	if(new_size < heap->used)
		return;

	tmp = heap->data;

	heap->data = allocate(heap->ctx, sizeof(binary_heap_entry) * new_size);

	for(i = 0; i < heap->used; i++)
		heap->data[i] = tmp[i];

	heap->size = new_size;
	destroy(heap->ctx, tmp);

}

//Max-heapify (move from pos to 0).
static void int_binary_heap_max_heapify(binary_heap* heap, size_t pos){

	size_t parent;

	if(!heap)
		return;

	if(pos >= heap->used)
		return;

	while(pos){

		parent = ((pos - 1) / 2);

		if(heap->data[pos].key > heap->data[parent].key)
			int_binary_heap_swap(heap->data + pos, heap->data + parent);
		else
			return;

		pos = parent;

	}

}

//Min-heapify (move from pos to 0).
static void int_binary_heap_min_heapify(binary_heap* heap, size_t pos){

	size_t parent;

	if(!heap)
		return;

	if(pos >= heap->used)
		return;

	while(pos){

		parent = ((pos - 1) / 2);

		if(heap->data[pos].key < heap->data[parent].key)
			int_binary_heap_swap(heap->data + pos, heap->data + parent);
		else
			return;

		pos = parent;

	}

}

//Max-reverse heapify (move from pos to end).
static void int_binary_heap_max_reverse_heapify(binary_heap* heap){

	size_t pos = 0, left, right;

	if(!heap)
		return;

	while(pos < heap->used){

		left = (2 * pos) + 1;
		right = (2 * pos) + 2;

		if(left >= heap->used)
			return;

		if(heap->data[left].key > heap->data[pos].key && heap->data[left].key > heap->data[right].key){

			int_binary_heap_swap(heap->data + left, heap->data + pos);
			pos = left;

		}
		else if(right >= heap->used){

			return;

		}
		else if(heap->data[right].key > heap->data[pos].key && heap->data[right].key > heap->data[left].key){

			int_binary_heap_swap(heap->data + right, heap->data + pos);
			pos = right;

		}
		else{

			return;

		}

	}

}

//Min-reverse heapify (move from pos to end).
static void int_binary_heap_min_reverse_heapify(binary_heap* heap){

	size_t pos = 0, left, right;

	if(!heap)
		return;

	while(pos < heap->used){

		left = (2 * pos) + 1;
		right = (2 * pos) + 2;

		if(left >= heap->used)
			return;

		if(heap->data[left].key < heap->data[pos].key && heap->data[left].key < heap->data[right].key){

			int_binary_heap_swap(heap->data + left, heap->data + pos);
			pos = left;

		}
		else if(right >= heap->used){

			return;

		}
		else if(heap->data[right].key < heap->data[pos].key && heap->data[right].key < heap->data[left].key){

			int_binary_heap_swap(heap->data + right, heap->data + pos);
			pos = right;

		}
		else{

			return;
			
		}

	}
}

//Build max heap.
static void int_binary_heap_build_max(binary_heap* heap){

	size_t i;

	if(!heap)
		return;

	for(i = 1; i < heap->used; i++)
		int_binary_heap_max_heapify(heap, i);


}

//Build min heap.
static void int_binary_heap_build_min(binary_heap* heap){

	size_t i;

	if(!heap)
		return;

	for(i = 1; i < heap->used; i++)
		int_binary_heap_min_heapify(heap, i);


}


binary_heap* _binary_heap_new(standard_library_context* ctx, size_t start_size){

	binary_heap* heap;

	if(!ctx)
		return 0;

	heap = allocate(ctx, sizeof(binary_heap));
	heap->data = allocate(ctx, sizeof(binary_heap_entry) * start_size);
	heap->size = start_size;
	heap->ctx = ctx;
	heap->ordering = BINARY_HEAP_MAX;

	return heap;

}

void _binary_heap_ordering(binary_heap* heap, uint8_t ordering){

	if(!heap)
		return;

	heap->ordering = ordering;

	if(ordering == BINARY_HEAP_MAX)
		int_binary_heap_build_max(heap);
	else
		int_binary_heap_build_min(heap);


}

void _binary_heap_insert(binary_heap* heap, int32_t key, void* data){

	if(!heap)
		return;

	if(heap->used == heap->size)
		int_binary_heap_resize(heap, heap->size * 2);

	heap->data[heap->used].key = key;
	heap->data[heap->used].data = data;
	
	if(heap->ordering == BINARY_HEAP_MAX)
		int_binary_heap_max_heapify(heap, heap->used++);
	else
		int_binary_heap_min_heapify(heap, heap->used++);
	

}

bool _binary_heap_delete(binary_heap* heap){

	if(!heap)
		return false;

	destroy(heap->ctx, heap->data);
	destroy(heap->ctx, heap);
	return true;

}

void _binary_heap_reset_iterator(binary_heap* heap){

	if(!heap)
		return;

	heap->iterator = 0;

}

bool _binary_heap_has_next(binary_heap* heap){

	if(!heap)
		return false;

	if(heap->iterator < heap->used)
		return true;

	return false;

}

binary_heap_entry _binary_heap_remove_root(binary_heap* heap){

	binary_heap_entry entry;

	if(!heap)
		return entry;

	if(!heap->used)
		return entry;

	entry = heap->data[0];

	int_binary_heap_swap(heap->data, heap->data + (heap->used-- - 1));

	if(heap->ordering == BINARY_HEAP_MAX)
		int_binary_heap_max_reverse_heapify(heap);
	else
		int_binary_heap_min_reverse_heapify(heap);

	return entry;

}

binary_heap_entry _binary_heap_peek(binary_heap* heap){

	binary_heap_entry entry;

	if(!heap)
		return entry;

	if(!heap->used)
		return entry;

	entry = heap->data[0];

	return entry;

}

binary_heap_entry _binary_heap_get_next(binary_heap* heap){

	binary_heap_entry entry;

	if(!heap)
		return entry;

	if(heap->iterator < heap->used)
		entry = heap->data[heap->iterator++];

	return entry;

}



