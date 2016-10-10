#include "../lib/genlib.h"


void main(){

	standard_library_context ctx;

	_std_lib_default(&ctx);


	graph* myGraph = _graph_new(&ctx, 10);

	//Nodes
	_graph_add_node(myGraph, 21, 0);
	_graph_add_node(myGraph, 22, 0);
	_graph_add_node(myGraph, 23, 0);
	_graph_add_node(myGraph, 24, 0);
	_graph_add_node(myGraph, 25, 0);
	_graph_add_node(myGraph, 26, 0);
	_graph_add_node(myGraph, 27, 0);
	_graph_add_node(myGraph, 28, 0);
	_graph_add_node(myGraph, 29, 0);
	_graph_add_node(myGraph, 30, 0);
	_graph_add_node(myGraph, 31, 0);
	_graph_add_node(myGraph, 32, 0);
	_graph_add_node(myGraph, 33, 0);
	_graph_add_node(myGraph, 34, 0);
	_graph_add_node(myGraph, 35, 0);
	_graph_add_node(myGraph, 36, 0);
	_graph_add_node(myGraph, 37, 0);


	//Edges
	graph_edge* e1;
	graph_edge* e2;

	_graph_add_double_edge(myGraph, 21, 22, &e1, &e2);
	_graph_add_double_edge(myGraph, 22, 27, &e1, &e2);
	_graph_add_double_edge(myGraph, 27, 30, &e1, &e2);
	_graph_add_double_edge(myGraph, 27, 31, &e1, &e2);
	_graph_add_double_edge(myGraph, 22, 28, &e1, &e2);
	_graph_add_double_edge(myGraph, 28, 32, &e1, &e2);
	_graph_add_double_edge(myGraph, 28, 35, &e1, &e2);
	_graph_add_double_edge(myGraph, 22, 29, &e1, &e2);

	_graph_add_double_edge(myGraph, 21, 23, &e1, &e2);
	_graph_add_double_edge(myGraph, 23, 24, &e1, &e2);
	_graph_add_double_edge(myGraph, 24, 25, &e1, &e2);
	_graph_add_double_edge(myGraph, 24, 26, &e1, &e2);
	_graph_add_double_edge(myGraph, 24, 37, &e1, &e2);
	_graph_add_double_edge(myGraph, 23, 36, &e1, &e2);

	/* START THE GRAPH WALK */
	_graph_walk_init(myGraph, 21);

	graph_node* current;

	int i = 1;

	while((current = _graph_walk_dfs_next(myGraph)))
		printf("Current: %ld | %ld\n", current->key, current->level);


	_graph_delete(myGraph);

}