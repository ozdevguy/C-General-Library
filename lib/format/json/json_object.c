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

json_object.c
========================================================================


*/

/*=======JSON OBJECT FUNCTIONS======*/
json_item* int_json_retrieve_item(map* table, string* var_name, uint8_t* error){

	json_item* item;

	if(!table || !var_name || !error){

		*error = JSON_UNDEFINED;
		return 0;

	}

	item = _hashmap_lookup(table, var_name);

	printf("Item: %p\n", item);

	return item;

}

bool int_json_destroy_currrent_data(standard_library_context* ctx, json_item* item){

	if(item->type == JSON_TYPE_STRING)
		_string_delete(item->data);

	else if(item->type == JSON_TYPE_ARRAY)
		_json_array_delete(item->data);

	else if(item->type == JSON_TYPE_OBJECT)
		_json_object_delete(item->data);

	else if(item->type != JSON_TYPE_BOOL)
		destroy(ctx, item->data);

	else
		return false;

	return true;

}

//Create a new JSON object.
json_object* _json_object_new(standard_library_context* ctx){

	json_object* obj;

	if(!ctx)
		return 0;

	obj = allocate(ctx, sizeof(json_object));
	obj->table = _hashmap_new(ctx, 10);

	return obj;

}

//Add a float to a JSON object.
bool _json_add_float(json_object* obj, string* name, double value){

	json_item* item;
	double* data;

	if(!obj)
		return false;

	if(_hashmap_lookup(obj->table, name))
		return false;

	item = allocate(obj->ctx, sizeof(item));
	item->type = JSON_TYPE_FLOAT;
	item->data = allocate(obj->ctx, sizeof(double));
	data = item->data;
	*data = value;

	return true;

}

bool _json_add_float_fbytes(json_object* obj, byte* name, double value){

	string* str;
	bool result;

	if(!obj)
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_add_float(obj, str, value);
	_string_delete(str);

	return result;

}

//Add an integer to a json object.
bool _json_add_int(json_object* obj, string* name, long value){

	json_item* item;
	long* data;

	if(!obj)
		return false;

	if(_hashmap_lookup(obj->table, name))
		return false;

	item = allocate(obj->ctx, sizeof(item));
	item->type = JSON_TYPE_INT;
	item->data = allocate(obj->ctx, sizeof(long));
	data = item->data;
	*data = value;

	return true;


}

bool _json_add_int_fbytes(json_object* obj, byte* name, long value){

	string* str;
	bool result;

	if(!obj)
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_add_int(obj, str, value);
	_string_delete(str);

	return result;

}

//Add a boolean to a json object.
bool _json_add_bool(json_object* obj, string* name, bool value){

	json_item* item;

	if(!obj)
		return false;

	if(_hashmap_lookup(obj->table, name))
		return false;

	item = allocate(obj->ctx, sizeof(item));
	item->type = JSON_TYPE_BOOL;
	item->data = (void*)(size_t)value;

	return true;

}

bool _json_add_bool_fbytes(json_object* obj, byte* name, bool value){

	string* str;
	bool result;

	if(!obj)
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_add_bool(obj, str, value);
	_string_delete(str);

	return result;

}

//Add a string to a json object.
bool _json_add_string(json_object* obj, string* name, string* value){

	json_item* item;
	string* str;

	if(!obj || !name || !value)
		return false;

	if(_hashmap_lookup(obj->table, name))
		return false;

	item = allocate(obj->ctx, sizeof(item));
	item->type = JSON_TYPE_STRING;
	item->data = _string_new(obj->ctx);

	str = item->data;
	_string_copy(str, value);

	return true;

}

bool _json_add_string_fbytes(json_object* obj, byte* name, string* value){

	string* str;
	bool result;

	if(!obj || !name || !value)
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_add_string(obj, str, value);
	_string_delete(str);

	return result;

}

//Add an array to a json object.
bool _json_add_array(json_object* obj, string* name, json_array* value){

	json_item* item;

	if(!obj || !name || !value)
		return false;

	if(_hashmap_lookup(obj->table, name))
		return false;

	item = allocate(obj->ctx, sizeof(item));
	item->type = JSON_TYPE_ARRAY;
	item->data = value;

	return true;

}

bool _json_add_array_fbytes(json_object* obj, byte* name, json_array* value){

	string* str;
	bool result;

	if(!obj || !name || !value)
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_add_array(obj, str, value);
	_string_delete(str);

	return result;

}

//Add an object to a json object.
bool _json_add_object(json_object* obj, string* name, json_object* object){

	json_item* item;

	if(!obj || !name || !object)
		return false;

	if(_hashmap_lookup(obj->table, name))
		return false;

	item = allocate(obj->ctx, sizeof(item));
	item->type = JSON_TYPE_OBJECT;
	item->data = object;

	return true;

}

bool _json_add_object_fbytes(json_object* obj, byte* name, json_object* object){

	string* str;
	bool result;

	if(!obj || !name || !object)
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_add_object(obj, str, object);
	_string_delete(str);

	return result;

}

//Remove an item from the json object.
bool _json_remove(json_object* obj, string* name){

	json_item* item;

	if(!obj || !name)
		return false;

	if(!(item = _hashmap_lookup(obj->table, name)))
		return false;

	if(!int_json_destroy_currrent_data(obj->ctx, item))
		return false;

	destroy(obj->ctx, item);

	_hashmap_remove(obj->table, name);

	return true;

}

bool _json_remove_fbytes(json_object* obj, byte* name){

	string* str;
	bool result;

	if(!obj || !name)
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_remove(obj, str);
	_string_delete(str);

	return result;

}

//Check to see if a variable exists.
bool _json_exists(json_object* obj, string* name){

	if(!obj || !name)
		return false;

	if(_hashmap_lookup(obj->table, name))
		return true;

	return false;

}

bool _json_exists_fbytes(json_object* obj, byte* var_name){

	if(!obj)
		return false;

	if(_hashmap_lookup_fbytes(obj->table, var_name))
		return true;

	return false;

}

//Get the type of a variable in a JSON object.
uint8_t _json_get_type(json_object* obj, string* var_name){

	json_item* item;

	if(!obj)
		return 0;

	item = _hashmap_lookup(obj->table, var_name);

	if(!item)
		return 0;

	return item->type;

}

uint8_t _json_get_type_fbytes(json_object* obj, byte* input){

	string* input_str;
	json_item* item;

	if(!obj || !input)
		return 0;

	item = _hashmap_lookup_fbytes(obj->table, input);

	return item->type;

}

//Get a floating point variable.
double _json_get_float(json_object* obj, string* var_name, uint8_t* error){

	json_item* item;

	if(!obj || !var_name || !error){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(!(item = int_json_retrieve_item(obj->table, var_name, error))){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(item->type != JSON_TYPE_FLOAT){

		*error = JSON_ERROR_INVALID_TYPE;
		return 0;
	
	}

	return *((double*)item->data);

}

double _json_get_float_fbytes(json_object* obj, byte* var_name, uint8_t* error){

	string* str;
	double result;

	if(!obj){

		*error = JSON_UNDEFINED;
		return 0;

	}

	str = _string_new_fbytes(obj->ctx, var_name);
	result = _json_get_float(obj, str, error);
	_string_delete(str);

	return result;

}

//Get an integer variable.
long _json_get_int(json_object* obj, string* var_name, uint8_t* error){

	json_item* item;

	if(!obj || !var_name || !error){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(!(item = int_json_retrieve_item(obj->table, var_name, error))){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(item->type != JSON_TYPE_INT){

		*error = JSON_ERROR_INVALID_TYPE;
		return 0;
	
	}

	return *((int*)item->data);

}

long _json_get_int_fbytes(json_object* obj, byte* var_name, uint8_t* error){

	string* str;
	long result;

	if(!obj){

		*error = JSON_UNDEFINED;
		return 0;

	}

	str = _string_new_fbytes(obj->ctx, var_name);
	result = _json_get_int(obj, str, error);
	_string_delete(str);

	return result;

}

//Get a string variable.
string* _json_get_string(json_object* obj, string* var_name, uint8_t* error){

	json_item* item;

	if(!obj || !var_name || !error){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(!(item = int_json_retrieve_item(obj->table, var_name, error))){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(item->type != JSON_TYPE_STRING){

		*error = JSON_ERROR_INVALID_TYPE;
		return 0;
	
	}

	return item->data;

}

string* json_get_string_fbytes(json_object* obj, byte* var_name, uint8_t* error){

	string* str;
	string* result;

	if(!obj){

		*error = JSON_UNDEFINED;
		return 0;

	}

	str = _string_new_fbytes(obj->ctx, var_name);
	result = _json_get_string(obj, str, error);
	_string_delete(str);

	return result;

}

//Get a boolean variable.
bool _json_get_bool(json_object* obj, string* var_name, uint8_t* error){

	json_item* item;

	if(!obj || !var_name || !error){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(!(item = int_json_retrieve_item(obj->table, var_name, error))){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(item->type != JSON_TYPE_BOOL){

		*error = JSON_ERROR_INVALID_TYPE;
		return 0;
	
	}

	return (size_t)item->data;

}

bool _json_get_bool_fbytes(json_object* obj, byte* var_name, uint8_t* error){

	string* str;
	bool result;

	if(!obj){

		*error = JSON_UNDEFINED;
		return 0;

	}

	str = _string_new_fbytes(obj->ctx, var_name);
	result = _json_get_bool(obj, str, error);
	_string_delete(str);

	return result;

}

//Get an array.
json_array* _json_get_array(json_object* obj, string* var_name, uint8_t* error){

	json_item* item;

	if(!obj || !var_name || !error){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(!(item = int_json_retrieve_item(obj->table, var_name, error))){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(item->type != JSON_TYPE_ARRAY){

		*error = JSON_ERROR_INVALID_TYPE;
		return 0;
	
	}

	return item->data;

}

json_array* _json_get_array_fbytes(json_object* obj, byte* var_name, uint8_t* error){

	string* str;
	json_array* result;

	if(!obj){

		*error = JSON_UNDEFINED;
		return 0;

	}

	str = _string_new_fbytes(obj->ctx, var_name);
	result = _json_get_array(obj, str, error);
	_string_delete(str);

	return result;

}

//Get an object.
json_object* _json_get_object(json_object* obj, string* var_name, uint8_t* error){

	json_item* item;

	if(!obj || !var_name || !error){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(!(item = int_json_retrieve_item(obj->table, var_name, error))){

		*error = JSON_UNDEFINED;
		return 0;

	}

	if(item->type != JSON_TYPE_OBJECT){

		*error = JSON_ERROR_INVALID_TYPE;
		return 0;
	
	}

	return item->data;

}

json_object* _json_get_object_fbytes(json_object* obj, byte* var_name, uint8_t* error){

	string* str;
	json_object* result;

	if(!obj){

		*error = JSON_UNDEFINED;
		return 0;

	}

	str = _string_new_fbytes(obj->ctx, var_name);
	result = _json_get_object(obj, str, error);
	_string_delete(str);

	return result;

}

//Set a value to a floating point number.
bool _json_set_float(json_object* obj, string* name, double value){

	json_item* item;
	double* ptr;

	if(!obj || !name )
		return false;

	if(!(item = _hashmap_lookup(obj->table, name)))
		return false;

	if(!int_json_destroy_currrent_data(obj->ctx, item))
		return false;

	item->type = JSON_TYPE_FLOAT;
	item->data = allocate(obj->ctx, sizeof(double));
	ptr = item->data;
	*ptr = value;

	return true;

}

bool _json_set_float_fbytes(json_object* obj, byte* name, double value){

	string* str;
	bool result;

	if(!obj || !name )
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_set_float(obj, str, value);
	_string_delete(str);

	return result;

}

//Set a value to an integer.
bool _json_set_int(json_object* obj, string* name, long value){

	json_item* item;
	long* ptr;

	if(!obj || !name )
		return false;

	if(!(item = _hashmap_lookup(obj->table, name)))
		return false;

	if(!int_json_destroy_currrent_data(obj->ctx, item))
		return false;

	item->type = JSON_TYPE_INT;
	item->data = allocate(obj->ctx, sizeof(long));
	ptr = item->data;
	*ptr = value;

	return true;

}

bool _json_set_int_fbytes(json_object* obj, byte* name, long value){

	string* str;
	bool result;

	if(!obj || !name )
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_set_int(obj, str, value);
	_string_delete(str);

	return result;
	
}

//Set a value to a bool.
bool _json_set_bool(json_object* obj, string* name, bool value){

	json_item* item;

	if(!obj || !name )
		return false;

	if(!(item = _hashmap_lookup(obj->table, name)))
		return false;

	if(!int_json_destroy_currrent_data(obj->ctx, item))
		return false;

	item->type = JSON_TYPE_BOOL;
	item->data = (void*)(size_t)value;

	return true;

}

bool _json_set_bool_fbytes(json_object* obj, byte* name, bool value){

	string* str;
	bool result;

	if(!obj || !name )
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_set_bool(obj, str, value);
	_string_delete(str);

	return result;
	
}

//Set a value to a string.
bool _json_set_string(json_object* obj, string* name, string* value){

	json_item* item;
	string* ptr;

	if(!obj || !name )
		return false;

	if(!(item = _hashmap_lookup(obj->table, name)))
		return false;

	if(!int_json_destroy_currrent_data(obj->ctx, item))
		return false;

	item->type = JSON_TYPE_STRING;
	item->data = _string_new(obj->ctx);
	_string_copy(item->data, value);

	return true;

}

bool _json_set_string_fbytes(json_object* obj, byte* name, string* value){

	string* str;
	bool result;

	if(!obj || !name )
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_set_string(obj, str, value);
	_string_delete(str);

	return result;
	
}

//Set a value to an object.
bool _json_set_object(json_object* obj, string* name, json_object* object){

	json_item* item;

	if(!obj || !name )
		return false;

	if(!(item = _hashmap_lookup(obj->table, name)))
		return false;

	if(!int_json_destroy_currrent_data(obj->ctx, item))
		return false;

	item->type = JSON_TYPE_OBJECT;
	item->data = object;

	return true;

}

bool _json_set_object_fbytes(json_object* obj, byte* name, json_object* object){

	string* str;
	bool result;

	if(!obj || !name )
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_set_object(obj, str, object);
	_string_delete(str);

	return result;
	
}

//Set a value to an integer.
bool _json_set_array(json_object* obj, string* name, json_array* arr){

	json_item* item;

	if(!obj || !name )
		return false;

	if(!(item = _hashmap_lookup(obj->table, name)))
		return false;

	if(!int_json_destroy_currrent_data(obj->ctx, item))
		return false;

	item->type = JSON_TYPE_ARRAY;
	item->data = arr;

	return true;

}

bool _json_set_array_fbytes(json_object* obj, byte* name, json_array* array){

	string* str;
	bool result;

	if(!obj || !name )
		return false;

	str = _string_new_fbytes(obj->ctx, name);
	result = _json_set_array(obj, str, array);
	_string_delete(str);

	return result;
	
}

//Delete an entire JSON object.
void _json_object_delete(json_object* object){

	json_item* current_item;

	if(!object)
		return;

	//First, we need to iterate throught the object's hash table.
	_hashmap_reset_iterator(object->table);

	while(_hashmap_has_next(object->table)){

		current_item = _hashmap_get_next(object->table);

		if(current_item->type == JSON_TYPE_OBJECT)
			_json_object_delete(current_item->data);

		else if(current_item->type == JSON_TYPE_ARRAY)
			_json_array_delete(current_item->data);

		else if(current_item->type == JSON_TYPE_STRING)
			_string_delete(current_item->data);

		else if(current_item->type != JSON_TYPE_BOOL)
			destroy(object->ctx, current_item->data);

		destroy(object->ctx, current_item);

	}

	//Now, delete the object containers.
	_hashmap_delete(object->table);
	destroy(object->ctx, object);

}


