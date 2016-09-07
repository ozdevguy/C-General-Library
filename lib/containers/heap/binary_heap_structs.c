typedef struct binary_heap binary_heap;
typedef struct binary_heap_entry binary_heap_entry;

struct binary_heap_entry{

	//Value
	int32_t key;

	//Data
	void* data;

};

struct binary_heap{

	//Standard library context.
	standard_library_context* ctx;

	//Pointer to the heap.
	binary_heap_entry* data;

	//Size of the heap.
	size_t size;

	//Total number of used positions in the heap.
	size_t used;

};