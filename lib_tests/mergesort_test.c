#include "../lib/genlib.h"

typedef struct test_str test_str;

struct test_str{

	int v1;

	int val;

};

int main(){

	standard_library_context ctx;

	_std_lib_default(&ctx);

	vector* myVector = _vector_new(&ctx, sizeof(test_str), 100);

	
	int i;

	test_str a;
	srand(time(0));

	for(i = 0; i < 1000000; i++){

		a.val = (rand() % 1000000);

		_vector_add(myVector, &a);

	}


	printf("\n\nUNSORTED:\n");

	/*
	_vector_reset_iterator(myVector);

	while(_vector_has_next(myVector)){

		void* p = _vector_get_next(myVector);

		printf("%d,", ((test_str*)p)->val);	

	}
	*/

	printf("\n");

	size_t offset = (void*)(&a.val) - (void*)(&a);
	_mergesort_vector_asc(myVector, offset, sizeof(int));

	printf("\n\nSORTED:\n");

	
	_vector_reset_iterator(myVector);

	i = 0;

	while(_vector_has_next(myVector) && i++ < 150){

		void* p = _vector_get_next(myVector);

		printf("%d\n", ((test_str*)p)->val);	

	}

	printf("\n\n");
	

	_vector_reset_iterator(myVector);

	_vector_delete(myVector);

}