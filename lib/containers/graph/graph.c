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

graph.c
========================================================================


*/

//Create a new graph.
graph* _graph_new(standard_library_context*, size_t); //FINISHED

//Delete a graph.
bool _graph_delete(graph*); //FINISHED

//Add a node to the graph.
graph_node* _graph_add_node(graph*, long, void*); //FINISHED

//Create an edge (one direction).
bool _graph_add_edge(graph*, long, long, graph_edge**); //FINISHED

//Get a node.
graph_node* _graph_get_node(graph*, long); //FINISHED

//Get an edge.
graph_edge* _graph_get_edge(graph*, long, long); //FINISHED

//Create an edge (bi-directional).
bool _graph_add_double_edge(graph*, long, long, graph_edge**, graph_edge**); //FINISHED

//Remove a node.
bool _graph_delete_node(graph*, long); //FINISHED

//Remove an edge.
bool _graph_delete_edge(graph*, long, long); //FINISHED

//Bredth first search for a node.
bool _graph_bfs(graph*, long, long, graph_path*);

//Depth first search for a node.
bool _graph_dfs(graph*, long, long, graph_path*);

//Clear the graph of levels/parents.
void _graph_clear_paths(graph*);

//Destroy a path object.
void _graph_delete_path(graph_path);

//Reset the graph node iterator.
void _graph_reset_iterator(graph*);

//Check to see if the graph has another node.
bool _graph_has_next(graph*);

//Get the next node in the graph.
graph_node* _graph_get_next(graph*);

/* WALK THE GRAPH */

//Initialize a graph walk.
bool _graph_walk_init(graph*, long root);

//Reset the bfs queue.
void _graph_walk_bfs_queue_reset(graph*);

//Reset the dfs stack.
void _graph_walk_dfs_stack_reset(graph*);

//Breadth first graph walk.
graph_node* _graph_walk_bfs_next(graph*);

//Depth first graph walk.
graph_node* _graph_walk_dfs_next(graph*);

//End a graph walk.
void _graph_walk_end(graph*);


/* HELPER MAP */
void _graph_enable_node_helper_map(graph*, bool);

void _graph_enable_edge_helper_map(graph*, bool);


//Increase the size of the node array.
static void int_graph_resize(graph* gr, size_t new_size){

	graph_node* new_nodes;
	size_t i, ns, hs;

	if(!gr)
		return;

	if(new_size <= gr->size)
		return;

	hs = new_size / 4;
	ns = sizeof(graph_node) * new_size;
	new_nodes = allocate(gr->ctx, ns);

	for(i = 0; i < gr->used; i++)
		new_nodes[i] = gr->nodes[i];

	destroy(gr->ctx, gr->nodes);

	gr->nodes = new_nodes;
	gr->size = new_size;

	if(gr->helper_map){

		if(hs > gr->helper_map->size)
			_map_resize(gr->helper_map, hs);

	}

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

static bool int_graph_node_remove_edge(graph* gr, graph_node* node, long key){

	graph_edge *next, *prev = 0, *tmp;
	bool success = false;

	if(!gr || !node)
		return false;

	next = node->edges;

	while(next){

		if(next->to->key == key){

			success = true;

			tmp = next->next;

			if(tmp){

				*next = *tmp;
				destroy(gr->ctx, tmp);

			}
			else{

				node->last_edge = prev;
				prev->next = 0;
				destroy(gr->ctx, next);

			}

		}

		prev = next;
		next = next->next;

	}

	return success;

}

//Create a path.
static void int_graph_build_path(graph* gr, graph_node* node, graph_path* path){

	graph_node* next;
	long hops = 0, data_size = 0, i;

	if(!gr || !node || !path)
		return;

	next = node;

	while(next){

		hops++;
		next = next->parent;

	}

	//Setup the path.
	data_size = (hops + 1) * sizeof(size_t);

	path->hops = hops;
	path->list = allocate(gr->ctx, data_size);
	path->ctx = gr->ctx;

	next = node;

	for(i = hops - 1; i >= 0; i--){

		path->list[i] = next;

		if(!next->parent)
			break;

		next = next->parent;

	}

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

	//Check to see if a graph walk object still exists.
	if(gr->walk){

		_queue_delete(gr->walk->bfs_queue);
		_stack_delete(gr->walk->dfs_stack);
		destroy(gr->ctx, gr->walk);

	}

	destroy(gr->ctx, gr->nodes);
	destroy(gr->ctx, gr);

	return true;
}

void _graph_delete_path(graph_path path){

	if(path.list)
		destroy(path.ctx, path.list);
	
}

graph_node* _graph_get_node(graph* gr, long key){

	size_t i;

	if(!gr)
		return 0;

	if(gr->helper_map)
		return _map_lookup(gr->helper_map, key);

	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == key)
			return gr->nodes + i;
	
	}

	return 0;

}

graph_edge* _graph_get_edge(graph* gr, long from, long to){

	size_t i;
	graph_node *from_node = 0, *to_node = 0;
	graph_edge* e;

	if(!gr)
		return 0;

	if(gr->helper_map){

		from_node = _map_lookup(gr->helper_map, from);
		to_node = _map_lookup(gr->helper_map, to);

	}

	//Get the from and to nodes.
	for(i = 0; i < gr->used && !gr->helper_map; i++){

		if(gr->nodes[i].key == from)
			from_node = gr->nodes + i;

		else if(gr->nodes[i].key == to)
			to_node = gr->nodes + i;

		if(to_node && from_node)
			break;

	}



	if(!to_node || !from_node)
		return 0;

	e = from_node->edges;

	while(e){

		if(e->to == to_node)
			return e;

		e = e->next;
	}

	return 0;
}

graph_node* _graph_add_node(graph* gr, long key, void* ptr){

	size_t i;
	graph_node *c_node;

	if(!gr)
		return 0;

	if(gr->size == gr->used)
		int_graph_resize(gr, gr->size * 2);

	c_node = gr->nodes + gr->used++;

	c_node->key = key;
	c_node->data = ptr;

	if(gr->helper_map)
		_map_insert(gr->helper_map, key, c_node);

	return c_node;

}

bool _graph_add_edge(graph* gr, long from, long to, graph_edge** to_edge){

	size_t i;
	graph_node *n1 = 0, *n2 = 0;
	graph_edge** e;

	if(!gr)
		return false;

	if(gr->helper_map){

		n1 = _map_lookup(gr->helper_map, from);
		n2 = _map_lookup(gr->helper_map, to);

	}

	for(i = 0; i < gr->used && !gr->helper_map; i++){

		if(gr->nodes[i].key == from)
			n1 = gr->nodes + i;

		if(gr->nodes[i].key == to)
			n2 = gr->nodes + i;

		if(n1 && n2)
			break;

	}

	if(!n1 || !n2){

		_log_error(gr->ctx, "One of the nodes does not exist.", 32);
		return false;

	}

	//Add the edge...
	e = &n1->last_edge;

	if(!(*e))
		e = &n1->edges;
	
	else
		e = &((*e)->next);
	

	*e = allocate(gr->ctx, sizeof(graph_edge));
	(*e)->to = n2;
	*to_edge = *e;
	n1->last_edge = *e;

	return true;

}

bool _graph_add_double_edge(graph* gr, long from, long to, graph_edge** edge_to, graph_edge** edge_back){

	size_t i;
	graph_node *n1 = 0, *n2 = 0;
	graph_edge** e;

	if(!gr)
		return false;

	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == from)
			n1 = gr->nodes + i;

		if(gr->nodes[i].key == to)
			n2 = gr->nodes + i;

		if(n1 && n2)
			break;

	}

	if(!n1 || !n2){

		_log_error(gr->ctx, "One of the nodes does not exist.", 32);
		return false;

	}

	//Add the "to" edge...
	e = &n1->last_edge;

	if(!(*e))
		e = &n1->edges;
	else
		e = &((*e)->next);
	
	*e = allocate(gr->ctx, sizeof(graph_edge));
	(*e)->to = n2;
	*edge_to = *e;
	n1->last_edge = *e;

	//Add the "from" edge...
	e = &n2->last_edge;

	if(!(*e))
		e = &n2->edges;
	else
		e = &((*e)->next);
	
	*e = allocate(gr->ctx, sizeof(graph_edge));
	(*e)->to = n1;
	*edge_back = *e;
	n2->last_edge = *e;

	return true;

}

bool _graph_delete_node(graph* gr, long key){

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

bool _graph_delete_edge(graph* gr, long from, long to){

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

bool _graph_bfs(graph* gr, long start, long end, graph_path* path){

	size_t i;
	queue* bfs_queue;
	graph_node *root = 0, *current = 0, *discovery = 0;
	graph_edge* c_edge;

	if(!gr || !path)
		return false;

	//Find the root.
	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == start)
			root = gr->nodes + i;

	}

	if(!root)
		return false;

	//Set the root to level 1.
	root->level = 1;

	//Create the queue.
	bfs_queue = _queue_new(gr->ctx, 10);

	//Enqueue the root.
	_queue_enqueue(bfs_queue, root);

	while(bfs_queue->used){

		current = (graph_node*)_queue_dequeue(bfs_queue);
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
					int_graph_build_path(gr, discovery, path);
					return true;

				}

				_queue_enqueue(bfs_queue, discovery);

			}

			c_edge = c_edge->next;
		}

	}

	_queue_delete(bfs_queue);
	return false;

}

bool _graph_dfs(graph* gr, long start, long end, graph_path* path){

	size_t i;
	stack* dfs_stack;
	graph_node *root = 0, *current = 0, *discovery = 0;
	graph_edge* c_edge;

	if(!gr | !path)
		return false;

	//Find the root.
	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == start)
			root = gr->nodes + i;

	}

	if(!root)
		return false;

	//Set the root to level 1.
	root->level = 1;

	//Set up the stack.
	dfs_stack = _stack_new(gr->ctx, 10);
	_stack_push(dfs_stack, root);

	while(dfs_stack->top){

		current = (graph_node*)_stack_peek(dfs_stack);
		c_edge = current->edges;

		while(c_edge){

			discovery = c_edge->to;

			//New discovery!
			if(!discovery->level){

				discovery->level = current->level + 1;
				discovery->parent = current;

				if(discovery->key == end){

					_stack_delete(dfs_stack);
					int_graph_build_path(gr, discovery, path);
					return true;

				}

				_stack_push(dfs_stack, discovery);
				break;

			}

			c_edge = c_edge->next;

		}

		if(!c_edge)
			_stack_pop(dfs_stack);


	}

	_stack_delete(dfs_stack);
	return true;

}

void _graph_reset_iterator(graph* gr){

	if(!gr)
		return;

	gr->iterator = 0;

}

bool _graph_has_next(graph* gr){

	if(!gr)
		return false;

	if(gr->iterator < gr->used)
		return true;

	return false;

}

graph_node* _graph_get_next(graph* gr){

	if(!gr)
		return 0;

	if(gr->iterator >= gr->used)
		return 0;

	return gr->nodes + gr->iterator++;

}

bool _graph_walk_init(graph* gr, long root){

	graph_walk_config* config;
	size_t i;

	if(!gr)
		return false;

	_graph_clear_paths(gr);

	if(gr->walk){

		_queue_reset(gr->walk->bfs_queue);
		_stack_reset(gr->walk->dfs_stack);
		return false;

	}

	for(i = 0; i < gr->used; i++){

		if(gr->nodes[i].key == root){

			gr->nodes[i].level = 1;
			config = allocate(gr->ctx, sizeof(graph_walk_config));
			config->bfs_queue = _queue_new(gr->ctx, 10);
			config->dfs_stack = _stack_new(gr->ctx, 10);
			_queue_enqueue(config->bfs_queue, gr->nodes + i);
			_stack_push(config->dfs_stack, gr->nodes + i);
			gr->walk = config;

			return true;

		}
	}

	return false;

}

void _graph_walk_bfs_queue_reset(graph* gr){

	if(!gr)
		return;

	if(!gr->walk)
		return;

	_queue_reset(gr->walk->bfs_queue);

}

void _graph_walk_dfs_stack_reset(graph* gr){

	if(!gr)
		return;

	if(!gr->walk)
		return;

	gr->walk->dfs_root_ret = false;
	_stack_reset(gr->walk->dfs_stack);
	
}

graph_node* _graph_walk_dfs_next(graph* gr){

	stack* dfs_stack;
	graph_node *c_node, *discovered;
	graph_edge* c_edge;

	if(!gr)
		return 0;

	if(!gr->walk)
		return 0;

	dfs_stack = gr->walk->dfs_stack;

	if(!gr->walk->dfs_root_ret){

		gr->walk->dfs_root_ret = true;
		return (graph_node*)_stack_peek(dfs_stack);

	}

	while(dfs_stack->top){

		c_node = (graph_node*)_stack_peek(dfs_stack);
		c_edge = c_node->edges;

		while(c_edge){

			discovered = c_edge->to;

			//Discovered a new node!
			if(!discovered->level){

				discovered->level = c_node->level + 1;
				discovered->parent = c_node;
				_stack_push(dfs_stack, discovered);

				return discovered;

			}

			c_edge = c_edge->next;

		}

		_stack_pop(dfs_stack);

	}

	return 0;

}

graph_node* _graph_walk_bfs_next(graph* gr){

	queue* bfs_queue;
	graph_node *c_node, *discovered;
	graph_edge* c_edge;

	if(!gr)
		return 0;

	if(!gr->walk)
		return 0;

	bfs_queue = gr->walk->bfs_queue;

	while(bfs_queue->used){

		c_node = (graph_node*)_queue_dequeue(bfs_queue);
		c_edge = c_node->edges;

		while(c_edge){

			discovered = c_edge->to;

			if(!discovered->level){

				discovered->level = c_node->level + 1;
				discovered->parent = c_node;
				_queue_enqueue(bfs_queue, discovered);

			}

			c_edge = c_edge->next;

		}

		return c_node;

	}

	return 0;
}

void _graph_walk_end(graph* gr){

	if(!gr)
		return;

	if(!gr->walk)
		return;

	_queue_delete(gr->walk->bfs_queue);
	_stack_delete(gr->walk->dfs_stack);
	destroy(gr->ctx, gr->walk);

}

void _graph_enable_node_helper_map(graph* gr, bool enable){

	size_t i;

	if(!gr)
		return;

	if(enable && !gr->helper_map){

		gr->helper_map = _map_new(gr->ctx, gr->size);

		if(!gr->used)
			return;

		for(i = 0; i < gr->used; i++)
			_map_insert(gr->helper_map, gr->nodes[i].key, gr->nodes + i);

	}
	else if(!enable && gr->helper_map)
		_map_delete(gr->helper_map);

	return;
	
}

