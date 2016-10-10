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

binary_heap.c
========================================================================


*/

//Create a binary heap.
binary_heap* _binary_heap_new(standard_library_context*, size_t); //FINISHED

//Delete a binary heap.
bool _binary_heap_delete(binary_heap*); //FINISHED

//Insert into a binary heap.
void _binary_heap_insert(binary_heap*, long, void*); //FINISHED

//Remove an item from the binary heap at the given index.
bool _binary_heap_remove(binary_heap*, size_t, binary_heap_entry*); //TO DO

//Set heap ordering.
void _binary_heap_ordering(binary_heap*, uint8_t); //FINISHED

//Reset iterator.
void _binary_heap_reset_iterator(binary_heap*); //FINISHED

//Iterator has next?
bool _binary_heap_has_next(binary_heap*); //FINISHED

//Get the next item.
binary_heap_entry* _binary_heap_get_next(binary_heap*); //FINISHED

//Get an item at the specified index.
binary_heap_entry* _binary_heap_get(binary_heap*, size_t); //FINISHED

//Get and remove the root of the binary heap.
bool _binary_heap_remove_root(binary_heap*, binary_heap_entry*); //FINISHED

//Peek at the root of the binary heap.
bool _binary_heap_peek(binary_heap*, binary_heap_entry*); //FINISHED

//Rebuild the heap.
void _binary_heap_build(binary_heap*);




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
static void int_binary_heap_max_reverse_heapify(binary_heap* heap, size_t pos){

	size_t left, right;

	if(!heap)
		return;

	while(pos < heap->used){

		left = (2 * pos) + 1;
		right = (2 * pos) + 2;

		//No children; we're finished.
		if(left >= heap->used)
			return;

		//The left child is the only child, and it is greater than the parent.
		else if(heap->data[left].key > heap->data[pos].key && right >= heap->used){

			int_binary_heap_swap(heap->data + left, heap->data + pos);
			return;

		}

		//The left child is not the only child, but it is greater than the right child.
		else if(heap->data[left].key > heap->data[pos].key && heap->data[left].key > heap->data[right].key){

			int_binary_heap_swap(heap->data + left, heap->data + pos);
			pos = left;

		}

		else if(right >= heap->used)
			return;

		//The right child is greater than the left child.
		else if(heap->data[right].key > heap->data[pos].key && heap->data[right].key > heap->data[left].key){

			int_binary_heap_swap(heap->data + right, heap->data + pos);
			pos = right;

		}
		else
			return;

	}

}

//Min-reverse heapify (move from pos to end).
static void int_binary_heap_min_reverse_heapify(binary_heap* heap, size_t pos){

	size_t left, right;

	if(!heap)
		return;

	while(pos < heap->used){

		left = (2 * pos) + 1;
		right = (2 * pos) + 2;

		//No children; we're finished.
		if(left >= heap->used)
			return;

		//The left child is the only child, and it is less than the parent.
		else if(heap->data[left].key < heap->data[pos].key && right >= heap->used){

			int_binary_heap_swap(heap->data + left, heap->data + pos);
			return;

		}

		//The left child is not the only child, but it is less than the right child.
		else if(heap->data[left].key < heap->data[pos].key && heap->data[left].key < heap->data[right].key){

			int_binary_heap_swap(heap->data + left, heap->data + pos);
			pos = left;

		}

		//There is no right child. We are finished.
		else if(right >= heap->used)
			return;

		//The right child is less than the left child.
		else if(heap->data[right].key < heap->data[pos].key && heap->data[right].key < heap->data[left].key){

			int_binary_heap_swap(heap->data + right, heap->data + pos);
			pos = right;

		}
		else
			return;

	}
}


binary_heap* _binary_heap_new(standard_library_context* ctx, size_t start_size){

	binary_heap* heap;

	if(!ctx || !start_size)
		return 0;

	heap = allocate(ctx, sizeof(binary_heap));
	heap->data = allocate(ctx, sizeof(binary_heap_entry) * start_size);
	heap->size = start_size;
	heap->ctx = ctx;
	heap->ordering = BINARY_HEAP_MAX;

	return heap;

}

void _binary_heap_ordering(binary_heap* heap, uint8_t ordering){

	size_t i;

	if(!heap)
		return;

	heap->ordering = ordering;

	if(ordering == BINARY_HEAP_MAX){

		for(i = heap->used / 2; i >= 0; i--)
			int_binary_heap_max_reverse_heapify(heap, i);

	}
	else{

		for(i = heap->used / 2; i >= 0; i--)
			int_binary_heap_min_reverse_heapify(heap, i);
	}


}

void _binary_heap_build(binary_heap* heap){

	size_t i;

	if(!heap)
		return;

	if(heap->ordering == BINARY_HEAP_MAX){

		for(i = heap->used / 2; i >= 0; i--)
			int_binary_heap_max_reverse_heapify(heap, i);

	}
	else{

		for(i = heap->used / 2; i >= 0; i--)
			int_binary_heap_min_reverse_heapify(heap, i);
		
	}

}

void _binary_heap_insert(binary_heap* heap, long key, void* data){

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

bool _binary_heap_remove(binary_heap* heap, size_t pos, binary_heap_entry* entry){

	if(!heap)
		return false;

	if(pos > heap->used)
		return false;

	*entry = heap->data[pos];
	heap->data[pos] = heap->data[heap->used-- - 1];
	_binary_heap_build(heap);

	return true;

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

bool _binary_heap_remove_root(binary_heap* heap, binary_heap_entry* entry){

	if(!heap || !entry)
		return false;

	if(!heap->used)
		return false;

	*entry = heap->data[0];

	int_binary_heap_swap(heap->data, heap->data + (heap->used-- - 1));

	if(heap->ordering == BINARY_HEAP_MAX)		
		int_binary_heap_max_reverse_heapify(heap, 0);
	else
		int_binary_heap_min_reverse_heapify(heap, 0);

	return true;

}

bool _binary_heap_peek(binary_heap* heap, binary_heap_entry* entry){

	if(!heap || !entry)
		return false;

	if(!heap->used)
		return false;

	*entry = heap->data[0];

	return true;

}

binary_heap_entry* _binary_heap_get_next(binary_heap* heap){

	if(!heap)
		return 0;

	if(heap->iterator < heap->used)
		 return heap->data + heap->iterator++;

	return 0;

}

binary_heap_entry* _binary_heap_get(binary_heap* heap, size_t index){

	binary_heap_entry* entry = 0;

	if(!heap)
		return 0;

	if(index < heap->used)
		return heap->data + index;

	return 0;

}




