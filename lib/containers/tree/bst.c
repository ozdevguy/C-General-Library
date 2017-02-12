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

bst.c
========================================================================


*/

//Binary search tree deletion.
static void int_binary_search_tree_delete(binary_search_tree* tree, binary_search_tree_node* root){

	if(root){

		int_binary_search_tree_delete(tree, root->left);
		int_binary_search_tree_delete(tree, root->right);
		destroy(tree->ctx, root);

	}

}

//Create a new binary search tree.
binary_search_tree* _binary_search_tree_new(standard_library_context* ctx){

	binary_search_tree* tree;

	if(!ctx)
		return 0;

	tree = allocate(ctx, sizeof(binary_search_tree));
	tree->ctx = ctx;

	return tree;

}

void _binary_search_tree_delete(binary_search_tree* tree){

	if(tree)
		int_binary_search_tree_delete(tree, tree->root);

	destroy(tree->ctx, tree);

}

binary_search_tree_node* _binary_search_tree_insert_e(binary_search_tree* tree, long key, void* data){

	binary_search_tree_node** current;
	binary_search_tree_node* parent = 0;

	if(!tree)
		return 0;

	current = &tree->root;
	tree->total++;

	while(*current){

		parent = *current;

		if(key == (*current)->key)
			return 0;

		else if(key >= (*current)->key)
			current = &((*current)->right);

		else
			current = &((*current)->left);

	}

	*current = allocate(tree->ctx, sizeof(binary_search_tree_node));
	(*current)->data = data;
	(*current)->key = key;
	(*current)->parent = parent;

	return *current;

}

bool _binary_search_tree_insert(binary_search_tree* tree, long key, void* data){

	if(_binary_search_tree_insert_e(tree, key, data))
		return true;

	return false;

}


binary_search_tree_node* _binary_search_tree_greatest_s(binary_search_tree_node* root){


	if(!root)
		return 0;

	while(root->right)
		root = root->right;

	return root;

}

binary_search_tree_node* _binary_search_tree_greatest(binary_search_tree* tree){

	if(!tree)
		return 0;

	if(!tree->root)
		return 0;

	return _binary_search_tree_greatest_s(tree->root);

}

binary_search_tree_node* _binary_search_tree_lookup_e(binary_search_tree* tree, long key){

	binary_search_tree_node* node;

	if(!tree)
		return 0;

	node = tree->root;

	while(node){

		if(node->key == key)
			return node;

		else if(key < node->key)
			node = node->left;
		
		else
			node = node->right;
		

	}

	return 0;

}

void* _binary_search_tree_lookup(binary_search_tree* tree, long key){

	binary_search_tree_node* node;

	if((node = _binary_search_tree_lookup_e(tree, key)))
		return node->data;

	return 0;

}

void* _binary_search_tree_remove(binary_search_tree* tree, long key){

	binary_search_tree_node node;

	if(_binary_search_tree_remove_e(tree, key, &node))
		return node.data;

	return 0;

}

bool _binary_search_tree_remove_e(binary_search_tree* tree, long key, binary_search_tree_node* ext){

	binary_search_tree_node *del, *greatest;

	if(!tree || !ext)
		return false;

	//First, find the node that we want to remove.
	del = _binary_search_tree_lookup_e(tree, key);

	if(!del)
		return false;

	//Copy the node.
	*ext = *del;

	//No children...
	if(!del->left && !del->right){

		if(del->parent){

			if(del->parent->left == del)
				del->parent->left = 0;
			else
				del->parent->right = 0;

		}
		else
			tree->root = 0;

		destroy(tree->ctx, del);
		return true;

	}

	//Has left child.
	else if(del->left){

		greatest = _binary_search_tree_greatest_s(del->left);

		if(greatest->parent->right == greatest)
			greatest->parent->right = greatest->left;

		else
			greatest->parent->left = greatest->left;

		//Copy the values from the greatest subnode to the "deleted" node.
		del->key = greatest->key;
		del->data = greatest->data;

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

		}
		else
			tree->root = del->right;

		destroy(tree->ctx, del);
		return true;

	}

	return false;

}