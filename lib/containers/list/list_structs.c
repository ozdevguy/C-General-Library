typedef struct list list;

struct list{

	//Standard library context.
	standard_library_context* ctx;

	//Size of this list.
	size_t size;

	//Used spaces.
	size_t used;

	//List iterator counter.
	size_t iterator;

	//Data
	byte* data;

};