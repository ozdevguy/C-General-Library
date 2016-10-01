#include "../lib/ile_stdlib.h"


void main(){

	standard_library_context ctx;

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;

	_std_lib_default(&ctx);

	printf("Set test...\n");
	
	list* mySet1 = _set_new(&ctx, 10);
	list* mySet2 = _set_new(&ctx, 10);

	_set_add(mySet1, &a);
	_set_add(mySet1, &c);
	_set_add(mySet1, &d);
	_set_add(mySet1, &e);

	_set_add(mySet2, &b);
	_set_add(mySet2, &d);
	_set_add(mySet2, &f);
	_set_add(mySet2, &a);


	list* u_set = _set_union(mySet1, mySet2);
	list* i_set = _set_intersect(mySet1, mySet2);

	_set_reset_iterator(u_set);

	while(_set_has_next(u_set))
		printf("Union Value: %d\n", *((int*)_set_get_next(u_set)));

	printf("\n\n\n");

	_set_reset_iterator(i_set);

	while(_set_has_next(i_set))
		printf("Intersect Value: %d\n", *((int*)_set_get_next(i_set)));


	_set_delete(u_set);
	_set_delete(i_set);
	_set_delete(mySet1);
	_set_delete(mySet2);

	return;
}