#include "../lib/list.h"

void main(){

	genlib_context* ctx;

	_lib_init();

	ctx = _ctx_init();

	int a = 1234;
	int b = 9843;
	int d = 4343;


	list* myList = _list_new(ctx, 2);

	_list_add(myList, &a);
	_list_add(myList, &b);
	_list_add(myList, &a);
	_list_add(myList, &b);
	_list_add(myList, &d);

	_list_remove(myList, 3);

	
	_list_reset_iterator(myList);

	while(_list_has_next(myList))
		printf("%d\n", *((int*)_list_get_next(myList)));

	_list_add(myList, &a);

	printf("\n\n");

	_list_reset_iterator(myList);

	while(_list_has_next(myList))
		printf("%d\n", *((int*)_list_get_next(myList)));


	_list_delete(myList);
	_ctx_delete(ctx);

}