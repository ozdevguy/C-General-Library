typedef struct vector vector;

struct vector{

	//Standard library context.
	standard_library_context* ctx;

	//Size of this vector.
	size_t size;

	//Used spaces.
	size_t used;

	//Data size.
	size_t data_size;

	//Vector iterator counter.
	size_t iterator;
	
	//Vector data.
	byte* data;

};