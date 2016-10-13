#include "../lib/algorithms.h"

typedef struct test_str test_str;

struct test_str{

	int v1;

	int val;

};

void main(){

	standard_library_context ctx;

	_std_lib_default(&ctx);

	list* myList = _list_new(&ctx, 10);

	test_str a;
	a.val = 23;

	test_str b;
	b.val = 20;

	test_str c;
	c.val = 33;

	test_str d;
	d.val = 90;

	test_str e;
	e.val = 56;

	_list_add(myList, &a);
	_list_add(myList, &b);
	_list_add(myList, &c);
	_list_add(myList, &d);
	_list_add(myList, &e);


	_list_reset_iterator(myList);

	printf("\n\nUNSORTED:\n");

	while(_list_has_next(myList)){

		void* p = _list_get_next(myList);

		printf("%d,", ((test_str*)p)->val);		
	}

	printf("\n");

	size_t offset = (void*)(&a.val) - (void*)(&a);
	_mergesort_list_asc(myList, offset, sizeof(int));

	_list_reset_iterator(myList);

	printf("\n\nSORTED:\n");

	while(_list_has_next(myList)){

		void* p = _list_get_next(myList);

		printf("%d,", ((test_str*)p)->val);		
	}

	printf("\n");

	_list_delete(myList);

}