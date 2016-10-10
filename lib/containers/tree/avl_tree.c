/*
ozdevguy | C General Libraries

Copyright 2016 Bobby Crawford (ozdevguy)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

avl_tree.c
========================================================================


*/

//Create a new binary search tree.
binary_search_tree* _avl_tree_new(standard_library_context*); //FINISHED

//Delete a binary search tree.
void _avl_tree_delete(binary_search_tree*); //FINISHED

//Insert an item into the binary search tree.
void _avl_tree_insert(binary_search_tree*, long, void*); //FINISHED

//Insert an item into the binary search tree, then return the newly created node.
binary_search_tree_node* _avl_insert_e(binary_search_tree*, long, void*); //FINISHED

//Remove a node from the binary search tree.
void* _avl_tree_remove(binary_search_tree*, long);

//Remove a node from the binary search tree, and get a copy of the removed node.
bool _avl_tree_remove_e(binary_search_tree*, long, binary_search_tree_node*);

//Get an item from the binary search tree.
void* _avl_tree_lookup(binary_search_tree*, long);

//Get the greatest element in the tree.
binary_search_tree_node* _avl_tree_greatest(binary_search_tree*);

//Get the greatest sub-node of a particular root.
binary_search_tree_node* _avl_tree_greatest_s(binary_search_tree_node*);

//Get a node from the binary search tree.
binary_search_tree_node* _avl_tree_lookup_e(binary_search_tree*, long);


binary_search_tree* _avl_tree_new(standard_library_context* ctx){

	return _binary_search_tree_new(ctx);

}

void _avl_tree_delete(binary_search_tree* tree){

	_binary_search_tree_delete(tree);
	
}