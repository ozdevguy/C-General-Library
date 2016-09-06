//Create a new binary heap.
binary_heap* _binary_heap_new(standard_library_context*, size_t);

//Add an item to the binary heap.
void _binary_heap_insert(binary_heap*, int32_t, void*);

//Remove an item from the binary heap.
bool _binary_heap_remove(binary_heap*, int32_t);

//Delete the binary heap.
bool _binary_heap_delete(binary_heap*);