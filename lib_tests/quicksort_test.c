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


	list* myList = _list_new(&ctx, 10);

	test_str t;
	t.val = 1;
	_list_add(myList, &t);

	test_str t1;
	t1.val = 10;
	_list_add(myList, &t1);

	test_str t2;
	t2.val = 5;
	_list_add(myList, &t2);

	test_str t3;
	t3.val = 6;
	_list_add(myList, &t3);

	test_str t4;
	t4.val = 4;
	_list_add(myList, &t4);

	test_str t5;
	t5.val = 2;
	_list_add(myList, &t5);


	printf("=====LIST======\n\n");

	_list_reset_iterator(myList);

	while(_list_has_next(myList)){

		test_str* s;

		s = _list_get_next(myList);

		printf("%d\n", s->val);

	}

	_quicksort_list_asc(myList, offset, sizeof(int));

	printf("\n\nSorted...\n");

	_list_reset_iterator(myList);

	while(_list_has_next(myList)){

		test_str* s;

		s = _list_get_next(myList);

		printf("%d\n", s->val);

	}

	_list_delete(myList);

}