
regex_node_descriptor* int_regex_create_node_descriptor(standard_library_context* ctx, uint8_t type, uint32_t start, uint32_t end){

	regex_node_descriptor* descriptor;

	descriptor = allocate(ctx, sizeof(regex_node_descriptor));

	descriptor->type = type;
	descriptor->start = start;
	descriptor->end = end;

	return descriptor;

}

bool int_regex_build_tree(regex_compiled* obj){
 
	graph_node *n1, *n2, *n3;
	graph_edge* edge;
	regex_node_descriptor *descriptor, *tmp;

	descriptor = ((graph_node*)_stack_peek(obj->parse_stack))->data;

	if(descriptor->type == REGEX_CHAR){

		n1 = _stack_pop(obj->parse_stack);
		obj->last_popped = n1;
		n2 = _stack_peek(obj->parse_stack);

		_graph_add_edge(obj->parse_tree, n2->key, n1->key, &edge);

		return true;

	}

	if(descriptor->type == REGEX_BRACKET_END){

		//Pop the bracket ending descriptor off the stack.
		_stack_pop(obj->parse_stack);

		//Get the bracket node.
		n1 = _stack_pop(obj->parse_stack);
		n2 = _stack_peek(obj->parse_stack);

		while(n1){

			obj->last_popped = n1;

			_graph_add_edge(obj->parse_tree, n2->key, n1->key, &edge);

			if(((regex_node_descriptor*)(n1->data))->type != REGEX_BRACKET){

				n1 = _stack_pop(obj->parse_stack);
				n2 = _stack_peek(obj->parse_stack);

			}
			else
				break;

		}

		if(!n1)
			return false;

		//Check to see if the next item in the stack is a NOT descriptor.
		n1 = _stack_peek(obj->parse_stack);

		if(((regex_node_descriptor*)(n1->data))->type == REGEX_NOT){

			n1 = _stack_pop(obj->parse_stack); //REGEX NOT
			n2 = _stack_peek(obj->parse_stack); //PARENT
			n3 = obj->last_popped; //BRACKET EXP

			_graph_delete_edge(obj->parse_tree, n2->key, n3->key);
			_graph_add_edge(obj->parse_tree, n2->key, n1->key, &edge);
			_graph_add_edge(obj->parse_tree, n1->key, n3->key, &edge);

		}


	}

	if(descriptor->type == REGEX_CAPTURE_END){

		//Pop the bracket ending descriptor off the stack.
		_stack_pop(obj->parse_stack);

		//Get the bracket node.

		n1 = _stack_pop(obj->parse_stack);
		n2 = _stack_peek(obj->parse_stack);

		while(n1){

			obj->last_popped = n1;

			_graph_add_edge(obj->parse_tree, n2->key, n1->key, &edge);

			if(((regex_node_descriptor*)(n1->data))->type != REGEX_CAPTURE){

				n1 = _stack_pop(obj->parse_stack);
				n2 = _stack_peek(obj->parse_stack);

			}
			else
				break;

		}

		if(!n1)
			return false;

		//Get the parent.
		n2 = _stack_peek(obj->parse_stack);
	}

	//Quantifiers.
	if(descriptor->type == REGEX_ZERO_OR_MORE || descriptor->type == REGEX_ONE_OR_MORE || descriptor->type == REGEX_ZERO_OR_ONE){

		n1 = _stack_pop(obj->parse_stack); //REGEX ZERO OR MORE
		n2 = _stack_peek(obj->parse_stack); //REGEX PARENT
		n3 = obj->last_popped; //REGEX BRACKET

		obj->last_popped = n1;

		_graph_delete_edge(obj->parse_tree, n2->key, n3->key);
		_graph_add_edge(obj->parse_tree, n2->key, n1->key, &edge);
		_graph_add_edge(obj->parse_tree, n1->key, n3->key, &edge);

		return true;

	}

	//Or
	if(descriptor->type == REGEX_OR){

		tmp = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_OR_SUB, 0, 0);
		n1 = _graph_add_node(obj->parse_tree, obj->key++, tmp); //OR SUBEXPRESSION FOR FIRST PORTION.
		n2 = _stack_pop(obj->parse_stack); //OR
		n3 = _stack_peek(obj->parse_stack); //PARENT

		//Give the parent's edges to the subexpression.
		n1->edges = n3->edges;
		n3->edges = 0;
		n3->last_edge = 0;

		//Create an edge between the or and the subexp.
		_graph_add_edge(obj->parse_tree, n2->key, n1->key, &edge);
		
		tmp = int_regex_create_node_descriptor(obj->regex->ctx, REGEX_OR_SUB, 0, 0);

		_stack_push(obj->parse_stack, n2);
		_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, tmp));

		return true;

	}

	return true;

}

void int_regex_roll_stack(regex_compiled* obj){

	graph_node *n1, *n2;
	graph_edge* edge;

	n1 = _stack_pop(obj->parse_stack);
	n2 = _stack_peek(obj->parse_stack);

	while(n1){

		if(n2)
			_graph_add_edge(obj->parse_tree, n2->key, n1->key, &edge);
		else
			break;

		n1 = _stack_pop(obj->parse_stack);
		n2 = _stack_peek(obj->parse_stack);

	}

}

bool int_regex_match_zero_more(regex_compiled* obj){

	regex_node_descriptor* descriptor;

	descriptor =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_ZERO_OR_MORE, 0, 0);

	_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, descriptor));

	return int_regex_build_tree(obj);

}

bool int_regex_match_one_more(regex_compiled* obj){

	regex_node_descriptor* descriptor;

	descriptor =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_ONE_OR_MORE, 0, 0);

	_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, descriptor));

	return int_regex_build_tree(obj);

}

bool int_regex_match_zero_one(regex_compiled* obj){

	regex_node_descriptor* descriptor;

	descriptor =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_ZERO_OR_ONE, 0, 0);

	_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, descriptor));

	return int_regex_build_tree(obj);

}

bool int_regex_match_or(regex_compiled* obj){

	regex_node_descriptor* descriptor;

	descriptor =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_OR, 0, 0);

	_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, descriptor));

	return int_regex_build_tree(obj);

}

bool int_regex_end_capture(regex_compiled* obj){

	regex_node_descriptor* descriptor;

	descriptor =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_CAPTURE_END, 0, 0);

	_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, descriptor));

	return int_regex_build_tree(obj);

}

bool int_regex_start_capture(regex_compiled* obj){

	regex_node_descriptor* descriptor;

	descriptor =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_CAPTURE, 0, 0);

	_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, descriptor));

	return int_regex_build_tree(obj);

}

bool int_regex_end_bracket(regex_compiled* obj){

	regex_node_descriptor* descriptor;

	descriptor =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_BRACKET_END, 0, 0);

	_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, descriptor));

	return int_regex_build_tree(obj);

}

bool int_regex_start_bracket(regex_compiled* obj){

	utf8_char* character;
	regex_node_descriptor *descriptor, *notdesc;

	//Check to see if this is a negation.
	if(_string_has_next(obj->regex)){

		character = _string_get_next(obj->regex);

		if(character->value == 94){

			notdesc =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_NOT, 0, 0);
			_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, notdesc));

		}
		else
			_string_iterator_rewind(obj->regex);

	}

	descriptor =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_BRACKET, 0, 0);

	_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, descriptor));

	return int_regex_build_tree(obj);

}

bool int_regex_add_character(regex_compiled* obj){

	utf8_char* character;
	regex_node_descriptor* descriptor;
	uint32_t min, max;

	_string_iterator_rewind(obj->regex);
	character = _string_get_next(obj->regex);
	min = character->value;
	max = min;

	//Check to see if this is a range.
	if(_string_has_next(obj->regex)){

		character = _string_get_next(obj->regex);

		if(character->value == 45){

			character = _string_get_next(obj->regex);

			if(!character)
				return false;

			max = character->value;

		}
		else
			_string_iterator_rewind(obj->regex);

	}

	descriptor =  int_regex_create_node_descriptor(obj->regex->ctx, REGEX_CHAR, min, max);

	_stack_push(obj->parse_stack, _graph_add_node(obj->parse_tree, obj->key++, descriptor));

	return int_regex_build_tree(obj);
}

bool int_regex_add_post_esc(regex_compiled* obj){

	utf8_char* character;
	regex_node_descriptor* descriptor;

	if(!_string_has_next(obj->regex))
		return false;

	return int_regex_add_character(obj);

}


//Make a compilation decision based on the next character in the sequence.
bool int_regex_next_op(regex_compiled* obj){

	utf8_char* character;
	bool result;

	_string_reset_iterator(obj->regex);

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

			case 124:
				result = int_regex_match_or(obj);
				break;

			default:
				result = int_regex_add_character(obj);
				break;

		}

		if(!result)
			return false;

	}

	//Roll up the stack.
	int_regex_roll_stack(obj);

	return true;

}


regex_compiled* _regex_new(string* input){

	graph_node* root;
	regex_compiled* compiler_obj;
	regex_node_descriptor* root_descriptor;

	if(!input)
		return 0;

	compiler_obj = allocate(input->ctx, sizeof(regex_compiled));
	compiler_obj->parse_tree = _graph_new(input->ctx);
	compiler_obj->parse_stack = _stack_new(input->ctx, 10);
	compiler_obj->regex = _string_new(input->ctx);
	_string_copy(compiler_obj->regex, input);

	root_descriptor = int_regex_create_node_descriptor(input->ctx, REGEX_ROOT, 0, 0);
	root = _graph_add_node(compiler_obj->parse_tree, compiler_obj->key++, root_descriptor);

	_stack_push(compiler_obj->parse_stack, root);

	compiler_obj->success = int_regex_next_op(compiler_obj);

	return compiler_obj;

}

void _regex_delete(regex_compiled* compiled){

	standard_library_context* ctx;
	graph_node* current;

	if(!compiled)
		return;

	ctx = compiled->regex->ctx;

	_graph_reset_iterator(compiled->parse_tree);

	while(_graph_has_next(compiled->parse_tree)){

		current = _graph_get_next(compiled->parse_tree);
		destroy(ctx, current->data);

	}

	_graph_delete(compiled->parse_tree);
	_stack_delete(compiled->parse_stack);
	_string_delete(compiled->regex);

	destroy(ctx, compiled);

}

