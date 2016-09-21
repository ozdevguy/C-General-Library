#include "../lib/ile_stdlib.h"

void main(){

	int data1 = 1234;
	int data2 = 5678;
	int data3 = 91011;
	int data4 = 121314;

	standard_library_context ctx;

	_std_lib_default(&ctx);

	graph* myNewGraph = _graph_new(&ctx, 3);

	//Add the nodes.
	_graph_add_node(myNewGraph, 2345, &data1);

	_graph_add_node(myNewGraph, 2346, &data2);

	_graph_add_node(myNewGraph, 2347, &data3);

	_graph_add_node(myNewGraph, 2348, &data4);

	_graph_add_node(myNewGraph, 2349, &data4);

	_graph_add_node(myNewGraph, 2350, &data4);

	_graph_add_node(myNewGraph, 2351, &data4);

	_graph_add_node(myNewGraph, 2352, &data4);

	_graph_add_node(myNewGraph, 2353, &data4);

	
	graph_edge* e1;
	graph_edge* e2;

	//Create some edges in order to build our graph.
	_graph_add_double_edge(myNewGraph, 2345, 2346, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2345, 2347, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2346, 2350, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2346, 2349, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2347, 2348, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2348, 2349, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2348, 2350, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2348, 2351, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2351, 2352, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2347, 2353, &e1, &e2);

	_graph_add_double_edge(myNewGraph, 2351, 2353, &e1, &e2);


	graph_path path = _graph_bfs(myNewGraph, 2345, 2353);

	int i;

	printf("Hops: %ld\n", path.hops);

	for(i = 0; i < path.hops; i++){

		printf("Step%d: %ld\n", i, path.list[i]->key);

	}

	_graph_delete_path(path);

	printf("\n\n");

	_graph_clear_paths(myNewGraph);

	path = _graph_dfs(myNewGraph, 2345, 2353);

	printf("Hops: %ld\n", path.hops);

	for(i = 0; i < path.hops; i++){

		printf("Step%d: %ld\n", i, path.list[i]->key);

	}

	_graph_delete_path(path);

	//_graph_delete_node(myNewGraph, 2347);

	//Find a path using breadth first search.
	//undirected_graph_path path = _undirected_graph_bfs(graph, 2345, 2352);


	_graph_delete(myNewGraph);
	
	
}