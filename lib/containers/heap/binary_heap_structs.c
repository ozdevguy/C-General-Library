typedef struct binary_heap binary_heap;
typedef struct int_binary_heap_entry int_binary_heap_entry;

struct int_binary_heap_entry{

	//Value.
	int32_t value;

	//Data.
	void* data;

};

struct binary_heap{

	//Standard library context.
	standard_library_context* ctx;

	//Pointer to the heap.
	int_binary_heap_entry* data;

	//Number of items in the heap.
	size_t total;

};