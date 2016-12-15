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

graph.h
========================================================================


*/

/* STRUCTURES */

typedef struct graph graph;
typedef struct graph_edge graph_edge;
typedef struct graph_node graph_node;
typedef struct graph_path graph_path;
typedef struct graph_walk_config graph_walk_config;

/* GRAPH */

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
void _graph_enable_helper_map(graph*);

void _graph_disable_helper_map(graph*);

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "graph_structs.c"
	#include "graphmap.c"
	#include "graph.c"

#endif