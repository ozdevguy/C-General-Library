#include "../lib/genlib.h"

void main(){

	standard_library_context ctx;

	_std_lib_default(&ctx);

	int t1 = 2345;
	int t2 = 4567;

	binary_search_tree* tree = _binary_search_tree_new(&ctx);
	//binary_search_tree* avltree = _avl_tree_new(&ctx);

	_binary_search_tree_insert(tree, 23, &t1);
	_binary_search_tree_insert(tree, 10, &t1);
	_binary_search_tree_insert(tree, 26, &t1);
	_binary_search_tree_insert(tree, 25, &t2);
	_binary_search_tree_insert(tree, 45, &t2);
	_binary_search_tree_insert(tree, 71, &t2);
	_binary_search_tree_insert(tree, 12, &t1);
	_binary_search_tree_insert(tree, 1, &t1);

	_binary_search_tree_remove(tree, 23);
	_binary_search_tree_remove(tree, 45);
	_binary_search_tree_remove(tree, 71);
	_binary_search_tree_remove(tree, 12);
	_binary_search_tree_remove(tree, 122);

	printf("\n\n\n\n");
	//Search...
	_binary_search_tree_lookup(tree, 25);

	printf("\n\n\n\n\n");

	_binary_search_tree_lookup(tree, 71);

	printf("\n\n\n\n\n");

	_binary_search_tree_insert(tree, 56, &t2);

	_binary_search_tree_delete(tree);
	//_binary_search_tree_delete(avltree);
}