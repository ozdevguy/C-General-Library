typedef struct map map;
typedef struct map_entry map_entry;
typedef struct hashmap_entry hashmap_entry;


struct hashmap_entry{

	string* key;

	void* data;
	
};

struct map_entry{

	//Used
	bool used;

	//Key
	size_t key;

	//Data pointer.
	void* data;

	//Other data?
	void* ext;

	//Next map entry.
	map_entry* next;

};

struct map{

	//Standard library context.
	standard_library_context* ctx;

	//Iterator table entry.
	size_t iter_tbl;

	//Iterator list entry.
	map_entry* iter_list;

	//Hash table size.
	size_t size;

	//Total items in hash table.
	size_t total;

	//Table.
	map_entry* map_table;

	//Hash function (hashmap only).
	size_t (*hash_algorithm)(byte*);

};