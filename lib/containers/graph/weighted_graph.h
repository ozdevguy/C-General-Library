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

weighted_graph.h
========================================================================


*/

/* WEIGHTED GRAPH */

//Create a new weighted, directed graph.
graph* _weighted_graph_new(standard_library_context*); //FINISHED

//Delete a weighted, directed graph.
bool _weighted_graph_delete(graph*); //FINISHED

//Add a new node to the graph.
graph_node* _weighted_graph_add_node(graph*, long, void*); //FINISHED

//Create an edge (graph, from, to, weight).
bool _weighted_graph_add_edge(graph*, long, long, long, graph_edge**); //FINISHED

//Create an edge with a mask (graph, from, to, weight, mask, edge).
bool _weighted_graph_add_masked_edge(graph*, long, long, long, size_t, graph_edge**); //FINISHED

//Remove a node.
bool _weighted_graph_delete_node(graph*, long); //FINISHED

//Remove an edge.
bool _weighted_graph_delete_edge(graph*, long, long); //FINISHED

//Clear the graph of levels/parents.
void _weighted_graph_clear_paths(graph*); //FINISHED

//Get the shortest path from one node to another.
bool _weighted_graph_spath(graph*, long, long, graph_path*);

//Get the shortest path from one node to another, while avoiding edges with a certain mask.
bool _weighted_graph_spath_amask(graph*, long, long, size_t, graph_path*);

//Sort the edges of each node by weight.
bool _weighted_graph_edge_sort(graph*);

//Minimum spanning tree.
//bool _weighted_graph_min_spanning(graph*, long, long);

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "weighted_graph.c"

#endif