#include "../lib/ile_stdlib.h"

void main(){

	int data1 = 1234;
	int data2 = 5678;
	int data3 = 91011;
	int data4 = 121314;

	standard_library_context ctx;

	_std_lib_default(&ctx);

	//Create a new graph.
	undirected_graph* graph = _undirected_graph_new(&ctx, 10);

	//Add the nodes.
	_undirected_graph_add_node(graph, 2345, &data1);

	_undirected_graph_add_node(graph, 2346, &data2);

	_undirected_graph_add_node(graph, 2347, &data3);

	_undirected_graph_add_node(graph, 2348, &data4);

	_undirected_graph_add_node(graph, 2349, &data4);

	_undirected_graph_add_node(graph, 2350, &data4);

	_undirected_graph_add_node(graph, 2351, &data4);

	//Create some edges in order to build our graph.
	_undirected_graph_add_edge(graph, 2345, 2346);

	_undirected_graph_add_edge(graph, 2345, 2347);

	_undirected_graph_add_edge(graph, 2346, 2350);

	_undirected_graph_add_edge(graph, 2346, 2349);

	_undirected_graph_add_edge(graph, 2347, 2348);

	_undirected_graph_add_edge(graph, 2348, 2349);

	_undirected_graph_add_edge(graph, 2348, 2350);

	_undirected_graph_add_edge(graph, 2348, 2351);

	_undirected_graph_delete(graph);

	
}