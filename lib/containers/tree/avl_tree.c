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

static void int_avl_right_rotate_check(binary_search_tree* tree, binary_search_tree_node* grandparent){

	size_t diff;

	if(!tree || !grandparent)
		return;

	if(grandparent->right){

		diff = grandparent->w - grandparent->right->w;

		//Not imbalanced...
		if(diff < 2)
			return;

	}

	//Imbalanced.

}

binary_search_tree_node* _avl_tree_insert_e(binary_search_tree* tree, long key, void* data){

	binary_search_tree_node *node, *parent, *grandparent;
	size_t diff;

	node = _binary_search_tree_insert_e(tree, key, data);

	if(!node)
		return 0;

	//Set the weight of the new node.
	node->w = 1;

	while(node){

		parent = node->parent;

		if(!parent)
			break;

		grandparent = parent->parent;

		if(!grandparent)
			break;

		if(parent->left == node && grandparent->left == parent)
			int_avl_right_rotate_check(tree, grandparent);

		else if(parent->left == node && grandparent->right == parent)
			int_avl_right_left_rotate_check(tree, grandparent);

		else if(parent->right == node && grandparent->right == parent)
			int_avl_left_rotate_check(tree, grandparent);

		else
			int_avl_left_right_rotate_check(tree, grandparent);

		
		node = node->parent;
		node->w++;

	}

	
}