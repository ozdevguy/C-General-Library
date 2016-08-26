typedef struct queue queue;
typedef struct queue_entry queue_entry;

//A queue entry
struct queue_entry{

	//Data
	void* data;

	//Data size.
	unsigned int size;

	//Type of data in this entry.
	unsigned short type;

};

//Representation of a queue.
struct queue{

	//Queue entries (array).
	queue_entry* entries;

	//Size of the current queue array.
	unsigned int size;

	//Current amount of space used.
	unsigned int used;

	//Front of the queue.
	unsigned int front;

	//Back of the queue.
	unsigned int back;

};