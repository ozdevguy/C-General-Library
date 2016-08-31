typedef struct queue queue;
typedef struct queue_entry queue_entry;

//A queue entry
struct queue_entry{

	//Data
	byte* data;

	//Data size.
	size_t size;

	//Type of data in this entry.
	uint8_t type;

};

//Representation of a queue.
struct queue{

	//Standard library context.
	standard_library_context* ctx;
	
	//Queue entries (array).
	queue_entry* entries;

	//Size of the current queue array.
	size_t size;

	//Current amount of space used.
	size_t used;

	//Front of the queue.
	size_t front;

	//Back of the queue.
	size_t back;

};