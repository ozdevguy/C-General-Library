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

	//Value of this node.
	long value;

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