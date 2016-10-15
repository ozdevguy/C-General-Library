typedef struct sort_representation sort_representation;
typedef struct sort_representation_cont sort_representation_cont;
typedef struct sort_threaded_mergesort sort_threaded_mergesort;
typedef struct sort_threaded_mergesort_level_comp sort_threaded_mergesort_level_comp;
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

struct sort_threaded_mergesort_level_comp{

	//Start position.
	size_t start;

	//Middle position.
	size_t middle;

	//End position.
	size_t end;

};