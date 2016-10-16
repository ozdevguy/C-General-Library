typedef struct mergesort_representation mergesort_representation;
typedef struct mergesort_vect_description mergesort_vect_description;

struct mergesort_vect_description{

	//Vector to be sorted.
	vector* vect;

	//Offset
	size_t offset;

	//Value size.
	size_t val_size;

	//Sort order.
	byte order;

};


struct mergesort_representation{

	//Item value.
	long value;

	//Vector copy.
	byte* copy;

};