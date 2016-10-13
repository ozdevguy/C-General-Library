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
bool _avl_tree_insert(binary_search_tree*, long, void*); //FINISHED

binary_search_tree_node* _avl_tree_insert_e(binary_search_tree*, long, void*);

//Insert an item into the binary search tree, then return the newly created node.
bool _avl_tree_insert(binary_search_tree*, long, void*); //FINISHED

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

//Check to see if this is a straight left imbalance.
static bool int_avl_left_case_check(binary_search_tree_node* node){

	if(!node->left)
		return false;

	if(!node->left->left)
		return false;

	if(node->left->w == (node->w - 1) && node->left->left->w == (node->w - 2)){

		if(!node->right)
			return true;

		if(node->right->w < (node->w - 2))
			return true;

	}

	return false;

}

//Check to see if this is a straight right imbalance.
static bool int_avl_right_case_check(binary_search_tree_node* node){

	if(!node->right)
		return false;

	if(!node->right->right)
		return false;

	if(node->right->w == (node->w - 1) && node->right->right->w == (node->w - 2)){

		if(!node->left)
			return true;

		if(node->left->w < (node->w - 2))
			return true;

	}

	return false;

}

//Check to see if this is a left-right imbalance.
static bool int_avl_left_right_case_check(binary_search_tree_node* node){

	if(!node->left)
		return false;

	if(!node->left->right)
		return false;

	if(node->left->w == (node->w - 1) && node->left->right->w == (node->w - 2)){

		if(!node->right)
			return true;

		if(node->right->w < (node->w - 2))
			return true;

	}

	return false;
}

//Check to see if this is a right-left imbalance.
static bool int_avl_right_left_case_check(binary_search_tree_node* node){

	if(!node->right)
		return false;

	if(!node->right->left)
		return false;

	if(node->right->w == (node->w - 1) && node->right->left->w == (node->w - 2)){

		if(!node->left)
			return true;

		if(node->left->w < (node->w - 2))
			return true;

	}

	return false;
}

//Right rotation.
static void int_avl_right_rotate(binary_search_tree* tree, binary_search_tree_node* grandparent){

	binary_search_tree_node *top, *middle, *subtree_a;

	if(!tree || !grandparent)
		return;

	//This tree is imbalanced, get the pointers to our nodes...
	top = grandparent;
	middle = grandparent->left;
	subtree_a = middle->right;

	if(subtree_a)
		subtree_a->parent = top;

	//Reconfigure the nodes.
	middle->parent = top->parent;
	top->left = middle->right;
	middle->right = top;

	top->parent = middle;
	top->w -= 2;

	//Readjust the pointer to this tree.
	if(tree->root == top)
		tree->root = middle;

	else if(middle->parent->left == top)
		middle->parent->left = middle;

	else
		middle->parent->right = middle;

}

//Left rotation.
static void int_avl_left_rotate(binary_search_tree* tree, binary_search_tree_node* grandparent){

	binary_search_tree_node *top, *middle, *subtree_a;

	if(!tree || !grandparent)
		return;

	//This tree is imbalanced, get the pointers to our nodes...
	top = grandparent;
	middle = grandparent->right;
	subtree_a = middle->left;

	if(subtree_a)
		subtree_a->parent = top;

	//Reconfigure the nodes.
	middle->parent = top->parent;
	top->right = subtree_a;
	middle->left = top;

	top->parent = middle;
	top->w -= 2;

	//Readjust the pointer to this tree.
	if(tree->root == top)
		tree->root = middle;

	else if(middle->parent->left == top)
		middle->parent->left = middle;

	else
		middle->parent->right = middle;

}

//Right-left rotation.
static void int_avl_right_left_rotate(binary_search_tree* tree, binary_search_tree_node* grandparent){

	binary_search_tree_node *top, *middle, *bottom, *subtree_a, *subtree_b;

	if(!tree || !grandparent)
		return;

	top = grandparent;
	middle = grandparent->right;
	bottom = middle->left;
	subtree_a = bottom->left;
	subtree_b = bottom->right;

	if(subtree_a)
		subtree_a->parent = top;

	if(subtree_b)
		subtree_b->parent = middle;

	//Reconfigure the pointers.
	middle->left = subtree_b;
	top->right = subtree_a;
	bottom->right = middle;
	bottom->left = top;

	bottom->parent = top->parent;
	middle->parent = bottom;
	top->parent = bottom;

	//Adjust the weights.
	bottom->w++;
	middle->w--;
	top->w -= 2;

	//Readjust the pointer to this tree.
	if(tree->root == top)
		tree->root = bottom;

	else if(bottom->parent->left == top)
		bottom->parent->left = bottom;

	else
		bottom->parent->right = bottom;

}

//Left-right rotation.
static void int_avl_left_right_rotate(binary_search_tree* tree, binary_search_tree_node* grandparent){

	binary_search_tree_node *top, *middle, *bottom, *subtree_a, *subtree_b;

	if(!tree || !grandparent)
		return;

	top = grandparent;
	middle = grandparent->left;
	bottom = middle->right;
	subtree_a = bottom->left;
	subtree_b = bottom->right;

	if(subtree_a)
		subtree_a->parent = middle;

	if(subtree_b)
		subtree_b->parent = top;

	//Reconfigure the pointers.
	middle->right = subtree_a;
	top->left = subtree_b;
	bottom->left = middle;
	bottom->right = top;

	bottom->parent = top->parent;
	middle->parent = bottom;
	top->parent = bottom;

	//Adjust the weights.
	bottom->w++;
	middle->w--;
	top->w -= 2;

	//Readjust the pointer to this tree.
	if(tree->root == top)
		tree->root = bottom;

	else if(bottom->parent->left == top)
		bottom->parent->left = bottom;

	else
		bottom->parent->right = bottom;


}

static bool int_avl_perform_needed_rotations(binary_search_tree* tree, binary_search_tree_node* node){

	if(int_avl_left_right_case_check(node)){

		int_avl_left_right_rotate(tree, node);
		return true;

	}
	else if(int_avl_right_left_case_check(node)){

		int_avl_right_left_rotate(tree, node);
		return true;

	}
	else if(int_avl_left_case_check(node)){

		int_avl_right_rotate(tree, node);
		return true;

	}
	else if(int_avl_right_case_check(node)){

		int_avl_left_rotate(tree, node);
		return true;

	}

	return false;

}

binary_search_tree_node* _avl_tree_insert_e(binary_search_tree* tree, long key, void* data){

	binary_search_tree_node *node, *parent, *grandparent;
	long diff1, diff2, i = 1;

	node = _binary_search_tree_insert_e(tree, key, data);

	if(!node)
		return 0;

	while(node){

		if(node->w == i)
			break;

		node->w = i++;

		//We might have an imbalance...
		if(i > 2){

			if(int_avl_perform_needed_rotations(tree, node))
				break;

		}

		node = node->parent;

	}

	
}

bool _avl_tree_insert(binary_search_tree* tree, long key, void* data){

	if(_avl_tree_insert_e(tree, key, data))
		return true;

	return false;

}

void* _avl_tree_remove(binary_search_tree* tree, long key){

	binary_search_tree_node nd;

	if(_avl_tree_remove_e(tree, key, &nd))
		return nd.data;

	return 0;

}

bool _avl_tree_remove_e(binary_search_tree* tree, long key, binary_search_tree_node* ext){

	binary_search_tree_node *del, *greatest;

	if(!tree || !ext)
		return false;

	//First, find the node that we need to remove.
	del = _binary_search_tree_lookup_e(tree, key);

	if(!del)
		return false;

	//Copy the node.
	*ext = *del;

	//No children.
	if(!del->left && !del->right){

		if(del->parent){

			if(del->parent->left == del)
				del->parent->left = 0;
			else
				del->parent->right = 0;

			//Rebalance the tree (if needed).
			int_avl_perform_needed_rotations(tree, del->parent);

		}
		else
			tree->root = 0;

		destroy(tree->ctx, del);
		return true;

	}

	//Has a left child.
	else if(del->left){

		greatest = _binary_search_tree_greatest_s(del->left);

		if(greatest->parent->right == greatest)
			greatest->parent->right = greatest->left;
		else
			greatest->parent->left = greatest->left;

		//Copy the values from the greatest subnode to the "deleted" node.
		del->key = greatest->key;
		del->data = greatest->data;

		//Rebalance the tree (if needed).
		int_avl_perform_needed_rotations(tree, greatest->parent);

		destroy(tree->ctx, greatest);
		return true;

	}

	//Has right child only.
	else{

		del->right->parent = del->parent;

		if(del->parent){

			if(del->parent->right == del)
				del->parent->right = del->right;

			else
				del->parent->left = del->right;

			//Rebalance the tree (if needed).
			int_avl_perform_needed_rotations(tree, del->parent);

		}
		else
			tree->root = del->right;

		destroy(tree->ctx, del);
		return true;

	}

}

void* _avl_tree_lookup(binary_search_tree* tree, long key){

	return _binary_search_tree_lookup(tree, key);

}

binary_search_tree_node* _avl_tree_lookup_e(binary_search_tree* tree, long key){

	return _binary_search_tree_lookup_e(tree, key);

}

binary_search_tree_node* _avl_tree_greatest(binary_search_tree* tree){

	return _binary_search_tree_greatest(tree);

}

binary_search_tree_node* _avl_tree_greatest_s(binary_search_tree_node* node){

	return _binary_search_tree_greatest_s(node);

}