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

bst_structs.c
========================================================================


*/

typedef struct binary_search_tree binary_search_tree;
typedef struct binary_search_tree_node binary_search_tree_node;

struct binary_search_tree{

	//Standard library context.
	standard_library_context* ctx;

	//Total number of nodes in this tree.
	size_t total;

	//Root node.
	binary_search_tree_node* root;

};

struct binary_search_tree_node{

	//Key of this node.
	long key;

	//Data pointer.
	void* data;

	//Weighting.
	size_t w;

	//Parent node.
	binary_search_tree_node* parent;

	//Left child.
	binary_search_tree_node* left;

	//Right child.
	binary_search_tree_node* right;

};