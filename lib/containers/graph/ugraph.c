
//Create a new undirected graph.
undirected_graph* _undirected_graph_new(standard_library_context*, size_t);

//Destroy an undirected graph.
void _undirected_graph_delete(undirected_graph*);

//Create a new node.
bool _undirected_graph_add_node(undirected_graph*, size_t, void*);

//Create an edge between two nodes.
bool _undirected_graph_add_edge(undirected_graph*, size_t, size_t);

//Depth first search for a node (graph, root identifier, target identifier).
undirected_graph_path _undirected_graph_dfs(undirected_graph*, size_t, size_t);

//Bredth first search for a node (graph, root identifier, target identifier).
undirected_graph_path _undirected_graph_bfs(undirected_graph*, size_t, size_t);

//Resize the node array.
static void int_undirected_graph_resize(undirected_graph* graph, size_t new_size){

	undirected_graph_node* new_nodes;
	size_t i;

	if(!graph)
		return;

	if(new_size < graph->used){

		_log_error(graph->ctx, "Graph resize must be larger than the number of nodes currently in use.", 70);
		return;

	}

	new_nodes = allocate(graph->ctx, new_size);

	for(i = 0; i < graph->used; i++)
		new_nodes[i] = graph->nodes[i];

	destroy(graph->ctx, graph->nodes);

	graph->nodes = new_nodes;
	graph->size = new_size;

	if(graph->path)
		destroy(graph->ctx, graph->path);

}

//Resize an edge array.
static void int_undirected_graph_resize_edges(undirected_graph* graph, undirected_graph_node* node){

	undirected_graph_node** new_edges;
	size_t new_size, i;

	if(!node)
		return;

	if(node->edge_arr_size)
		new_size = sizeof(size_t) * node->edge_arr_size * 2;
	else
		new_size = 2;

	new_edges = allocate(graph->ctx, new_size);

	for(i = 0; i < node->edge_arr_used; i++)
		new_edges[i] = node->edges[i];

	if(node->edges)
		destroy(graph->ctx, node->edges);

	node->edge_arr_size = new_size;
	node->edges = new_edges;

}


undirected_graph* _undirected_graph_new(standard_library_context* ctx, size_t start_size){

	undirected_graph* graph;

	if(!ctx)
		return 0;

	graph = allocate(ctx, sizeof(undirected_graph));

	graph->ctx = ctx;
	graph->nodes = allocate(ctx, sizeof(undirected_graph_node) * start_size);
	graph->size = start_size;

	return graph;

}

void _undirected_graph_delete(undirected_graph* graph){

	size_t i, j;

	if(!graph)
		return;

	if(graph->path)
		destroy(graph->ctx, graph->path);

	//Destroy edges.
	for(i = 0; i < graph->used; i++){

		if(graph->nodes[i].edges)
			destroy(graph->ctx, graph->nodes[i].edges);

	}

	destroy(graph->ctx, graph->nodes);
	destroy(graph->ctx, graph);

}

bool _undirected_graph_add_node(undirected_graph* graph, size_t key, void* data_ptr){

	size_t i;

	if(!graph)
		return false;
	
	for(i = 0; i < graph->used; i++){

		if(graph->nodes[i].key == key){

			_log_error(graph->ctx, "This graph already contains a node with the specified key.", 58);
			return false;

		}

	}

	if(graph->used == graph->size)
		int_undirected_graph_resize(graph, graph->size * 2);

	//Add the node.
	graph->nodes[graph->used].key = key;
	graph->nodes[graph->used].visited = false;
	graph->nodes[graph->used].level = 0;
	graph->nodes[graph->used++].data = data_ptr;

	return true;

}

bool _undirected_graph_add_edge(undirected_graph* graph, size_t a, size_t b){

	size_t i;
	undirected_graph_node* a_node = 0;
	undirected_graph_node* b_node = 0;

	if(!graph)
		return false;

	//Get the pointers for the desired nodes.
	for(i = 0; i < graph->used; i++){

		if(graph->nodes[i].key == a)
			a_node = graph->nodes + i;

		else if(graph->nodes[i].key == b)
			b_node = graph->nodes + i;

	}

	if(!a_node || !b_node){

		_log_error(graph->ctx, "One or both of the specified nodes does not exist.", 50);
		return false;

	}

	//Add the edge to the a node.

	//Expand the size of the edge array if needed.
	if(a_node->edge_arr_used == a_node->edge_arr_size)
		int_undirected_graph_resize_edges(graph, a_node);

	//Check to see if this edge already exists...
	for(i = 0; i < a_node->edge_arr_used; i++){

		if(a_node->edges[i] == b_node){

			_log_error(graph->ctx, "Redundant edge detected..", 21);
			return false;

		}

	}

	for(i = 0; i < b_node->edge_arr_used; i++){

		if(b_node->edges[i] == a_node){

			_log_error(graph->ctx, "Redundant edge detected..", 21);
			return false;

		}

	}

	a_node->edges[a_node->edge_arr_used++] = b_node;

	
}

undirected_graph_path _undirected_graph_bfs(undirected_graph* graph, size_t root, size_t target){

	undirected_graph_path path;

	
}