typedef struct graph graph;
typedef struct graph_edge graph_edge;
typedef struct graph_node graph_node;
typedef struct graph_path graph_path;
typedef struct graph_walk_config graph_walk_config;

struct graph{

	//Standard library context.
	standard_library_context* ctx;

	//Array of graph nodes.
	graph_node* nodes;

	//Total size (number of available nodes).
	size_t size;

	//Number of used nodes.
	size_t used;

	//Current path (for searches).
	graph_path* path;

	//Graph type.
	uint8_t type;

	//Graph iterator.
	size_t iterator;

	//Graph walk config.
	graph_walk_config* walk;

};

struct graph_node{

	//Node key.
	long key;

	//Array of all edges going out of this node.
	graph_edge* edges;

	//Total number of edges.
	size_t edge_total;

	//Parent node.
	graph_node* parent;

	//The level of this node.
	size_t level;

	//Data contained at this node.
	void* data;                                  
	
};

struct graph_edge{

	//The node connected to this edge.
	graph_node* to;

	//Switch/funcionality mask for this edge.
	size_t mask;

	//Data attached to this edge.
	void* data;

	//The weight of this edge.
	long weight;

	//The next edge linked to this node.
	graph_edge* next;

};

struct graph_walk_config{

	//Graph walk queue.
	queue* bfs_queue;

	//Graph walk stack.
	stack* dfs_stack;

};

struct graph_path{

	//Context.
	standard_library_context* ctx;

	//Number of steps.
	size_t hops;

	//List of nodes.
	graph_node** list;

};

