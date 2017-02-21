#include "../lib/genlib.h"

void main(int argc, char* argv[]){

	genlib_context* ctx;

	printf("Hello world!\n");

	_lib_init();
	ctx = _ctx_init();

	regex_compiled* regex;

	char* test = "([ABCa-z0-9]*\\_[ab]+)";
	//char* test = "ABC";

	string* rs = _string_new_fbytes(ctx, test);

	regex = _regex_new(rs); 

	_graph_walk_init(regex->parse_tree, 0);



	graph_node* current_node;
	graph_edge* current_edge;

	while((current_node = _graph_walk_dfs_next(regex->parse_tree))){

		regex_node_descriptor* desc = (regex_node_descriptor*)current_node->data;

		if(current_node->parent)
			printf("CURRENT NODE ID: %ld | CURRENT NODE PARENT: %ld | CURRENT NODE CHILDREN: ", current_node->key, current_node->parent->key);

		else
			printf("ROOT! | ROOT'S CHILDREN: ");

		current_edge = current_node->edges;

		while(current_edge){

			printf("%ld, ", current_edge->to->key);
			current_edge = current_edge->next;
		}

		printf(" | ");

		switch(desc->type){

			case REGEX_ROOT:
				printf("ROOT\n");
				break;
			case REGEX_BRACKET:
				printf("BRACKET\n");
				break;
			case REGEX_ZERO_OR_MORE:
				printf("*\n");

			case REGEX_ONE_OR_MORE:
				printf("+\n");
				break;
			case REGEX_CAPTURE:
				printf("CAPTURE\n");
				break;
			case REGEX_CHAR:
				printf("CHARACTER: %c, END: %c\n", (char)desc->start, (char)desc->end);
				break;
			default:
				printf("N/A: %d\n", desc->type);
				break;

		}
	}


	_regex_delete(regex);
	_string_delete(rs);
	_ctx_delete(ctx);

}