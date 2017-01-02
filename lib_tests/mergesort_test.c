#include "../lib/genlib.h"

typedef struct test_str test_str;

struct test_str{

	int v1;

	int val;

};

int main(){

	genlib_context* ctx;

	_lib_init();
	ctx = _ctx_init();

	vector* myVector = _vector_new(ctx, sizeof(test_str), 100);

	
	int i, j;

	test_str a;
	srand(time(0));

	for(i = 0; i < 120; i++){

		a.val = rand() % 120;

		_vector_add(myVector, &a);

	}


	printf("\n\nUNSORTED:\n");

	
	_vector_reset_iterator(myVector);

	while(_vector_has_next(myVector)){

		void* p = _vector_get_next(myVector);

		printf("%d,", ((test_str*)p)->val);	

	}
	


	printf("\n");

	size_t offset = (void*)(&a.val) - (void*)(&a);
	_mergesort_vector_asc(myVector, offset, sizeof(int));

	printf("\n\nSORTED:\n");

	
	_vector_reset_iterator(myVector);

	i = 0;

	while(_vector_has_next(myVector)){

		void* p = _vector_get_next(myVector);

		printf("%d\n", ((test_str*)p)->val);	

	}

	//printf("\n\n");
	

	_vector_reset_iterator(myVector);
	

	_vector_delete(myVector);


	printf("LIST TEST...\n\n");

	test_str b;
	b.val = 23;

	test_str c;
	c.val = 10;

	test_str d;
	d.val = 43;

	test_str e;
	e.val = 8;

	list* myList = _list_new(ctx, 5);

	_list_add(myList, &b);
	_list_add(myList, &c);
	_list_add(myList, &d);
	_list_add(myList, &e);

	_list_reset_iterator(myList);

	while(_list_has_next(myList)){

		test_str* t = _list_get_next(myList);

		printf("Val: %d\n", t->val);

	}

	printf("Perform sort...\n\n");

	_mergesort_list_desc(myList, offset, sizeof(int));

	_list_reset_iterator(myList);

	while(_list_has_next(myList)){

		test_str* t = _list_get_next(myList);

		printf("Val: %d\n", t->val);

	}

	_list_delete(myList);
	_ctx_delete(ctx);

}