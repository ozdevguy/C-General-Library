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

graph_structs.c
========================================================================


*/

struct graph_mem_pool{

	//Used space in this graph pool.
	size_t used;

	//Pointer to allocated memory.
	byte* pool;

};

struct graph_mem_pool_freed{

	//Pointer
	void* ptr;

	//Next
	graph_mem_pool_freed* next;

};	

struct graph{

	//Standard library context.
	standard_library_context* ctx;

	//Memory pool size.
	size_t pool_size;

	//List of memory pools.
	list* memory_pools;

	//Freed pool locations (sized for nodes).
	graph_mem_pool_freed* free_nodes;

	//Freed pool locations (sized for edges).
	graph_mem_pool_freed* free_edges;

	//Linked list of nodes.
	graph_node* nodes;

	//Last node.
	graph_node* last_node;

	//Number of used nodes.
	size_t used;

	//Current path (for searches).
	graph_path* path;

	//Graph type.
	uint8_t type;

	//Graph iterator.
	graph_node** iterator;

	//Helper map.
	map* helper_map;

	//Graph walk config.
	graph_walk_config* walk;


};

struct graph_node{

	//Node key.
	long key;

	//Linked list of edges.
	graph_edge* edges;

	//Last edge of the node.
	graph_edge* last_edge;

	//Total number of edges.
	size_t edge_total;

	//Parent node.
	graph_node* parent;

	//The level of this node.
	size_t level;

	//Data contained at this node.
	void* data;  

	//Next node.
	graph_node* next;                               
	
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

	//DFS root element.
	bool dfs_root_returned;
	
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

	//List of edges.
	graph_edge** edges;

};

