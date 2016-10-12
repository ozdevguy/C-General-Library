#include "../lib/genlib.h"

void main(){

	int test = 1;

	standard_library_context ctx;

	_std_lib_default(&ctx);

	binary_search_tree* avl = _avl_tree_new(&ctx);

	printf("Insert 60\n");
	_avl_tree_insert_e(avl, 60, &test);
	_binary_search_tree_lookup_e(avl, 60);
	printf("\n\n");

	printf("Insert 55\n");
	_avl_tree_insert_e(avl, 55, &test);
	_binary_search_tree_lookup_e(avl, 55);
	printf("\n\n");

	printf("Insert 50\n");
	_avl_tree_insert_e(avl, 50, &test);
	_binary_search_tree_lookup_e(avl, 50);
	printf("\n\n");


	printf("Insert 53\n");
	_avl_tree_insert_e(avl, 53, &test);
	_binary_search_tree_lookup_e(avl, 53);
	printf("\n\n");

	printf("Insert 47\n");
	_avl_tree_insert_e(avl, 47, &test);
	_binary_search_tree_lookup_e(avl, 47);
	printf("\n\n");


	printf("Insert 46\n");
	_avl_tree_insert_e(avl, 46, &test);
	_binary_search_tree_lookup_e(avl, 46);
	printf("\n\n");

	printf("Insert 70\n");
	_avl_tree_insert_e(avl, 70, &test);
	_binary_search_tree_lookup_e(avl, 70);
	printf("\n\n");


	printf("Insert 71\n");
	_avl_tree_insert_e(avl, 71, &test);
	_binary_search_tree_lookup_e(avl, 71);
	printf("\n\n");

	printf("Insert 72\n");
	_avl_tree_insert_e(avl, 72, &test);
	_binary_search_tree_lookup_e(avl, 72);
	printf("\n\n");


	printf("Insert 48\n");
	_avl_tree_insert_e(avl, 48, &test);
	_binary_search_tree_lookup_e(avl, 48);
	printf("\n\n");

	printf("Insert 45\n");
	_avl_tree_insert_e(avl, 45, &test);
	_binary_search_tree_lookup_e(avl, 45);
	printf("\n\n");

	printf("Insert 52\n");
	_avl_tree_insert_e(avl, 52, &test);
	_binary_search_tree_lookup_e(avl, 52);
	printf("\n\n");


	
	printf("Insert 67\n");
	_avl_tree_insert_e(avl, 67, &test);
	_binary_search_tree_lookup_e(avl, 67);
	printf("\n\n");

	printf("Insert 83\n");
	_avl_tree_insert_e(avl, 83, &test);
	_binary_search_tree_lookup_e(avl, 83);
	printf("\n\n");

	printf("Insert 75\n");
	_avl_tree_insert_e(avl, 75, &test);
	_binary_search_tree_lookup_e(avl, 75);
	printf("\n\n");

	printf("Insert 77\n");
	_avl_tree_insert_e(avl, 77, &test);
	_binary_search_tree_lookup_e(avl, 77);
	printf("\n\n");

	printf("Insert 74\n");
	_avl_tree_insert_e(avl, 74, &test);
	_binary_search_tree_lookup_e(avl, 74);
	printf("\n\n");

	printf("Insert 76\n");
	_avl_tree_insert_e(avl, 76, &test);
	_binary_search_tree_lookup_e(avl, 76);
	printf("\n\n");

	printf("Insert 73\n");
	_avl_tree_insert_e(avl, 73, &test);
	_binary_search_tree_lookup_e(avl, 73);
	printf("\n\n");

	printf("Insert 31\n");
	_avl_tree_insert_e(avl, 31, &test);
	_binary_search_tree_lookup_e(avl, 31);
	printf("\n\n");

	printf("Insert 38\n");
	_avl_tree_insert_e(avl, 38, &test);
	_binary_search_tree_lookup_e(avl, 38);
	printf("\n\n");

	printf("Insert 37\n");
	_avl_tree_insert_e(avl, 37, &test);
	_binary_search_tree_lookup_e(avl, 37);
	printf("\n\n");

	printf("Insert 42\n");
	_avl_tree_insert_e(avl, 42, &test);
	_binary_search_tree_lookup_e(avl, 42);
	printf("\n\n");


	printf("Insert 40\n");
	_avl_tree_insert_e(avl, 40, &test);
	_binary_search_tree_lookup_e(avl, 40);
	printf("\n\n");

	printf("Insert 25\n");
	_avl_tree_insert_e(avl, 25, &test);
	_binary_search_tree_lookup_e(avl, 25);
	printf("\n\n");


	printf("Insert 43\n");
	_avl_tree_insert_e(avl, 43, &test);
	_binary_search_tree_lookup_e(avl, 43);
	printf("\n\n");

	printf("Insert 42\n");
	_avl_tree_insert_e(avl, 42, &test);
	_binary_search_tree_lookup_e(avl, 42);
	printf("\n\n");

	_avl_tree_delete(avl);

}