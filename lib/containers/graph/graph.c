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

/* START MEMORY ALLOCATION FUNCTIONS */

//Add a new memory pool.
static graph_mem_pool* int_graph_mem_add_pool(graph* gr){

	graph_mem_pool* pool;

	if(gr->pool_size < sizeof(graph_node))
		return 0;

	pool = allocate(gr->ctx, sizeof(graph_mem_pool));
	pool->pool = allocate(gr->ctx, gr->pool_size);

	_list_add(gr->memory_pools, pool);
	return pool;

}

//Delete all pool data.
static bool int_graph_mem_delete_pools(graph* gr){

	graph_mem_pool* pool;

	_list_reset_iterator(gr->memory_pools);

	while(_list_has_next(gr->memory_pools)){

		pool = _list_get_next(gr->memory_pools);

		destroy(gr->ctx, pool->pool);
		destroy(gr->ctx, pool);

	}

	_list_delete(gr->memory_pools);

}

//Delete an edge from the pool, while also modifying edge pointers.
static void int_graph_mem_delete_edge(graph* gr, graph_edge* target){

	graph_mem_pool* pool;
	graph_mem_pool_freed *free_block, **current;
	size_t i, pool_start, edge_start, edge_end;

	edge_start = (size_t)(void*)target;
	edge_end = edge_start + sizeof(graph_edge);

	//Find the pool where the edge is located.
	_list_reset_iterator(gr->memory_pools);

	while(_list_has_next(gr->memory_pools)){

		pool = _list_get_next(gr->memory_pools);

		pool_start = (size_t)pool->pool;

		if(pool_start <= edge_start && (pool_start + gr->pool_size) > edge_start)
			break;

	}

	//Create a new free block entry for this edge.
	free_block = allocate(gr->ctx, sizeof(graph_mem_pool_freed));
	free_block->ptr = target;

	//Modify the double pointer.
	target = target->next;

	//Zero out the memory within the pool
	edge_start -= pool_start;
	edge_end -= pool_start;

	for(i = edge_start; i < edge_end; i++)
		pool->pool[i] = 0;

	current = &gr->free_edges;

	while(*current){

		if(!(*current)->next)
			break;

		current = &((*current)->next);

	}

	*current = free_block;

}

//Delete a node's edges.
static void int_graph_mem_delete_edges(graph* gr, graph_node* node){

	graph_edge *current, *tmp;

	if(!gr || !node)
		return;

	current = node->edges;

	while(current){

		tmp = current;
		current = tmp->next;
		int_graph_mem_delete_edge(gr, tmp);

	}

}

static void int_graph_mem_delete_node(graph* gr, graph_node* target){

	graph_mem_pool* pool;
	graph_mem_pool_freed *free_block, **current;
	size_t i, pool_start, node_start, node_end;

	//First, delete all the edges.
	int_graph_mem_delete_edges(gr, target);

	node_start = (size_t)(void*)target;
	node_end = node_start + sizeof(graph_node);
	
	//Find the pool where the edge is located.
	_list_reset_iterator(gr->memory_pools);

	while(_list_has_next(gr->memory_pools)){

		pool = _list_get_next(gr->memory_pools);

		pool_start = (size_t)pool->pool;

		if(pool_start <= node_start && (pool_start + gr->pool_size) > node_start)
			break;

	}

	free_block = allocate(gr->ctx, sizeof(graph_mem_pool_freed));
	free_block->ptr = target;

	//Modify the double pointer.
	target = target->next;

	//Zero out the memory.
	node_start -= pool_start;
	node_end -= pool_start;

	for(i = node_start; i < node_end; i++)
		pool->pool[i] = 0;

	//Create a new free block entry for this node.
	current = &gr->free_nodes;

	while(*current){

		if(!(*current)->next)
			break;

		current = &((*current)->next);

	}

	*current = free_block;

}

static graph_node* int_graph_mem_create_node(graph* gr){

	graph_mem_pool_freed *current, *tmp;
	graph_mem_pool* pool;
	graph_node* ret;

	//First, check to see if there are any free nodes available.
	current = gr->free_nodes;

	if(current){

		tmp = gr->free_nodes;
		gr->free_nodes = current->next;
		ret = current->ptr;
		destroy(gr->ctx, tmp);
		return ret;

	}
	
	
	//If there are no free nodes, create one.
	if(!gr->memory_pools)
		int_graph_mem_add_pool(gr);

	pool = _list_get(gr->memory_pools, gr->memory_pools->used - 1);

	if((pool->used + sizeof(graph_node)) > gr->pool_size)
		pool = int_graph_mem_add_pool(gr);

	pool->used += sizeof(graph_node);

	return (graph_node*)(pool->pool + (pool->used - sizeof(graph_node)));

}

static graph_edge* int_graph_mem_create_edge(graph* gr){

	graph_mem_pool_freed *current, *tmp;
	graph_mem_pool* pool;
	graph_edge* ret;

	//First, check to see if there are any free edges available.
	current = gr->free_edges;

	if(current){

		tmp = gr->free_edges;
		gr->free_edges = current->next;
		ret = current->ptr;
		destroy(gr->ctx, tmp);
		return ret;

	}
	
	//If there are no free nodes, create one.
	if(!gr->memory_pools)
		int_graph_mem_add_pool(gr);

	pool = _list_get(gr->memory_pools, gr->memory_pools->used - 1);

	if((pool->used + sizeof(graph_edge)) > gr->pool_size)
		pool = int_graph_mem_add_pool(gr);

	pool->used += sizeof(graph_edge);

	return (graph_edge*)(pool->pool + (pool->used - sizeof(graph_edge)));

}

/* END MEMORY ALLOCATION FUNCTIONS */

static bool int_graph_node_remove_edge(graph* gr, graph_node* node, long key){

	graph_edge **current = 0, *target = 0, *prev = 0;
	bool found = false;

	if(!gr || !node)
		return false;

	if(!node->edges)
		return false;

	current = &node->edges;

	while(*current){

		//Clean up any hanging pointers (from a node removal).
		if(!(*current)->to){

			target = *current;
			*current = (*current)->next;
			int_graph_mem_delete_edge(gr, target);

		}

		if((*current)->to->key == key){

			target = *current;
			*current = (*current)->next;
			int_graph_mem_delete_edge(gr, target);
			found = true;

		}

		if(*current)
			node->last_edge = *current;
		else
			break;

		prev = *current;
		current = &((*current)->next);

	}

	if(target == node->last_edge)
		node->last_edge = prev;

	return found;


}

static bool int_graph_node_remove_edges(graph* gr, graph_node* node){

	graph_edge *current, *tmp;

	if(!gr || !node)
		return false;

	current = node->edges;

	while(current){

		tmp = current->next;
		int_graph_mem_delete_edge(gr, current);
		current = tmp;
	}

	node->last_edge = 0;
	node->edges = 0;

	return true;
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

graph* _graph_new(standard_library_context* ctx){

	graph_mem_pool* pool;
	graph* gr;

	if(!ctx)
		return 0;

	gr = allocate(ctx, sizeof(graph));
	gr->ctx = ctx;
	gr->pool_size = 4096;
	gr->memory_pools = _list_new(ctx, 1);

	//Add our first memory pool.
	int_graph_mem_add_pool(gr);

	return gr;

}



bool _graph_delete(graph* gr){

	size_t i, j;
	graph_node* current;
	graph_edge *c, *ce;

	if(!gr)
		return false;

	//Delete all nodes and edges.
	int_graph_mem_delete_pools(gr);

	//Check to see if a graph walk object still exists.
	if(gr->walk){

		_queue_delete(gr->walk->bfs_queue);
		_stack_delete(gr->walk->dfs_stack);
		destroy(gr->ctx, gr->walk);

	}

	destroy(gr->ctx, gr);

	return true;
}



void _graph_delete_path(graph_path path){

	if(path.list)
		destroy(path.ctx,  path.list);
	
}

graph_node* _graph_get_node(graph* gr, long key){

	size_t i;
	graph_node* current;

	if(!gr)
		return 0;

	current = gr->nodes;

	while(current){

		if(current->key == key)
			return current;

		current = current->next;

	}

	return 0;

}

graph_edge* _graph_get_edge(graph* gr, long from, long to){

	size_t i;
	graph_node *current, *from_node = 0, *to_node = 0;
	graph_edge* e;

	if(!gr)
		return 0;

	//Get the from and to nodes.
	current = gr->nodes;

	while(current){

		if(current->key == from)
			from_node = current;

		else if(current->key == to)
			to_node = current;

		if(to_node && from_node)
			break;

		current = current->next;

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

	c_node = int_graph_mem_create_node(gr);

	c_node->key = key;
	c_node->data = ptr;

	if(gr->last_node)
		gr->last_node->next = c_node;
	else
		gr->nodes = c_node;

	gr->last_node = c_node;

	return c_node;

}

bool _graph_add_edge(graph* gr, long from, long to, graph_edge** to_edge){

	size_t i;
	graph_node *current = 0, *n1 = 0, *n2 = 0;
	graph_edge** e;
	graph_edge* c;

	if(!gr)
		return false;

	current = gr->nodes;

	while(current){

		if(current->key == from)
			n1 = current;

		if(current->key == to)
			n2 = current;

		if(n1 && n2)
			break;

		current = current->next;

	}

	if(!n1 || !n2)
		return false;

	//Add the edge...
	e = &n1->last_edge;

	if(!(*e))
		e = &n1->edges;

	else		
		e = &((*e)->next);

	*e = int_graph_mem_create_edge(gr);

	(*e)->to = n2;
	*to_edge = *e;
	n1->last_edge = *e;

	return true;

}

bool _graph_add_double_edge(graph* gr, long from, long to, graph_edge** edge_to, graph_edge** edge_back){

	size_t i;
	graph_node *current = 0, *n1 = 0, *n2 = 0;
	graph_edge** e;

	if(!gr)
		return false;

	current = gr->nodes;

	while(current){

		if(current->key == from)
			n1 = current;

		if(current->key == to)
			n2 = current;

		if(n1 && n2)
			break;

		current = current->next;

	}

	if(!n1 || !n2)
		return false;

	//Add the "to" edge...
	e = &n1->last_edge;

	if(!(*e))
		e = &n1->edges;
	else
		e = &((*e)->next);
	
	*e = int_graph_mem_create_edge(gr);
	(*e)->to = n2;
	*edge_to = *e;
	n1->last_edge = *e;

	//Add the "from" edge...
	e = &n2->last_edge;

	if(!(*e))
		e = &n2->edges;
	else
		e = &((*e)->next);
	
	*e = int_graph_mem_create_edge(gr);
	(*e)->to = n1;
	*edge_back = *e;
	n2->last_edge = *e;

	return true;

}

bool _graph_delete_node(graph* gr, long key){

	size_t i, j;
	graph_edge **c, *next, *tmp;
	graph_node **current, *node, *prev = 0;
	bool node_found = false;

	if(!gr)
		return false;

	current = &(gr->nodes);

	while(*current){

		if((*current)->key == key){

			node = *current;
			*current = (*current)->next;
			int_graph_node_remove_edges(gr, node);
			int_graph_mem_delete_node(gr, node);
			node_found = true;

		}
		else
			int_graph_node_remove_edge(gr, node, key);

		prev = *current;
		current = &((*current)->next);

	}

	if(gr->last_node == node)
		gr->last_node = prev;

	return node_found;

}

bool _graph_delete_edge(graph* gr, long from, long to){

	size_t i;
	graph_node* current;

	if(!gr)
		return false;

	current = gr->nodes;

	while(current){

		if(current->key == from)
			return int_graph_node_remove_edge(gr, current, to);


		current = current->next;

	}

	return false;

}

bool _graph_delete_double_edge(graph* gr, long from, long to){

	size_t i;
	uint8_t c;
	graph_node* current;

	if(!gr)
		return false;

	c = 0;

	current = gr->nodes;

	while(current && c != 2){

		if(current->key == from){

			int_graph_node_remove_edge(gr, current, to);
			c++;

		}
		else if(current->key == to){

			int_graph_node_remove_edge(gr, current, from);
			c++;
		}

		current = current->next;

	}

	if(c != 2)
		return false;

	return true;

}

void _graph_clear_paths(graph* gr){

	size_t i;
	graph_node* current;

	if(!gr)
		return;

	current = gr->nodes;

	while(current){

		current->parent = 0;
		current->level = 0;

		current = current->next;

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
	current = gr->nodes;

	while(current){

		if(current->key == start){

			root = current;
			break;

		}

		current = current->next;

	}

	if(!root)
		return false;

	current = 0;

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
	current = gr->nodes;

	while(current){

		if(current->key == start){

			root = current;
			break;

		}

		current = current->next;

	}

	if(!root)
		return false;

	current = 0;

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

	gr->iterator = &(gr->nodes);

}

bool _graph_has_next(graph* gr){

	if(!gr)
		return false;

	if(*(gr->iterator))
		return true;

	return false;

}

graph_node* _graph_get_next(graph* gr){

	graph_node* current;

	if(!gr)
		return 0;

	if(!*(gr->iterator))
		return 0;

	current = *(gr->iterator);
	gr->iterator = &(current->next);

	return current;

}

bool _graph_walk_init(graph* gr, long root){

	graph_node* current;
	graph_walk_config* config;
	size_t i;

	if(!gr)
		return false;

	_graph_clear_paths(gr);

	if(gr->walk){

		if(gr->walk->bfs_queue){

			_queue_delete(gr->walk->bfs_queue);
			_stack_delete(gr->walk->dfs_stack);

		}
	}

	current = gr->nodes;

	while(current){

		if(current->key == root){

			current->level = 1;
			config = allocate(gr->ctx, sizeof(graph_walk_config));
			config->bfs_queue = _queue_new(gr->ctx, 10);
			config->dfs_stack = _stack_new(gr->ctx, 10);
			config->dfs_root_returned = false;
			_queue_enqueue(config->bfs_queue, current);
			_stack_push(config->dfs_stack, current);
			gr->walk = config;

			return true;

		}

		current = current->next;

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

	if(!gr->walk->dfs_root_returned){

		gr->walk->dfs_root_returned = true;
		return _stack_peek(dfs_stack);

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

	_queue_delete(gr->walk->bfs_queue);
	_stack_delete(gr->walk->dfs_stack);

	gr->walk->bfs_queue = 0;
	gr->walk->dfs_stack = 0;
	
	destroy(gr->ctx, gr->walk);
	gr->walk = 0;

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

	_queue_delete(gr->walk->bfs_queue);
	_stack_delete(gr->walk->dfs_stack);

	gr->walk->bfs_queue = 0;
	gr->walk->dfs_stack = 0;
	
	destroy(gr->ctx, gr->walk);
	gr->walk = 0;

	return 0;
}
