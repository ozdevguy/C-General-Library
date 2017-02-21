
regex_node_descriptor* int_regex_create_node_descriptor(standard_library_context* ctx, uint8_t type, uint32_t start, uint32_t end){

	regex_node_descriptor* descriptor;

	descriptor = allocate(ctx, sizeof(regex_node_descriptor));

	descriptor->type = type;
	descriptor->start = start;
	descriptor->end = end;

	return descriptor;

}

//Add the character after an escape (TERMINAL).
bool int_regex_add_post_esc(regex_compiled* obj){

	regex_node_descriptor* descriptor;
	utf8_char* character;
	graph_edge* edge;
	graph_node* node;

	if(!_string_has_next(obj->regex))
		return false;

	character = _string_get_next(obj->regex);

	//Create a new descriptor for this character.
	descriptor = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_CHAR, character->value, character->value);

	//Add this descriptor to the parse tree.
	node = _graph_add_node(obj->parse_tree, obj->key++, descriptor);

	//Create the edge between the new node and its parent.
	_graph_add_edge(obj->parse_tree, obj->parent_node->key, node->key, &edge);

	node->parent = obj->parent_node;
	obj->child_node = node;

	return true;

}

//Add a new character.
bool int_regex_add_character(regex_compiled* obj){

	regex_node_descriptor* descriptor;
	utf8_char *character, *character2;
	graph_edge* edge;
	graph_node* node;
	uint32_t start = 0;
	uint32_t end = 0;

	_string_iterator_rewind(obj->regex);
	character = _string_get_next(obj->regex);
	start = character->value;

	//Check to see if this is a range.
	character2 = _string_get_next(obj->regex);

	if(character2){

		if(character2->value == 45){

			if(!_string_has_next(obj->regex))
				return false;

			character2 = _string_get_next(obj->regex);
			end = character2->value;

		}
		else
			_string_iterator_rewind(obj->regex);

	}

	//Create a new descriptor for this character.
	descriptor = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_CHAR, start, end);

	node = _graph_add_node(obj->parse_tree, obj->key++, descriptor);

	_graph_add_edge(obj->parse_tree, obj->parent_node->key, node->key, &edge);

	node->parent = obj->parent_node;
	obj->child_node = node;

	return true;

}

//Add an open bracket descriptor.
bool int_regex_start_bracket(regex_compiled* obj){

	regex_node_descriptor* descriptor;
	utf8_char* character;
	graph_edge* edge;
	graph_node* node;

	if(!_string_has_next(obj->regex))
		return false;

	//Check to see if the opening bracket is followed by a caret (for NOT).
	character = _string_get_next(obj->regex);

	//If this is a not expression...
	if(character->value == 94){

		descriptor = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_NOT, 0, 0);

		node = _graph_add_node(obj->parse_tree, obj->key++, descriptor);

		_graph_add_edge(obj->parse_tree, obj->parent_node->key, node->key, &edge);

		node->parent = obj->parent_node;
		obj->parent_node = node;
		obj->child_node = node;

	}



	//Create a new descriptor.
	descriptor = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_BRACKET, 0, 0);

	//Add this descriptor to the parse tree.
	node = _graph_add_node(obj->parse_tree, obj->key++, descriptor);

	//Create the edge between the new node and its parent.
	_graph_add_edge(obj->parse_tree, obj->parent_node->key, node->key, &edge);

	node->parent = obj->parent_node;
	obj->parent_node = node;
	obj->child_node = node;

	return true;

}

//Close an open bracket.
bool int_regex_end_bracket(regex_compiled* obj){

	if(((regex_node_descriptor*)(obj->parent_node->data))->type != REGEX_BRACKET)
		return false;

	obj->child_node = obj->parent_node;
	obj->parent_node = obj->parent_node->parent;

	return true;

}

bool int_regex_start_capture(regex_compiled* obj){

	regex_node_descriptor* descriptor;
	graph_edge* edge;
	graph_node* node;

	if(!_string_has_next(obj->regex))
		return false;

	//Create a new descriptor.
	descriptor = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_CAPTURE, 0, 0);

	node = _graph_add_node(obj->parse_tree, obj->key++, descriptor);

	//Create the edge between the new node and its parent.
	_graph_add_edge(obj->parse_tree, obj->parent_node->key, node->key, &edge);

	node->parent = obj->parent_node;
	obj->parent_node = node;
	obj->child_node = node;

	return true;

}

bool int_regex_end_capture(regex_compiled* obj){

	if(((regex_node_descriptor*)(obj->parent_node->data))->type != REGEX_CAPTURE)
		return false;

	obj->child_node = obj->parent_node;
	obj->parent_node = obj->parent_node->parent;

	return true;

}

bool int_regex_match_zero_more(regex_compiled* obj){

	regex_node_descriptor* descriptor;
	graph_edge* edge;
	graph_node* node;

	//Create a new descriptor.
	descriptor = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_ZERO_OR_MORE, 0, 0);

	node = _graph_add_node(obj->parse_tree, obj->key++, descriptor);

	if(!obj->parent_node || !obj->child_node)
		return false;

	//Now, we need to eliminate the edge between the most recent nodes.
	_graph_delete_edge(obj->parse_tree, obj->parent_node->key, obj->child_node->key);

	//Create an edge between the parent node and the new node.
	_graph_add_edge(obj->parse_tree, obj->parent_node->key, node->key, &edge);

	//Create an edge between the new node and the child node.
	_graph_add_edge(obj->parse_tree, node->key, obj->child_node->key, &edge);

	node->parent = obj->parent_node;

	//Now, modify the parent pointer of the child node.
	obj->child_node->parent = node;

	//Set the child node to the parent node.
	obj->child_node = obj->parent_node;

	return true;

}

bool int_regex_match_one_more(regex_compiled* obj){

	regex_node_descriptor* descriptor;
	graph_edge* edge;
	graph_node* node;

	//Create a new descriptor.
	descriptor = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_ONE_OR_MORE, 0, 0);

	node = _graph_add_node(obj->parse_tree, obj->key++, descriptor);

	if(!obj->parent_node || !obj->child_node)
		return false;

	//Now, we need to eliminate the edge between the most recent nodes.
	_graph_delete_edge(obj->parse_tree, obj->parent_node->key, obj->child_node->key);

	//Create an edge between the parent node and the new node.
	_graph_add_edge(obj->parse_tree, obj->parent_node->key, node->key, &edge);

	//Create an edge between the new node and the child node.
	_graph_add_edge(obj->parse_tree, node->key, obj->child_node->key, &edge);

	node->parent = obj->parent_node;

	//Now, modify the parent pointer of the child node.
	obj->child_node->parent = node;

	//Set the child node to the parent node.
	obj->child_node = obj->parent_node;

	return true;

}

bool int_regex_match_zero_one(regex_compiled* obj){

	regex_node_descriptor* descriptor;
	graph_edge* edge;
	graph_node* node;

	//Create a new descriptor.
	descriptor = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_ZERO_OR_ONE, 0, 0);

	node = _graph_add_node(obj->parse_tree, obj->key++, descriptor);

	if(!obj->parent_node || !obj->child_node)
		return false;

	//Now, we need to eliminate the edge between the most recent nodes.
	_graph_delete_edge(obj->parse_tree, obj->parent_node->key, obj->child_node->key);

	//Create an edge between the parent node and the new node.
	_graph_add_edge(obj->parse_tree, obj->parent_node->key, node->key, &edge);

	//Create an edge between the new node and the child node.
	_graph_add_edge(obj->parse_tree, node->key, obj->child_node->key, &edge);

	node->parent = obj->parent_node;

	//Now, modify the parent pointer of the child node.
	obj->child_node->parent = node;

	//Set the child node to the parent node.
	obj->child_node = obj->parent_node;

	return true;

}

//Make a decision based on the next character in the sequence.
bool int_regex_next_op(regex_compiled* obj){

	utf8_char* character;
	bool result;

	while(_string_has_next(obj->regex)){

		character = _string_get_next(obj->regex);

		switch(character->value){

			//Escape character.
			case 92:
				result = int_regex_add_post_esc(obj);
				break;

			//Open bracket.
			case 91: 
				result = int_regex_start_bracket(obj);
				break;

			//Close bracket.
			case 93: 
				result = int_regex_end_bracket(obj);
				break;

			//Start capture.
			case 40:
				result = int_regex_start_capture(obj);
				break;

			case 41:
				result = int_regex_end_capture(obj);
				break;

			case 42:
				result = int_regex_match_zero_more(obj);
				break;

			case 43:
				result = int_regex_match_one_more(obj);
				break;

			default:
				result = int_regex_add_character(obj);
				break;

		}

		if(!result)
			return false;

	}

	return true;

}


//Create a new regex object.


regex_compiled* _regex_new(string* input){

	regex_compiled* obj;
	regex_node_descriptor* root;
	string* regex;

	if(!input)
		return 0;

	obj = allocate(input->ctx, sizeof(regex_compiled));
	obj->parse_tree = _graph_new(input->ctx);
	regex = _string_new(input->ctx);
	_string_copy(regex, input);
	_string_reset_iterator(regex);
	obj->regex = regex;

	//Create the root REGEX node in the graph/tree.
	root = allocate(input->ctx, sizeof(regex_node_descriptor));
	root->type = REGEX_ROOT;

	obj->parent_node =  _graph_add_node(obj->parse_tree, obj->key++, root);
	obj->child_node = obj->parent_node;
	int_regex_next_op(obj);

	return obj;

}

void _regex_delete(regex_compiled* obj){

	graph_node* current;
	regex_node_descriptor* desc;
	standard_library_context* ctx;

	if(!obj)
		return;

	ctx = obj->parse_tree->ctx;

	_graph_walk_init(obj->parse_tree, 0);

	while((current = _graph_walk_dfs_next(obj->parse_tree)))
		destroy(ctx, current->data);
	
	_graph_delete(obj->parse_tree);
	_string_delete(obj->regex);
	destroy(ctx, obj);

}