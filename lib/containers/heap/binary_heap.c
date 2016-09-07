//Create a new binary heap.
binary_heap* _binary_heap_new(standard_library_context*, size_t);

//Add an item to the binary heap.
void _binary_heap_insert(binary_heap*, int32_t, void*);

//Remove an item from the binary heap.
bool _binary_heap_remove(binary_heap*, int32_t);

//Min heapify
void _binary_heap_min_heapify(binary_heap*);

//Max heapify.
void _binary_heap_max_heapify(binary_heap*);

//Delete the binary heap.
bool _binary_heap_delete(binary_heap*);


static void int_binary_heap_resize(binary_heap* heap, size_t new_size){


}

binary_heap* _binary_heap_new(standard_library_context* ctx, size_t start_size){

	binary_heap* heap;

	if(!ctx)
		return 0;

	//Create a new heap object.
	heap = allocate(ctx, sizeof(binary_heap));

	//Create the array.
	heap->data = allocate(ctx, sizeof(binary_heap_entry) * start_size);
	heap->ctx = ctx;
	heap->size = start_size;

	return heap;

}

void _binary_heap_insert(binary_heap* heap, int32_t key, void* data){

	binary_heap_entry* entry;

	if(!heap)
		return;

	if(heap->used == heap->size)
		int_binary_heap_resize(heap, heap->size * 2);

	entry = heap->data + heap->used++;

	entry->key = key;
	entry->data = data;

}

void _binary_heap_max_heapify(binary_heap* heap){

	/*

	HEAP POSITIONS....
	LEFT CHILD: (i * 2) + 1
	RIGHT CHILD: (i * 2) + 2
	PARENT: (i / 2) - (1 - (i % 2))

	*/

	size_t total, start, i;

	if(!heap)
		return;

	start = 0;
	total = heap->used;

	for(i = 0; i < total; i++){

		

	}

}

void _binary_heap_remove(binary_heap* heap, int32_t key){


}


