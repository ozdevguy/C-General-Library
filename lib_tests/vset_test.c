#include "../lib/ile_stdlib.h"

typedef struct blah blah;

struct blah{

	int test;

	short val;

};

void main(){

	standard_library_context ctx;

	_std_lib_default(&ctx);

	blah testBlah;

	blah blah1;
	blah blah2;
	blah blah3;
	blah blah4;
	blah blah5;
	blah blah6;
	blah blah7;
	blah blah8;

	blah1.test = 20;
	blah1.val = 1;

	blah2.test = 30;
	blah2.val = 2;

	blah3.test = 40;
	blah3.val = 3;

	blah4.test = 50;
	blah4.val = 4;

	blah5.test = 60;
	blah5.val = 5;

	blah6.test = 70;
	blah6.val = 6;

	blah7.test = 80;
	blah7.val = 7;

	blah8.test = 90;
	blah8.val = 8;

	//1, 3, 4, 6, 7
	vector* mySet1 = _vset_new(&ctx, sizeof(blah), &testBlah, &(testBlah.val), sizeof(testBlah.val), 1);

	//2, 5, 6, 7, 8
	vector* mySet2 = _vset_new(&ctx, sizeof(blah), &testBlah, &(testBlah.val), sizeof(testBlah.val), 1);


	_vset_add(mySet1, &blah1);
	_vset_add(mySet1, &blah3);
	_vset_add(mySet1, &blah4);
	_vset_add(mySet1, &blah6);
	_vset_add(mySet1, &blah7);


	_vset_add(mySet2, &blah2);
	_vset_add(mySet2, &blah5);
	_vset_add(mySet2, &blah6);
	//_vset_add(mySet2, &blah7);
	_vset_add(mySet2, &blah8);
	
	printf("UNION...\n");
	vector* u_set = _vset_union(mySet1, mySet2);

	printf("INTERSECT...\n");
	vector* i_set = _vset_intersect(mySet1, mySet2);

	_vset_delete(mySet1);
	_vset_delete(mySet2);


	if(!u_set)
		printf("WTF?\n");

	_vset_reset_iterator(u_set);

	while(_vset_has_next(u_set)){

		blah* bt = _vset_get_next(u_set);

		printf("Union: %d\n", bt->test);

	}

	_vset_delete(u_set);

	printf("\n\n\n");

	_vset_reset_iterator(i_set);

	while(_vset_has_next(i_set)){

		blah* bt = _vset_get_next(i_set);

		printf("Intersect: %d\n", bt->test);

	}

	printf("Used: %ld\n", i_set->used);

	_vset_delete(i_set);

}