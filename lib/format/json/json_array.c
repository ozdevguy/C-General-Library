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

json_array.c
========================================================================


*/

json_array* _json_array_new(standard_library_context* ctx){

	json_array* arr;

	if(!ctx)
		return 0;

	arr = allocate(ctx, sizeof(json_array));
	arr->items = _vector_new(ctx, sizeof(json_item), 4);

	return arr;

}

void _json_array_delete(json_array* array){

	json_item* current_item;

	if(!array)
		return;

	//First, we need to iterate through the array's vector.
	_vector_reset_iterator(array->items);

	while(_vector_has_next(array->items)){

		current_item = _vector_get_next(array->items);

		if(current_item->type == JSON_TYPE_OBJECT)
			_json_object_delete(current_item->data);

		else if(current_item->type == JSON_TYPE_ARRAY)
			_json_array_delete(current_item->data);

		else if(current_item->type == JSON_TYPE_STRING)
			_string_delete(current_item->data);

		else if(current_item->type != JSON_TYPE_BOOL)
			destroy(array->ctx, (void**)&current_item->data);

	}

	//Now, delete the array containers.
	_vector_delete(array->items);
	destroy(array->ctx, (void**)&array);
}