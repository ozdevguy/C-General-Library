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

weighted_graph.c
========================================================================


*/

graph* _weighted_graph_new(standard_library_context* ctx){

	graph* new_graph;

	new_graph = _graph_new(ctx);
	new_graph->type = 1;

	return new_graph;

}

bool _weighted_graph_delete(graph* gr){

	return _graph_delete(gr);

}

graph_node* _weighted_graph_add_node(graph* gr, long key, void* data){

	return _graph_add_node(gr, key, data);

}

bool _weighted_graph_add_edge(graph* gr, long from, long to, long weight, graph_edge** edge_to){

	bool success = false;

	if(!gr || !edge_to)
		return false;

	success = _graph_add_edge(gr, from, to, edge_to);

	if(success)
		(*edge_to)->weight = weight;

	return success;

}

bool _weighted_graph_add_double_edge(graph* gr, long from, long to, long weight, graph_edge** edge_to, graph_edge** edge_back){

	bool success = false;

	if(!gr || !edge_to || !edge_back)
		return false;

	success = _graph_add_double_edge(gr, from, to, edge_to, edge_back);

	if(success){

		(*edge_to)->weight = weight;
		(*edge_back)->weight = weight;

	}

	return success;

}

bool _weighted_graph_add_masked_edge(graph* gr, long from, long to, long weight, size_t mask, graph_edge** to_edge){

	bool success = false;

	success = _graph_add_edge(gr, from, to, to_edge);

	if(!gr || !to_edge)
		return false;

	if(success){

		(*to_edge)->weight = weight;
		(*to_edge)->mask = mask;

	}

	return success;

}

bool _weighed_graph_delete_node(graph* gr, long key){

	return _graph_delete_node(gr, key);

}

bool _weighted_graph_delete_edge(graph* gr, long from, long to){

	return _graph_delete_edge(gr, from, to);

}

void _weighted_graph_clear_paths(graph* gr){

	_graph_clear_paths(gr);

}

//Dijkstra
bool _weighted_graph_spath(graph* gr, long start, long end, graph_path* path){

	size_t i;
	long length;
	queue* bfs_queue;
	graph_node *root = 0, *destination = 0, *current = 0, *discovery = 0;
	graph_edge* c_edge;

	if(!gr || !path)
		return false;

	//Find the start and end nodes.
	current = gr->nodes;

	while(current){

		if(current->key == start)
			root = current;

		else if(current->key == end)
			destination = current;

		if(root && destination)
			break;

		current = current->next;

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

			//Get the total length of the path thus far.
			length = current->level + c_edge->weight;

			//Check to see if the discovered node is already at its optimal length, if not, change its length and parent, then re-add it to the queue.
			if(!discovery->level || discovery->level > length){

				discovery->level = length;
				discovery->parent = current;

				_queue_enqueue(bfs_queue, discovery);

			}

			c_edge = c_edge->next;
		}

	}

	//We have our shortest path!
	if(destination->parent){

		_queue_delete(bfs_queue);
		int_graph_build_path(gr, destination, path);
		return true;

	}

	//Crap, no shortest path...
	_queue_delete(bfs_queue);
	return false;
}


//Dijkstra, with edge masks!
bool _weighted_graph_spath_amask(graph* gr, long start, long end, size_t mask, graph_path* path){

	size_t i;
	long length;
	queue* bfs_queue;
	graph_node *root = 0, *destination = 0, *current = 0, *discovery = 0;
	graph_edge* c_edge;

	if(!gr || !path)
		return false;

	//Find the start and end nodes.
	current = gr->nodes;

	while(current){

		if(current->key == start)
			root = current;

		else if(current->key == end)
			destination = current;

		if(root && destination)
			break;

		current = current->next;

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

			if(c_edge->mask != mask){

				//Get the node at the end of this edge.
				discovery = c_edge->to;

				//Get the total length of the path thus far.
				length = current->level + c_edge->weight;

				//Check to see if the discovered node is already at its optimal length, if not, change its length and parent, then re-add it to the queue.
				if(!discovery->level || discovery->level > length){

					discovery->level = length;
					discovery->parent = current;

					_queue_enqueue(bfs_queue, discovery);

				}

			}

			c_edge = c_edge->next;
		}

	}

	//Found the shortest path!
	if(destination->parent){

		_queue_delete(bfs_queue);
		int_graph_build_path(gr, destination, path);
		return true;

	}

	//Crap...
	_queue_delete(bfs_queue);
	return false;
}