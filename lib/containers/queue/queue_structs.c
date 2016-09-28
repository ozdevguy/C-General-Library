typedef struct queue queue;
typedef struct queue_entry queue_entry;
typedef struct priority_queue priority_queue;

//Representation of a queue.
struct queue{

	//Standard library context.
	standard_library_context* ctx;
	
	//Queue entries (array).
	byte** entries;

	//Size of the current queue array.
	size_t size;

	//Current amount of space used.
	size_t used;

	//Front of the queue.
	size_t front;

	//Back of the queue.
	size_t back;

};

//Representation of a priority queue.
struct priority_queue{

	//Standard library context.
	standard_library_context* ctx;

	//Unsigned long offset.
	size_t offset;
	
	//Binary heap pointer.
	void* heap;

};