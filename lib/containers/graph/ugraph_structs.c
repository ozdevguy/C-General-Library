typedef struct undirected_graph undirected_graph;
typedef struct undirected_graph_node undirected_graph_node;
typedef struct undirected_graph_path undirected_graph_path;

struct undirected_graph{

	//Standard library context.
	standard_library_context* ctx;

	//Array of graph nodes.
	undirected_graph_node* nodes;

	//Total size (number of available nodes).
	size_t size;

	//Number of used nodes.
	size_t used;

	//Current path (for searches).
	undirected_graph_path* path;

};

struct undirected_graph_node{

	//Node key.
	size_t key;

	//Edges (array of pointers to attached nodes).
	undirected_graph_node** edges;

	//Size of edge array.
	size_t edge_arr_size;

	//Total used space within the edge array.
	size_t edge_arr_used;

	//Has this node been visited?
	bool visited;

	//The level of this node.
	size_t level;

	//Data contained at this node.
	void* data;

	
};

struct undirected_graph_path{

	//Number of steps.
	size_t hops;

	//List of nodes.
	undirected_graph_node** list;

};

