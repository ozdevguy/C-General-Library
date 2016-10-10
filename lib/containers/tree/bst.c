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

//Create a new binary search tree.
binary_search_tree* _binary_search_tree_new(standard_library_context*); //FINISHED

//Delete a binary search tree.
void _binary_search_tree_delete(binary_search_tree*); //FINISHED

//Insert an item into the binary search tree.
void _binary_search_tree_insert(binary_search_tree*, long, void*); //FINISHED

//Insert an item into the binary search tree, then return the newly created node.
binary_search_tree_node* _binary_search_tree_insert_e(binary_search_tree*, long, void*); //FINISHED

//Remove a node from the binary search tree.
void* _binary_search_tree_remove(binary_search_tree*, long);

//Remove a node from the binary search tree, and get a copy of the removed node.
bool _binary_search_tree_remove_e(binary_search_tree*, long, binary_search_tree_node*);

//Get an item from the binary search tree.
void* _binary_search_tree_lookup(binary_search_tree*, long);

//Get the greatest element in the tree.
binary_search_tree_node* _binary_search_tree_greatest(binary_search_tree*);

//Get the greatest sub-node of a particular root.
binary_search_tree_node* _binary_search_tree_greatest_s(binary_search_tree_node*);

//Get a node from the binary search tree.
binary_search_tree_node* _binary_search_tree_lookup_e(binary_search_tree*, long);


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
		return;

	current = &tree->root;
	tree->total++;

	while(*current){

		parent = *current;

		if(key >= (*current)->key)
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

void _binary_search_tree_insert(binary_search_tree* tree, long key, void* data){

	_binary_search_tree_insert_e(tree, key, data);

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

		else if(key < node->key){

			printf("Left at: %ld\n", node->key);
			node = node->left;
		}

		else{

			printf("Right at: %ld\n", node->key);
			node = node->right;

		}

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

	binary_search_tree_node *node, *replacement;
	void* data;

	if(!tree)
		return 0;

	node = tree->root;

	while(node){

		if(node->key == key)
			break;

		else if(key > node->key)
			node = node->right;

		else
			node = node->left;

	}

	if(!node)
		return 0;

	data = node->data;
	tree->total--;

	if(node->left && node->right){

		replacement = _binary_search_tree_greatest_s(node->left);

		//Copy the greatest subnode to the "removed" node.
		node->key = replacement->key;
		node->data = replacement->data;
		node->w = replacement->w;

		//Remove the former container of the replacement.
		replacement->parent->right = replacement->left;

		destroy(tree->ctx, replacement);

	}

	else{

		if(node->left)
			replacement = node->left;

		else if(node->right)
			replacement = node->right;

		else if(node->parent){

			if(node->parent->left == node)
				node->parent->left = 0;
			else
				node->parent->right = 0;

			destroy(tree->ctx, node);

			return data;

		}
		else{

			destroy(tree->ctx, node);
			tree->root = 0;

			return data;

		}	

		node->key = replacement->key;
		node->data = replacement->data;
		node->w = replacement->w;
		node->left = replacement->left;
		node->right = replacement->right;

		destroy(tree->ctx, replacement);

	}

	return data;

}

bool _binary_search_tree_remove_e(binary_search_tree* tree, long key, binary_search_tree_node* ext){

	binary_search_tree_node *node, *replacement;
	void* data;

	if(!tree || !ext)
		return false;

	node = tree->root;

	while(node){

		if(node->key == key)
			break;

		else if(key > node->key)
			node = node->right;

		else
			node = node->left;

	}

	if(!node)
		return false;

	*ext = *node;
	tree->total--;

	if(node->left && node->right){

		replacement = _binary_search_tree_greatest_s(node->right);

		//Copy the greatest subnode to the "removed" node.
		node->key = replacement->key;
		node->data = replacement->data;
		node->w = replacement->w;

		//Remove the former container of the replacement.
		replacement->parent->right = replacement->left;

		destroy(tree->ctx, replacement);

	}

	else{

		if(node->left)
			replacement = node->left;

		else if(node->right)
			replacement = node->right;

		else if(node->parent){

			if(node->parent->left == node)
				node->parent->left = 0;
			else
				node->parent->right = 0;

			destroy(tree->ctx, node);

			return true;

		}
		else{

			destroy(tree->ctx, node);
			tree->root = 0;

			return true;

		}	

		node->key = replacement->key;
		node->data = replacement->data;
		node->w = replacement->w;
		node->left = replacement->left;
		node->right = replacement->right;

		destroy(tree->ctx, replacement);

	}

	return true;
}