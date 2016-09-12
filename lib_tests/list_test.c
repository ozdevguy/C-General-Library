#include "../lib/ile_stdlib.h"

void main(){

	standard_library_context ctx;

	int a = 1234;
	int b = 9843;
	int d = 4343;

	_std_lib_default(&ctx);

	list* myList = _list_new(&ctx, 2);

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

	printf("\n\n%d", *((int*)_list_get(myList, _list_find(myList, &d, 0))));

	_list_delete(myList);

}