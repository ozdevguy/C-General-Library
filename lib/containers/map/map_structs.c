typedef struct map map;
typedef struct map_entry_int map_entry_int;
typedef struct map_entry map_entry;
typedef struct hashmap_ext hashmap_ext;

struct map_entry{

	//Success?
	bool success;

	//Key.
	size_t key;

	//Size of the data in this entry.
	size_t size;

	//Data type.
	uint8_t type;

	//Data pointer.
	byte* data;

	//Other data?
	void* ext;

};

struct map_entry_int{

	//Used
	bool used;

	//Key
	size_t key;
	
	//Size of the data in this entry.
	size_t size;

	//Data type.
	uint8_t type;

	//Data pointer.
	byte* data;

	//Next map entry.
	map_entry_int* next;

	//Other data?
	void* ext;

};

struct map{

	//Standard library context.
	standard_library_context* ctx;

	//Iterator table entry.
	size_t iter_tbl;

	//Iterator list entry.
	map_entry_int* iter_list;

	//Hash table size.
	size_t size;

	//Total items in hash table.
	size_t total;

	//Table.
	map_entry_int* map_table;

	//Hash function (hashmap only).
	size_t (*hash_algorithm)(byte*);

};