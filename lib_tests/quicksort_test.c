#include "../lib/genlib.h"

typedef struct test_str test_str;

struct test_str{

	char* test;

	int val;

};

void main(){

	standard_library_context ctx;

	_std_lib_default(&ctx);

	vector* myVect = _vector_new(&ctx, sizeof(test_str), 5);

	int i;

	
	srand(time(0));

	for(i = 0; i < 100000; i++){

		test_str t;
		t.val = rand() % 100000;

		_vector_add(myVect, &t);

	}
	
	printf("Sort!\n");

	/*
	test_str t;
	t.val = 1;
	_vector_add(myVect, &t);

	t.val = 3;
	_vector_add(myVect, &t);

	t.val = 5;
	_vector_add(myVect, &t);

	t.val = 6;
	_vector_add(myVect, &t);

	t.val = 4;
	_vector_add(myVect, &t);

	t.val = 2;
	_vector_add(myVect, &t);
	*/

	test_str a;

	size_t offset = (void*)&a.val - (void*)&a;

	_vector_reset_iterator(myVect);

	int l = 0;

	_quicksort_vector_desc(myVect, offset, sizeof(int));

	printf("\n\n");

	_vector_reset_iterator(myVect);

	l = 0;

	while(_vector_has_next(myVect) && l++ < 200){

		test_str* t;

		t = _vector_get_next(myVect);

		printf("%d\n", t->val);

	}

	_vector_delete(myVect);

}