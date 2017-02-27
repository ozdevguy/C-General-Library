bool int_regex_eval(regex_analyzer*, graph_node*);

//Evaluates a regex char.
bool int_regex_char_op(regex_analyzer* analyzer, graph_node* node){

	regex_token* token;
	utf8_char* character;
	regex_capture* capture;

	token = node->data;

	if(!_string_has_next(analyzer->input))
		return false;

	character = _string_get_next(analyzer->input);

	if(character->value >= token->start && character->value <= token->end){

		if(analyzer->current_capture){

			while(analyzer->current_capture->top){

				_stack_push(analyzer->swap_stack, _stack_pop(analyzer->current_capture));
				capture = _stack_peek(analyzer->swap_stack);
				_string_append_fchar(capture->capture, character);

			}

			while(analyzer->swap_stack->top)
				_stack_push(analyzer->current_capture, _stack_pop(analyzer->swap_stack));

		}

		return true;
	}

	_string_iterator_rewind(analyzer->input);
	return false;

}

//Evaluates a regex string.
bool int_regex_string_op(regex_analyzer* analyzer, graph_node* node){

	graph_edge* edge;
	bool success = true;

	edge = node->edges;

	while(edge){

		if(!int_regex_eval(analyzer, edge->to))
			success = false;

		edge = edge->next;

	}

	return success;

}	

//Evaluate a regex bracket.
bool int_regex_bracket_op(regex_analyzer* analyzer, graph_node* node){

	bool result;
	graph_edge* edge;

	if(!node->edges)
		return false;

	result = false;
	edge = node->edges;

	while(edge){

		if(int_regex_eval(analyzer, edge->to))
			result = true;

		edge = edge->next;

	}

	return result;
}

//Evaluate a negated regex bracket.
bool int_regex_not_bracket_op(regex_analyzer* analyzer, graph_node* node){

	graph_edge* edge;

	if(!node->edges)
		return false;

	edge = node->edges;

	while(edge){

		if(int_regex_eval(analyzer, edge->to))
			return false;

		edge = edge->next;

	}

	return true;

}

//Evaluate a regex capture.
bool int_regex_capture_op(regex_analyzer* analyzer, graph_node* node){

	bool result;
	regex_capture* capture;
	graph_edge* edge;

	if(!node->edges)
		return false;

	//Create a new capture string.
	capture = allocate(analyzer->input->ctx, sizeof(regex_capture));
	capture->capture = _string_new(analyzer->input->ctx);
	capture->start = analyzer->input->iter_pos;
	_list_add(analyzer->captures, capture);
	_stack_push(analyzer->current_capture, capture);

	edge = node->edges;

	while(edge){

		if(!int_regex_eval(analyzer, edge->to)){
			
			capture = _stack_pop(analyzer->current_capture);
			_string_delete(capture->capture);
			destroy(analyzer->input->ctx, capture);
			_list_remove(analyzer->captures, analyzer->captures->used - 1);

			return false;

		}

		edge = edge->next;

	}

	//Pop the current capture off the stack.
	capture = _stack_pop(analyzer->current_capture);
	capture->end = analyzer->input->iter_pos - 1;
	return true;

}

//Evaluate a regex capture.
bool int_regex_non_capture_op(regex_analyzer* analyzer, graph_node* node){

	bool result;
	regex_capture* capture;
	graph_edge* edge;

	if(!node->edges)
		return false;

	edge = node->edges;

	while(edge){

		if(!int_regex_eval(analyzer, edge->to))
			return false;

		edge = edge->next;

	}

	return true;

}

//Evaluate zero or more times.
bool int_regex_zm_op(regex_analyzer* analyzer, graph_node* node){

	while(int_regex_eval(analyzer, node->edges->to)){

		//DO NOTHING. JUST WAIT...
	}

	return true;
}

//Evaluate one or more times.
bool int_regex_om_op(regex_analyzer* analyzer, graph_node* node){

	bool result = false;

	while(int_regex_eval(analyzer, node->edges->to))
		result = true;

	return result;

}

//Evaluates one or zero times.
bool int_regex_oz_op(regex_analyzer* analyzer, graph_node* node){

	int_regex_eval(analyzer, node->edges->to);
	return true;

}

//Evaluates a range of times.
bool int_regex_mm_op(regex_analyzer* analyzer, graph_node* node){

	int i;
	bool result = false;
	regex_token* descriptor;
	descriptor = node->data;

	for(i = 1; i <= descriptor->end; i++){

		if(i >= descriptor->start){

			if(!int_regex_eval(analyzer, node->edges->to))
				return true;

		}
		else{

			if(!int_regex_eval(analyzer, node->edges->to))
				return false;

		}

	}

	if(int_regex_eval(analyzer, node->edges->to))
		return false;

	return true;

}

bool int_regex_or_op(regex_analyzer* analyzer, graph_node* node){

	bool result1;
	bool result2;

	result1 = int_regex_eval(analyzer, node->edges->to);
	result2 = int_regex_eval(analyzer, node->edges->next->to);

	if(result1 || result2)
		return true;

	return false;

}

bool int_regex_or_sub(regex_analyzer* analyzer, graph_node* node){

	bool result;
	graph_edge* edge;

	if(!node->edges)
		return false;

	edge = node->edges;

	while(edge){

		if(!int_regex_eval(analyzer, edge->to))
			return false;

		edge = edge->next;

	}

	return true;

}

//Evaluate a regex tree node.
bool int_regex_eval(regex_analyzer* analyzer, graph_node* node){

	regex_token* current;

	if(!node)
		return false;

	current = node->data;

	switch(current->type){

		case REGEX_ROOT:
			return int_regex_string_op(analyzer, node);
		case REGEX_BRACKET:
			return int_regex_bracket_op(analyzer, node);
		case REGEX_NOT_BRACKET:
			return int_regex_not_bracket_op(analyzer, node);
		case REGEX_CAPTURE:
			return int_regex_capture_op(analyzer, node);
		case REGEX_NON_CAPTURE:
			return int_regex_non_capture_op(analyzer, node);
		case REGEX_CHAR:
			return int_regex_char_op(analyzer, node);
		case REGEX_MIN_MAX:
			return int_regex_mm_op(analyzer, node);
		case REGEX_ZERO_OR_MORE:
			return int_regex_zm_op(analyzer, node);
		case REGEX_ONE_OR_MORE:
			return int_regex_om_op(analyzer, node);
		case REGEX_ZERO_OR_ONE:
			return int_regex_oz_op(analyzer, node);
		case REGEX_OR:
			return int_regex_or_op(analyzer, node);
		case REGEX_OR_SUB:
			return int_regex_or_sub(analyzer, node);
		default:
			return false;

	}
	
}

//Destroy an analyzer + list of captures.
void int_regex_destroy_analyzer_wlist(regex_analyzer* analyzer){

	standard_library_context* ctx;
	regex_capture* current;

	ctx = analyzer->input->ctx;

	_string_delete(analyzer->input);
	_stack_delete(analyzer->current_capture);
	_stack_delete(analyzer->swap_stack);

	_list_reset_iterator(analyzer->captures);

	while(_list_has_next(analyzer->captures)){

		current = _list_get_next(analyzer->captures);
		_string_delete(current->capture);
		destroy(ctx, current);

	}

	_list_delete(analyzer->captures);
	destroy(ctx, analyzer);

}

//Destroy an analyzer - list of captures.
void int_regex_destroy_analyzer_nlist(regex_analyzer* analyzer){

	standard_library_context* ctx;

	ctx = analyzer->input->ctx;

	_string_delete(analyzer->input);
	_stack_delete(analyzer->current_capture);
	_stack_delete(analyzer->swap_stack);

	_list_reset_iterator(analyzer->captures);

	destroy(ctx, analyzer);

}

//Initialize a new regex operation.
regex_results* int_regex_match_init(regex_compiled* obj, string* input){

	standard_library_context* ctx;
	regex_analyzer* analyzer;
	regex_results* ret;
	bool result;
	int i;

	ctx = input->ctx;

	//Create a new analyzer object.
	analyzer = allocate(ctx, sizeof(regex_analyzer));
	analyzer->input = _string_new(ctx);
	analyzer->captures = _list_new(ctx, 2);
	analyzer->current_capture = _stack_new(ctx, 2);
	analyzer->swap_stack = _stack_new(ctx, 2);
	analyzer->pos = -1;

	_string_copy(analyzer->input, input);
	_string_reset_iterator(analyzer->input);

	//Start the process.

	for(i = 0; i < analyzer->input->length; i++){

		result = int_regex_eval(analyzer, obj->parse_tree->nodes);

		if(result)
			break;

		analyzer->input->iter_pos++;

	}

	if(result){

		int_regex_destroy_analyzer_nlist(analyzer);
		ret = allocate(ctx, sizeof(regex_results));
		ret->captures = analyzer->captures;
		ret->start_pos = i;

		return ret;

	}
	else{

		int_regex_destroy_analyzer_wlist(analyzer);
		return 0;

	}

}

long _regex_position(regex_compiled* regex, string* input, size_t start_pos){

	long pos;
	standard_library_context* ctx;
	regex_results* results;
	regex_capture* current;

	if(!regex || !input)
		return -1;

	ctx = input->ctx;
	
	results = int_regex_match_init(regex, input);

	if(!results)
		return -1;

	pos = results->start_pos;

	_list_reset_iterator(results->captures);

	while(_list_has_next(results->captures)){

		current = _list_get_next(results->captures);
		_string_delete(current->capture);
		destroy(ctx, current);

	}

	_list_delete(results->captures);
	destroy(ctx, results);

	return pos;

}

regex_results* _regex_results(regex_compiled* regex, string* input, size_t start_pos){

	regex_results* results;

	if(!regex || !input)
		return 0;

	results = int_regex_match_init(regex, input);

	if(!results)
		return 0;

	return results;

}	