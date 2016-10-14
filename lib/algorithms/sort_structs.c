typedef struct sort_representation sort_representation;
typedef struct sort_representation_cont sort_representation_cont;

struct sort_representation_cont{

	//Standard library context.
	standard_library_context* ctx;

	//Order
	byte order;

	//Total size.
	size_t total;

	//Sort representation array.
	sort_representation* sort_arr;

};

struct sort_representation{

	//Value
	long value;

	//Data
	void* data;

};