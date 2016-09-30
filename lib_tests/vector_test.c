#include "../lib/vector.h"


void main(){


	standard_library_context ctx;
	_std_lib_default(&ctx);
	
	int t = 123;
	int v = 345;
	int e = 678;

	vector* vect = _vector_new(&ctx, sizeof(int), 2);

	_vector_add(vect, &t);
	_vector_add(vect, &v);
	_vector_add(vect, &e);

	int i;

	_vector_reset_iterator(vect);

	while(_vector_has_next(vect))
		printf("Data: %d\n", *((int*)_vector_get_next(vect)));

	
	printf("\n\n\n\n");
	printf("Data: %d\n", *((int*)_vector_get(vect, 0)));
	printf("Data: %d\n", *((int*)_vector_get(vect, 1)));
	printf("Data: %d\n", *((int*)_vector_get(vect, 2)));
	

	_vector_delete(vect);

}