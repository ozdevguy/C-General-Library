//Create a new binary search tree.
binary_search_tree* _binary_search_tree_new(standard_library_context*);

//Delete a binary search tree.
void _binary_search_tree_delete(binary_search_tree*);

//Insert an item into the binary search tree.
void _binary_search_tree_add(binary_search_tree*, long, void*);

//Insert an item into the binary search tree, then return the newly created node.
binary_search_tree_node* _binary_search_tree_add_e(binary_search_tree*, long, void*);

//Remove a node from the binary search tree.
void* _binary_search_tree_remove(binary_search_tree*, long);

//Remove a node from the binary search tree, and get a copy of the removed node.
bool _binary_search_tree_remove_e(binary_search_tree*, long, binary_search_tree_node*);

//Get an item from the binary search tree.
void* _binary_search_tree_lookup(binary_search_tree*, long);