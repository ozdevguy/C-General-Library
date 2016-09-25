typedef struct set set;
typedef struct set_item set_item;

struct set{

	//Standard library context.
	standard_library_context* ctx;

	//Size of this set.
	size_t size;

	//Number of spaces used.
	size_t used;

	//Set array.
	set_item* items;

	//Set iterator.
	size_t iterator;

};

struct set_item{

	//Item identifier.
	size_t identifier;

	//Item pointer.
	void* ptr;

};