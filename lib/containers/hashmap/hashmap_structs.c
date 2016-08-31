typedef struct hashmap hashmap;
typedef struct hashmap_entry hashmap_entry;

struct hashmap_entry{

	//Key
	size_t key;
	
	//Size of the data in this entry.
	size_t size;

	//Data type.
	uint8_t type;

	//Data pointer.
	byte* data;

	//Next hashmap entry.
	hashmap_entry* next;

};

struct hashmap{

	//Standard library context.
	standard_library_context* ctx;

	//Hash table size.
	size_t size;

	//Total items in hash table.
	size_t total;

	//Hash table.
	hashmap_entry* hash_table;

};