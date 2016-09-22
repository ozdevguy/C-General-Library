#include "../lib/ile_stdlib.h"

void main(){

	int data1 = 1234;
	int data2 = 5678;
	int data3 = 91011;
	int data4 = 121314;

	standard_library_context ctx;

	_std_lib_default(&ctx);

	/*
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

	*/

	//Create a new weighted graph.
	graph* weightedGraph = _weighted_graph_new(&ctx, 10);


	//Add the nodes...
	_weighted_graph_add_node(weightedGraph, 31, &data1);

	_weighted_graph_add_node(weightedGraph, 32, &data2);

	_weighted_graph_add_node(weightedGraph, 33, &data2);

	_weighted_graph_add_node(weightedGraph, 34, &data2);

	_weighted_graph_add_node(weightedGraph, 35, &data2);

	_weighted_graph_add_node(weightedGraph, 36, &data2);

	_weighted_graph_add_node(weightedGraph, 37, &data2);

	_weighted_graph_add_node(weightedGraph, 38, &data2);

	_weighted_graph_add_node(weightedGraph, 39, &data2);

	_weighted_graph_add_node(weightedGraph, 40, &data2);

	_weighted_graph_add_node(weightedGraph, 41, &data2);

	_weighted_graph_add_node(weightedGraph, 42, &data2);

	_weighted_graph_add_node(weightedGraph, 43, &data2);

	_weighted_graph_add_node(weightedGraph, 44, &data2);


	int i;
	int nodes[10001];
	srand(time(0));

	for(i = 0; i < 10000; i++){

		nodes[i] = rand();

		_weighted_graph_add_node(weightedGraph, nodes[i], &data2);

	}


	//Add the edges...

	graph_edge* e1;
	graph_edge* e2;

	for(i = 0; i < 10000; i++)		
		_weighted_graph_add_double_edge(weightedGraph, nodes[rand() % 10000], nodes[rand() % 10000], rand(), &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 39, nodes[rand() % 10000], 50, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 32, nodes[rand() % 10000], 50, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 35, nodes[rand() % 10000], 50, &e1, &e2);

	
	_weighted_graph_add_double_edge(weightedGraph, 31, 32, 2, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 31, 33, 5, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 32, 34, 5, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 32, 35, 8, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 34, 35, 2, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 34, 36, 1, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 35, 38, 1, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 36, 39, 2, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 38, 39, 3, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 39, 40, 5, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 39, 43, 3, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 43, 42, 2, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 42, 40, 3, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 40, 35, 1, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 40, 41, 3, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 40, 37, 10, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 41, 44, 2, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 44, 37, 6, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 35, 33, 2, &e1, &e2);

	_weighted_graph_add_double_edge(weightedGraph, 33, 37, 3, &e1, &e2);


	//Find the shortest path between two nodes.
	int dest = 44;

	graph_path path = _weighted_graph_spath(weightedGraph, 31, dest);

	printf("Hops: %ld from 31 to %d\n", path.hops, dest);

	
	for(i = 0; i <= path.hops; i++){

		if(path.list[i])
			printf("Step%d: %ld, length: %ld\n", i, path.list[i]->key, path.list[i]->level);

	}
	

	_graph_delete_path(path);

	_weighted_graph_delete(weightedGraph);




	
	
}