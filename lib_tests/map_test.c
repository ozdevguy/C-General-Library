#include "../lib/map.h"
#include "../lib/string.h"
#include "../lib/hashmap.h"


void main(){

	standard_library_context ctx;
	_std_lib_default(&ctx);

	int data = 1200;
	int data2 = 61092;

	//Create a new map.
	map* myMap = _map_new(&ctx, 5);

	//Insert an item into the map.
	_map_insert(myMap, 1234, &data, 1, 1);
	_map_insert(myMap, 1244, &data, 1, 1);
	_map_insert(myMap, 234, &data, 1, 1);
	_map_insert(myMap, 56, &data, 1, 1);
	_map_insert(myMap, 1223, &data2, 1, 1);
	_map_insert(myMap, 567, &data, 1, 1);
	_map_insert(myMap, 78, &data, 1, 1);
	_map_insert(myMap, 12345, &data, 1, 1);
	_map_insert(myMap, 5678, &data, 1, 1);
	_map_insert(myMap, 5000, &data, 1, 1);
	_map_insert(myMap, 5000, &data, 1, 1);
	_map_insert(myMap, 78, &data, 1, 1);


	//Print the contents of the table.

	_map_reset_iterator(myMap);

	while(_map_has_next(myMap))
		printf("Key: %ld\n", _map_get_next(myMap).key);


	//while(_map_has_next(myMap))
		//printf("Key: %ld, Value: %d\n", _map_next(myMap).key, *((int*)_map_next(myMap).data));


	//printf("%d\n", *((int*)_map_lookup(myMap, 1223).data));
	//printf("%d\n", *((int*)_map_lookup(myMap, 78).data));

	int i;
	map_entry_int* entry;

	printf("\n\nPOST DELETE......\n");
	for(i = 0; i < myMap->size; i++){

		printf("Table Entry %d: ", i);

		entry = myMap->map_table + i;

		while(entry){

			printf("%ld ", entry->key);
			entry = entry->next;

		}

		printf("\n");
	}

	_map_resize(myMap, 1);

	printf("\n\nPOST DELETE......\n");
	for(i = 0; i < myMap->size; i++){

		printf("Table Entry %d: ", i);

		entry = myMap->map_table + i;

		while(entry){

			printf("%ld ", entry->key);
			entry = entry->next;

		}

		printf("\n");
	}

	_map_delete(myMap);


	//Test deallocator.

	map* map2 = _map_new(&ctx, 10);

	string* myNewString1 = _string_new_fbytes(&ctx, "Hello world!\n");
	string* myNewString2 = _string_new_fbytes(&ctx, "Hello world!\n");

	if(_string_compare(myNewString1, myNewString2))
		printf("Same!\n");
	else
		printf("Not the same!\n");


	_map_insert(map2, 12, (byte*)myNewString1, 1, 1);
	_map_insert(map2, 13, (byte*)myNewString2, 1, 1);


	_map_delete_all(map2, _string_dealloc);

	//_map_delete(map2);

}