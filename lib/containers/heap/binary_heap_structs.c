typedef struct binary_heap binary_heap;
typedef struct binary_heap_entry binary_heap_entry;

enum{BINARY_HEAP_MAX, BINARY_HEAP_MIN};

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

	//Iterator position.
	size_t iterator;

	//Type of ordering.
	uint8_t ordering;

	//Size of the heap.
	size_t size;

	//Total number of used positions in the heap.
	size_t used;
 
};