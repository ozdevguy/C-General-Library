#include "../lib/ile_stdlib.h"

void main(){

	standard_library_context ctx;

	int a = 1234;
	int b = 9843;

	_std_lib_default(&ctx);

	list* myList = _list_new(&ctx, 10);

	_list_add(myList, &a);
	//_list_add(myList, &b);

	printf("%p\n", _list_get(myList, 0));

	printf("%p\n", &a);


}