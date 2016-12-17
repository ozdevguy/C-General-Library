#include "../lib/map.h"


void main(){

	standard_library_context ctx;
	_std_lib_default(&ctx);

	int data = 1200;
	int data1 = 121212;
	int data2 = 61092;
	int data3 = 3822;

	size_t dat = (size_t)malloc(230);

	printf("Address: %ld\n", dat);


	map* myMap = _map_new(&ctx, 2);


	_map_insert(myMap, 23, &data);
	_map_insert(myMap, 25, &data3);
	_map_insert(myMap, 348, &data2);
	_map_insert(myMap, 232323, &data2);
	_map_insert(myMap, 21, &data1);

	
	int i;
	map_entry* node;

	for(i = 0; i < myMap->size; i++){

		node = myMap->map_table + i;

		while(node){

			if(node->used)
				printf("%d, ", *((int*)node->data));

			node = node->next;

		}

		printf("\n");

	}

	printf("\n\n");

	_map_resize(myMap, 20);

	for(i = 0; i < myMap->size; i++){

		node = myMap->map_table + i;

		while(node){

			if(node->used)
				printf("%d, ", *((int*)node->data));

			node = node->next;

		}

		printf("\n");

	}
	

	printf("\n\n\n\n");

	_map_reset_iterator(myMap);

	while(_map_has_next(myMap)){

		int *c;

		if((c = _map_get_next(myMap)))
			printf("Data: %d\n", *c);
		else
			printf("Problem\n");
	}
	
	_map_delete(myMap);
	

}