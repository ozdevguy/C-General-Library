/* BASIC GRAPH FOUNDATION */

//Create a new graph.
graph* _graph_new(standard_library_context*, size_t); //FINISHED

//Delete a graph.
bool _graph_delete(graph*); //FINISHED

//Add a node to the graph.
graph_node* _graph_add_node(graph*, size_t, void*); //FINISHED

//Create an edge (one direction).
bool _graph_add_edge(graph*, size_t, size_t, graph_edge**); //FINISHED

//Create an edge (bi-directional).
bool _graph_add_double_edge(graph*, size_t, size_t, graph_edge**, graph_edge**); //FINISHED

//Remove a node.
bool _graph_delete_node(graph*, size_t); //FINISHED

//Remove an edge.
bool _graph_delete_edge(graph*, size_t, size_t); //FINISHED

//Bredth first search for a node.
graph_path _graph_bfs(graph*, size_t, size_t);

//Depth first search for a node.
graph_path _graph_dfs(graph*, size_t, size_t);

//Clear the graph of levels/parents.
void _graph_clear_paths(graph*);

//Destroy a path object.
void _graph_delete_path(graph_path);

//Increase the size of the node array.
static void int_graph_resize(graph* gr, size_t new_size){

	graph_node* new_nodes;
	size_t i, ns;

	if(!gr)
		return;

	if(new_size <= gr->size)
		return;

	ns = sizeof(graph_node) * new_size;
	new_nodes = allocate(gr->ctx, ns);

	for(i = 0; i < gr->used; i++)
		new_nodes[i] = gr->nodes[i];

	destroy(gr->ctx, gr->nodes);

	gr->nodes = new_nodes;
	gr->size = new_size;

}

//Delete a node's edges.
static void int_graph_node_delete_edges(graph* gr, graph_node* node){

	graph_edge *current, *tmp;

	if(!gr || !node)
		return;

	current = node->edges;

	while(current){

		tmp = current;
		current = tmp->next;
		destroy(gr->ctx, tmp);

	}
}

static bool int_graph_node_remove_edge(graph* gr, graph_node* node, size_t key){

	graph_edge *next, *tmp;
	bool success = false;

	if(!gr || !node)
		return false;

	next = node->edges;

	while(next){

		if(next->to->key == key){

			success = true;

			tmp = next->next;

			if(tmp)
				*next = *tmp;

			destroy(gr->ctx, tmp);

		}
		
		next = next->next;

	}

	return success;

}

//Create a path.
static graph_path int_graph_build_path(graph* gr, graph_node* node){

	graph_path path;
	graph_node* next;
	size_t hops = 0, data_size = 0, i;

	path.hops = 0;
	path.exists = false;

	if(!gr || !node)
		return path;

	path.exists = true;
	
	next = node;

	while(next){

		hops++;
		next = next->parent;

	}

	//Setup the path.
	data_size = hops * sizeof(size_t);

	path.hops = hops;
	path.list = allocate(gr->ctx, data_size);
	path.ctx = gr->ctx;

	next = node;

	for(i = hops - 1; i >= 0; i--){

		path.list[i] = next;

		if(!next->parent)
			break;

		next = next->parent;

	}

	return path;
}

graph* _graph_new(standard_library_context* ctx, size_t start_size){

	graph* gr;

	if(!ctx)
		return 0;

	gr = allocate(ctx, sizeof(graph));
	gr->nodes = allocate(ctx, sizeof(graph_node) * start_size);
	gr->ctx = ctx;
	gr->size = start_size;

	return gr;

}

bool _graph_delete(graph* gr){

	size_t i, j;
	graph_edge *c, *ce;

	if(!gr)
		return false;

	//Loop through each node.
	for(i = 0; i < gr->size; i++)
		int_graph_node_delete_edges(gr, gr->nodes + i);

	destroy(gr->ctx, gr->nodes);
	destroy(gr->ctx, gr);

	return true;
}

void _graph_delete_path(graph_path path){

	destroy(path.ctx, path.list);
}

graph_node* _graph_add_node(graph* gr, size_t key, void* ptr){

	size_t i;
	graph_node *c_node;

	if(!gr)
		return 0;

	if(gr->size == gr->used)
		int_graph_resize(gr, gr->size * 2);

	c_node = gr->nodes + gr->used++;

	c_node->key = key;
	c_node->data = ptr;

	return c_node;

}

bool _graph_add_edge(graph* gr, size_t from, size_t to, graph_edge** to_edge){

	size_t i;
	graph_node *n1 = 0, *n2 = 0;
	graph_edge** e;

	if(!gr)
		return false;

	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == from)
			n1 = gr->nodes + i;

		else if(gr->nodes[i].key == to)
			n2 = gr->nodes + i;

		if(n1 && n2)
			break;

	}

	if(!n1 || !n2){

		_log_error(gr->ctx, "One of the nodes does not exist.", 32);
		return false;

	}

	//Add the edge...
	e = &n1->edges;

	while(*e)		
		e = &((*e)->next);
	

	*e = allocate(gr->ctx, sizeof(graph_edge));
	(*e)->to = n2;
	*to_edge = *e;

	return true;

}

bool _graph_add_double_edge(graph* gr, size_t from, size_t to, graph_edge** edge_to, graph_edge** edge_back){

	size_t i;
	graph_node *n1 = 0, *n2 = 0;
	graph_edge** e;

	if(!gr)
		return false;

	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == from)
			n1 = gr->nodes + i;

		else if(gr->nodes[i].key == to)
			n2 = gr->nodes + i;

		if(n1 && n2)
			break;

	}

	if(!n1 || !n2){

		_log_error(gr->ctx, "One of the nodes does not exist.", 32);
		return false;

	}

	//Add the "to" edge...
	e = &n1->edges;

	while(*e)
		e = &((*e)->next);
	
	*e = allocate(gr->ctx, sizeof(graph_edge));
	(*e)->to = n2;
	*edge_to = *e;

	//Add the "from" edge...
	e = &n2->edges;

	while(*e)
		e = &((*e)->next);
	
	*e = allocate(gr->ctx, sizeof(graph_edge));
	(*e)->to = n1;
	*edge_back = *e;

	return true;

}

bool _graph_delete_node(graph* gr, size_t key){

	size_t i, j;
	graph_edge **c, *next, *tmp;
	graph_node* node;
	bool node_found = false;

	if(!gr)
		return false;

	for(i = 0; i < gr->used; i++){

		//Remove the designated node.
		if(gr->nodes[i].key == key){

			node_found = true;

			int_graph_node_delete_edges(gr, gr->nodes + i);

			for(j = (i + 1); j < gr->used; j++)
				gr->nodes[j - 1] = gr->nodes[j];

			node = gr->nodes + gr->used-- - 1;

			node->key = 0;
			node->edges = 0;
			node->parent = 0;
			node->level = 0;
			node->data = 0;
		
		}
		else
			int_graph_node_remove_edge(gr, gr->nodes + i, key);

		
	}

	return node_found;

}

bool _graph_delete_edge(graph* gr, size_t from, size_t to){

	size_t i;
	graph_node* n;

	if(!gr)
		return false;

	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == from){

			return int_graph_node_remove_edge(gr, gr->nodes + i, to);

		}
	}

	return false;

}

void _graph_clear_paths(graph* gr){

	size_t i;

	if(!gr)
		return;

	for(i = 0; i < gr->used; i++){

		gr->nodes[i].parent = 0;
		gr->nodes[i].level = 0;

	}
}

graph_path _graph_bfs(graph* gr, size_t start, size_t end){

	size_t i;
	queue* bfs_queue;
	graph_node *root = 0, *current = 0, *discovery = 0;
	graph_edge* c_edge;
	graph_path path;

	path.hops = 0;
	path.exists = false;

	if(!gr)
		return path;

	//Find the root.
	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == start)
			root = gr->nodes + i;

	}

	if(!root)
		return path;

	//Set the root to level 1.
	root->level = 1;

	//Create the queue.
	bfs_queue = _queue_new(gr->ctx, 10);

	//Enqueue the root.
	_queue_enqueue(bfs_queue, root, 0, 0);

	while(bfs_queue->used){

		current = (graph_node*)_queue_dequeue(bfs_queue).data;

		c_edge = current->edges;

		while(c_edge){

			//Get the node at the end of this edge.
			discovery = c_edge->to;

			//Newly discovered node!
			if(!discovery->level){

				discovery->level = current->level + 1;
				discovery->parent = current;

				if(discovery->key == end){

					_queue_delete(bfs_queue);
					return int_graph_build_path(gr, discovery);

				}

				_queue_enqueue(bfs_queue, discovery, 0, 0);

			}

			c_edge = c_edge->next;
		}

	}

	_queue_delete(bfs_queue);
	return path;

}

graph_path _graph_dfs(graph* gr, size_t start, size_t end){

	size_t i;
	stack* dfs_stack;
	graph_node *root = 0, *current = 0, *discovery = 0;
	graph_edge* c_edge;
	graph_path path;

	path.hops = 0;
	path.exists = false;

	if(!gr)
		return path;

	//Find the root.
	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == start)
			root = gr->nodes + i;

	}

	if(!root)
		return path;

	//Set the root to level 1.
	root->level = 1;

	//Set up the stack.
	dfs_stack = _stack_new(gr->ctx, 10);
	_stack_push(dfs_stack, root, 0, 0);

	while(dfs_stack->top){

		current = (graph_node*)_stack_peek(dfs_stack).data;

		c_edge = current->edges;

		while(c_edge){

			discovery = c_edge->to;

			//New discovery!
			if(!discovery->level){

				discovery->level = current->level + 1;
				discovery->parent = current;

				if(discovery->key == end){

					_stack_delete(dfs_stack);
					return int_graph_build_path(gr, discovery);

				}

				_stack_push(dfs_stack, discovery, 0, 0);
				break;

			}

			c_edge = c_edge->next;

		}

		if(!c_edge)
			_stack_pop(dfs_stack);


	}

	_stack_delete(dfs_stack);
	return path;

}

