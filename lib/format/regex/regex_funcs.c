
graph_node* int_regex_get_starting_node(regex_compiled* regex, long key){

	graph_node* current;

	_graph_walk_init(regex->parse_tree, key);

	while((current = _graph_walk_dfs_next(regex->parse_tree))){

		//We are at a terminal node.
		if(!current->edges)
			return current;

	}
}

bool int_regex_perform_match(regex_compiled* regex, graph_node* current, string* input){

	regex_node_descriptor* descriptor;
	graph_node* next;
	utf8_char* character;

	descriptor = current->data;

	bool match_string = false;

	//Check to see if we are matching characters or strings.
	if(descriptor->type == REGEX_CAPTURE || descriptor->type == REGEX_ROOT || descriptor->type == REGEX_OR_SUB){

		while(_string_has_next(input) && (next = _graph_walk_dfs_next(regex->parse_tree))){

			descriptor = next->data;
			character = _string_get_next(input);

			if(character->value < descriptor->start || character->value > descriptor->end)
				return false;


		}

	}

	//Match a single character within the group.
	else{


	}

}	

long _regex_position(regex_compiled* regex, string* input, size_t start_pos){

	size_t i;
	graph_node* current;
	standard_library_context* ctx;

	if(!regex || !input)
		return -1;

	ctx = input->ctx;
	
	current = int_regex_get_starting_node(regex, 0);

	if(current->)

	//Loop through the string.
	for(i = 0; i < input->length; i++){

		

	}
}	