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

	//Enable helper map?
	bool helper_map_enabled;

	//Helper map.
	map* helper_map;

	//Graph walk config.
	graph_walk_config* walk;

};

struct graph_node{

	//Node key.
	long key;

	//Array of all edges going out of this node.
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

	//DFS Helper
	bool dfs_root_ret;

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

