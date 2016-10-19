typedef struct mergesort_representation mergesort_representation;
typedef struct mergesort_vect_description mergesort_vect_description;
typedef struct mergesort_list_description mergesort_list_description;
typedef struct quicksort_vect_description quicksort_vect_description;
typedef struct quicksort_list_description quicksort_list_description;

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

struct mergesort_list_description{

	//List to be sorted.
	list* lst;

	//Offset.
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

struct quicksort_vect_description{

	//Vector to be sorted.
	vector* vect;

	//Offset 
	size_t offset;

	//Value size.
	size_t val_size;

	//Sort order.
	byte order;

};

struct quicksort_list_description{

	//Vector to be sorted.
	list* lst;

	//Offset 
	size_t offset;

	//Value size.
	size_t val_size;

	//Sort order.
	byte order;
	
};