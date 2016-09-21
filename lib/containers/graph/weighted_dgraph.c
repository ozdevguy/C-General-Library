/* WEIGHTED DIRECTED GRAPH */

//Create a new weighted, directed graph.
graph* _weighted_dgraph_new(standard_library_context*, size_t);

//Delete a weighted, directed graph.
bool _weighted_dgraph_delete(graph*);

//Add a new node to the graph.
graph_node* _weighted_dgraph_add_node(graph*, size_t, void*);

//Create an edge (graph, from, to, weight).
graph_edge* _graph_add_edge(graph*, size_t, size_t, size_t);