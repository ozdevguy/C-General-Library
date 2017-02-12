/*
ozdevguy | C General Libraries

Copyright 2016 Bobby Crawford (ozdevguy)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

json_parser.c
========================================================================


*/

/* INTERNAL OPERATIONS */

json_object* int_json_parse_object(json_obj_parser* parser, json_parse_error* error);


//Eliminate whitespace before a variable name.
bool int_json_parse_var_beg_ws(json_obj_parser* parser, json_parse_error* error){

	utf8_char* current_char;

	while((current_char = _string_get_next(parser->json_string))){

		if(current_char->value != 32)
			break;

	}

	if(!current_char){

		error->code = JSON_ERROR_STRING_TERMINATED;
		error->line = parser->json_string->iter_pos - 1;
		return false;

	}

	else if(current_char->value != 34){

		error->code = JSON_ERROR_INVALID_SYNTAX;
		error->line = parser->json_string->iter_pos - 1;
		return false;
		
	}

	_string_iterator_rewind(parser->json_string);

	return true;

}

//Eliminate general whitespace.
void int_json_parse_elim_ws(json_obj_parser* parser, json_parse_error* error){

	utf8_char* current_char;

	while((current_char = _string_get_next(parser->json_string))){

		if(current_char->value != 32)
			break;

	}

	_string_iterator_rewind(parser->json_string);

}

//Return variable name.
string* int_json_parse_var_name(json_obj_parser* parser, json_parse_error* error){

	string* var_name;
	utf8_char* current_char;

	var_name = _string_new(parser->ctx);

	_string_get_next(parser->json_string);

	while((current_char = _string_get_next(parser->json_string))){

		if(current_char->value == 92)
			_string_append_fchar(var_name, _string_get_next(parser->json_string));

		else if(current_char->value == 34)
			break;

		else
			_string_append_fchar(var_name, current_char);

	}

	//Check the string.
	if(!var_name->length){

		error->code = JSON_ERROR_INVALID_NAME;
		error->line = parser->json_string->iter_pos - 1;
		_string_delete(var_name);
		return 0;

	}

	else if(!current_char){

		error->code = JSON_ERROR_STRING_TERMINATED;
		error->line = parser->json_string->iter_pos - 1;
		_string_delete(var_name);
		return 0;

	}

	return var_name;

}

//Check name-value separator.
bool int_json_parse_check_sep(json_obj_parser* parser, json_parse_error* error){

	utf8_char* current_char;
	bool separator_found = false;

	while((current_char = _string_get_next(parser->json_string))){

		if(current_char->value == 58)
			separator_found = true;

		else if(current_char->value != 32)
			break;

	}

	if(!separator_found){

		error->code = JSON_ERROR_INVALID_SEPARATOR;
		error->line = parser->json_string->iter_pos - 1;
		return false;

	}

	else if(!current_char){

		error->code = JSON_ERROR_STRING_TERMINATED;
		error->line = parser->json_string->iter_pos - 1;
		return false;

	}

	_string_iterator_rewind(parser->json_string);

	return true;

}

//Check variable data type.
uint8_t int_json_parse_var_type(json_obj_parser* parser, json_parse_error* error){

	utf8_char* current_char;

	current_char = _string_get_next(parser->json_string);
	_string_iterator_rewind(parser->json_string);

	//String data type.
	if(current_char->value == 34)
		return JSON_TYPE_STRING;

	//This is a scalar type.
	if((current_char->value > 47 && current_char->value < 58 ) || current_char->value == 46 || current_char->value == 45)
		return JSON_TYPE_SCALAR;

	//This is a character type.
	if(current_char->value == 39)
		return JSON_TYPE_CHAR;

	//This is a boolean type.
	if(current_char->value == 84 || current_char->value == 116 || current_char->value == 70 || current_char->value == 102)
		return JSON_TYPE_BOOL;

	//This is an object type.
	if(current_char->value == 123)
		return JSON_TYPE_OBJECT;

	//This is an array type.
	if(current_char->value == 91)
		return JSON_TYPE_ARRAY;

	//This is a null type.
	if(current_char->value == 78 || current_char->value == 110)
		return JSON_TYPE_NULL;

	error->code = JSON_ERROR_INVALID_TYPE;
	error->line = parser->json_string->iter_pos - 1;

	return JSON_TYPE_UNDEFINED;

}

inline json_item* int_json_parse_var_type_string(json_obj_parser* parser, json_parse_error* error){

	json_item* item;
	utf8_char* current_char;
	string* value;

	current_char = _string_get_next(parser->json_string);

	value = _string_new(parser->ctx);

	while((current_char = _string_get_next(parser->json_string))){

		if(current_char->value == 92)
			_string_append_fchar(value, _string_get_next(parser->json_string));

		else if(current_char->value == 34)
			break;

		else
			_string_append_fchar(value, current_char);

	}

	if(!current_char){

		error->code = JSON_ERROR_STRING_TERMINATED;
		error->line = parser->json_string->iter_pos - 1;
		_string_delete(value);

		return 0;

	}

	item = allocate(parser->ctx, sizeof(json_item));
	item->ctx = parser->ctx;
	item->type = JSON_TYPE_STRING;
	item->data = value;

	return item;

}

inline json_item* int_json_parse_var_type_scalar(json_obj_parser* parser, json_parse_error* error){

	size_t s;
	char* temp;
	double* d_ptr;
	long* l_ptr;

	json_item* item;
	utf8_char* current_char;
	string* value;

	bool is_float = false;
	bool invalid_char = false;

	value = _string_new(parser->ctx);

	current_char = _string_get_next(parser->json_string);

	if(current_char->value == 45)
		_string_append_fbytes(value, "-");
	else
		_string_iterator_rewind(parser->json_string);

	while((current_char = _string_get_next(parser->json_string))){

		if(current_char->value == 46 && !is_float)
			is_float = true;

		else if(current_char->value == 46)
			break;

		if((current_char->value > 47 && current_char->value < 58) || current_char->value == 46)
			_string_append_fchar(value, current_char);

		else
			break;

	}

	temp = _string_pull(value, &s);
	_string_delete(value);

	if(!current_char){

		error->code = JSON_ERROR_STRING_TERMINATED;
		error->line = parser->json_string->iter_pos - 1;
		destroy(parser->ctx, temp);
		return 0;

	}

	item = allocate(parser->ctx, sizeof(json_item));

	//Parse a new floating point number.
	if(is_float){

		d_ptr = allocate(parser->ctx, sizeof(double));
		*d_ptr = atof(temp);
		item->type = JSON_TYPE_FLOAT;
		item->data = d_ptr;

	}

	//Parse a new integer.
	else{

		l_ptr = allocate(parser->ctx, sizeof(long));
		*l_ptr = atol(temp);
		item->type = JSON_TYPE_INT;
		item->data = l_ptr;

	}

	destroy(parser->ctx, temp);
	_string_iterator_rewind(parser->json_string);

	return item;	

}

inline json_item* int_json_parse_var_type_bool(json_obj_parser* parser, json_parse_error* error){

	json_item* item;
	utf8_char* current_char;

	bool valid = false;
	size_t tpos;
	size_t fpos;

	item = allocate(parser->ctx, sizeof(json_item));
	item->type = JSON_TYPE_BOOL;

	_string_set_ci(parser->json_string, true);

	tpos = _string_position_fbytes(parser->json_string, "true", parser->json_string->iter_pos);

	if(tpos == parser->json_string->iter_pos){

		parser->json_string->iter_pos += 4;
		valid = true;
		item->data = (void*)1;

	}

	fpos = _string_position_fbytes(parser->json_string, "false", parser->json_string->iter_pos);

	if(fpos == parser->json_string->iter_pos){

		parser->json_string->iter_pos += 5;
		valid = true;
		item->data = (void*)0;

	}

	if(!valid){

		error->code = JSON_ERROR_INVALID_TYPE;
		error->line = parser->json_string->iter_pos;
		destroy(parser->ctx, item);
		return 0;

	}

	return item;

}

inline json_item* int_json_parse_var_type_object(json_obj_parser* parser, json_parse_error* error){

	json_item* item;

	item = allocate(parser->ctx, sizeof(json_item));
	item->type = JSON_TYPE_OBJECT;

	return item;

}

inline json_item* _int_json_parse_var_type_array(json_obj_parser* parser, json_parse_error* error){

	json_item* item;

	item = allocate(parser->ctx, sizeof(json_item));
	item->type = JSON_TYPE_ARRAY;

	return item;

}

//Create an item from the given type.
json_item* int_json_create_item(json_obj_parser* parser, json_parse_error* error, uint8_t var_type){

	json_item* item;

	//Now, get the data based on the variable type.
	if(var_type == JSON_TYPE_STRING){

		if(!(item = int_json_parse_var_type_string(parser, error)))
			return 0;

		return item;

	}

	if(var_type == JSON_TYPE_SCALAR){

		if(!(item = int_json_parse_var_type_scalar(parser, error)))
			return 0;

		return item;

	}

	if(var_type == JSON_TYPE_OBJECT){

		if(!(item = int_json_parse_var_type_object(parser, error)))
			return 0;

		return item;
	}

	if(var_type == JSON_TYPE_BOOL){

		if(!(item = int_json_parse_var_type_bool(parser, error)))
			return 0;

		return item;
	}

	if(var_type == JSON_TYPE_ARRAY){

		if(!(item = _int_json_parse_var_type_array(parser, error)))
			return 0;

		return item;

	}
}


//Parse the next variable...
json_item* int_json_parse_variable(json_obj_parser* parser, string** var_name, json_parse_error* error){

	uint8_t var_type;

	//First, we need to eliminate whitespace before the variable name.
	if(!int_json_parse_var_beg_ws(parser, error))
		return 0;

	//Now, we need to get our variable name.
	if(!(*var_name = int_json_parse_var_name(parser, error)))
		return 0;

	//Ensure a proper name-value separator has been used.
	if(!int_json_parse_check_sep(parser, error))
		return 0;

	//Check the variable type.
	if(!(var_type = int_json_parse_var_type(parser, error)))
		return 0;

	return int_json_create_item(parser, error, var_type);


}

uint8_t int_json_parse_check_more(json_obj_parser* parser, json_parse_error* error){

	utf8_char* current_char;

	while((current_char = _string_get_next(parser->json_string))){

		if(current_char->value == 44)
			return JSON_MORE_EXISTS;

		if(current_char->value == 125)
			return JSON_END_OBJECT;

		if(current_char->value == 93)
			return JSON_END_ARRAY;

		if(current_char->value != 32){

			error->code = JSON_ERROR_INVALID_SYNTAX;
			error->line = parser->json_string->iter_pos - 1;

			return JSON_ERROR;

		}

	}
}

//Parse/build a JSON array.
json_array* int_json_parse_array(json_obj_parser* parser, json_parse_error* error){

	standard_library_context* ctx;
	json_array* current_array;
	json_array* new_array;
	json_object* new_object;
	bool cont = true;

	//Parse an item.
	json_item* item;
	uint8_t type;
	uint8_t more_exists;

	//The first thing we need to do is check to make sure the current string character is an opening square bracket.
	if(_string_get_next(parser->json_string)->value != 91)
		return 0;

	ctx = parser->ctx;

	//Create a new array.
	current_array = allocate(ctx, sizeof(json_array));
	current_array->ctx = ctx;
	current_array->items = _vector_new(ctx, sizeof(json_item), 2);

	//Get each element of the array.
	while(1){

		//Eliminate whitespace before the next array element.
		int_json_parse_elim_ws(parser, error);

		//Get the type of the next array element.
		if((type = int_json_parse_var_type(parser, error)) == JSON_TYPE_UNDEFINED){

			_json_array_delete(current_array);
			return 0;

		}

		//Get the item.
		if(!(item = int_json_create_item(parser, error, type))){

			_json_array_delete(current_array);
			return 0;

		}

		if(item->type == JSON_TYPE_OBJECT){

			//Next, we need to do a recursive call to parse the embedded object.
			if(!(new_object = int_json_parse_object(parser, error))){

				destroy(ctx, item);
				_json_array_delete(current_array);
				return 0;

			}

			item->data = new_object;

		}

		else if(item->type == JSON_TYPE_ARRAY){

			if(!(new_array = int_json_parse_array(parser, error))){

				destroy(ctx, item);
				_json_array_delete(current_array);
				return 0;

			}

			item->data = new_array;

		}

		_vector_add(current_array->items, item);

		destroy(ctx, item);

		//Now, check to see if more variables exist in the current object.
		more_exists = int_json_parse_check_more(parser, error);

		if(more_exists == JSON_END_ARRAY)
			break;

		else if(more_exists != JSON_MORE_EXISTS){

			error->code = JSON_ERROR_INVALID_SYNTAX;
			error->line = parser->json_string->iter_pos - 1;
			_json_array_delete(current_array);
			return 0;

		}


	}

	return current_array;

}

//Parse/build a JSON object.
json_object* int_json_parse_object(json_obj_parser* parser, json_parse_error* error){
	
	standard_library_context* ctx;
	json_object* current_object;
	json_object* new_object;
	json_array* new_array;

	//Parse a variable.
	string* var_name;
	json_item* item;
	uint8_t more_exists;

	//The first thing we need to do is check to make sure the current string character is an opening curly brace.
	if(_string_get_next(parser->json_string)->value != 123){

		error->code = JSON_ERROR_INVALID_SYNTAX;
		error->line = 0;
		return 0;

	}

	ctx = parser->ctx;

	//Create a new object.
	current_object = allocate(ctx, sizeof(json_object));
	current_object->ctx = ctx;
	current_object->table = _hashmap_new(ctx, 10);
	current_object->del_objects = true;

	
	while((item = int_json_parse_variable(parser, &var_name, error))){

		if(item->type == JSON_TYPE_OBJECT){

			//Next, we need to do a recursive call to parse the embedded object.
			if(!(new_object = int_json_parse_object(parser, error))){

				destroy(ctx, item);
				_string_delete(var_name);
				_json_object_delete(current_object);
				return 0;

			}

			item->data = new_object;

		}

		else if(item->type == JSON_TYPE_ARRAY){

			if(!(new_array = int_json_parse_array(parser, error)))	{

				destroy(ctx, item);
				_string_delete(var_name);
				_json_object_delete(current_object);
				return 0;

			}			

			item->data = new_array;

		}

			_hashmap_insert(current_object->table, var_name, item);

		_string_delete(var_name);

		//Now, check to see if more variables exist in the current object.
		more_exists = int_json_parse_check_more(parser, error);

		if(more_exists == JSON_END_OBJECT)
			break;
		

		else if(more_exists != JSON_MORE_EXISTS){

			error->code = JSON_ERROR_INVALID_SYNTAX;
			error->line = parser->json_string->iter_pos - 1;
			_json_object_delete(current_object);
			return 0;

		}

	}

	if(!item){

		_json_object_delete(current_object);
		return 0;

	}

	return current_object;

}

//Parse a JSON string.
json_object* _json_build(standard_library_context* ctx, string* input, json_parse_error* error){

	json_object* json_obj;
	json_obj_parser* parser;

	if(!ctx || !input)
		return 0;

	//First, we trim the input string.
	_string_trim(input);

	//Next, we make sure the first character is an opening curly brace.
	if(_string_position_fbytes(input, "{", 0))
		return 0;

	//Reset the string iterator.
	_string_reset_iterator(input);

	//Create a new parser object.
	parser = allocate(ctx, sizeof(json_obj_parser));
	parser->ctx = ctx;
	parser->json_string = input;
	
	//Parse!
	json_obj = int_json_parse_object(parser, error);

	//Destroy the parser object.
	destroy(ctx, parser);

	return json_obj;

}

//Parse a JSON string (char/byte array).
json_object* _json_build_fbytes(standard_library_context* ctx, byte* input, json_parse_error* error){

	string* new_string;
	json_object* json_obj;

	if(!ctx || !input)
		return 0;

	new_string = _string_new_fbytes(ctx, input);
	json_obj = _json_build(ctx, new_string, error);
	_string_delete(new_string);

	return json_obj;

}

