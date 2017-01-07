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

json.h
========================================================================


*/
typedef struct json_object json_object;
typedef struct json_item json_item;
typedef struct json_array json_array;
typedef struct json_obj_parser json_obj_parser;
typedef struct json_parse_error json_parse_error;
typedef struct json_allocation json_allocation;

enum{JSON_UNDEFINED, JSON_ERROR_INDEX_OOB};
enum{JSON_TYPE_UNDEFINED, JSON_TYPE_SCALAR, JSON_TYPE_INT, JSON_TYPE_FLOAT, JSON_TYPE_BOOL, JSON_TYPE_STRING, JSON_TYPE_CHAR, JSON_TYPE_OBJECT, JSON_TYPE_ARRAY, JSON_TYPE_NULL};
enum{JSON_ERROR, JSON_OBJECT, JSON_ARRAY, JSON_STRING, JSON_ITEM, JSON_MORE_EXISTS, JSON_END_OBJECT, JSON_END_ARRAY};
enum{JSON_ERROR_STRING_TERMINATED, JSON_ERROR_INVALID_SYNTAX, JSON_ERROR_INVALID_NAME, JSON_ERROR_INVALID_SEPARATOR, JSON_ERROR_INVALID_TYPE};

//Create a new JSON object from source.
json_object* _json_build(standard_library_context*, string*, json_parse_error*);
json_object* _json_build_fbytes(standard_library_context*, byte*, json_parse_error*);

//JSON Functions.

/* JSON OBJECT */

//Create a new json object.
json_object* _json_object_new(standard_library_context*); //FINISHED

//Add a float to a json object.
bool _json_add_float(json_object*, string*, double); //FINISHED

bool _json_add_float_fbytes(json_object*, byte*, double); //FINISHED

//Add an integer to a json object.
bool _json_add_int(json_object*, string*, long); //FINISHED

bool _json_add_int_fbytes(json_object*, byte*, long); //FINISHED

//Add a boolean to a json object.
bool _json_add_bool(json_object*, string*, bool); //FINISHED

bool _json_add_bool_fbytes(json_object*, byte*, bool); //FINISHED

//Add a string to a json object.
bool _json_add_string(json_object*, string*, string*); //FINISHED

bool _json_add_string_fbytes(json_object*, byte*, string*); //FINISHED

//Add an array to a json object.
bool _json_add_array(json_object*, string*, json_array*); //FINISHED

bool _json_add_array_fbytes(json_object*, byte*, json_array*); //FINISHED

//Add an object to a json object.
bool _json_add_object(json_object*, string*, json_object*); //FINISHED

bool _json_add_object_fbytes(json_object*, byte*, json_object*); //FINISHED

//Remove a variable from the JSON object.
bool _json_remove(json_object*, string*); //FINISHED

bool _json_remove_fbytes(json_object*, byte*); //FINISHED

//Check to see if a variable exists.
bool _json_exists(json_object*, string*); //FINISHED

bool _json_exists_fbytes(json_object*, byte*); //FINISHED.

//Get the type of a variable.
uint8_t _json_get_type(json_object*, string*); //FINISHED.
 
uint8_t _json_get_type_fbytes(json_object*, byte*); //FINISHED.

//Get a floating point value.
double _json_get_float(json_object*, string*, uint8_t*); //FINISHED.

double _json_get_float_fbytes(json_object*, byte*, uint8_t*); //FINISHED.

//Get an integer value.
long _json_get_int(json_object*, string*, uint8_t*); //FINISHED

long _json_get_int_fbytes(json_object*, byte*, uint8_t*); //FINISHED

//Get a string object.
string* _json_get_string(json_object*, string*, uint8_t*); //FINISHED

string* _json_get_string_fbytes(json_object*, byte*, uint8_t*); //FINISHED

//Get a boolean value.
bool _json_get_bool(json_object*, string*, uint8_t*); //FINISHED

bool _json_get_bool_fbytes(json_object*, byte*, uint8_t*); //FINISHED

//Get an array object.
json_array* _json_get_array(json_object*, string*, uint8_t*); //FINISHED

json_array* _json_get_array_fbytes(json_object*, byte*, uint8_t*); //FINISHED

//Get an object.
json_object* _json_get_object(json_object*, string*, uint8_t*); //FINISHED

json_object* _json_get_object_fbytes(json_object*, byte*, uint8_t*); //FINISHED

//Set a value to a floating point number.
bool _json_set_float(json_object*, string*, double); //FINISHED

bool _json_set_float_fbytes(json_object*, byte*, double); //FINISHED

//Set a value to an integer.
bool _json_set_int(json_object*, string*, long); //FINISHED

bool _json_set_int_fbytes(json_object*, byte*, long); //FINISHED

//Set a value to a bool.
bool _json_set_bool(json_object*, string*, bool); //FINISHED

bool _json_set_bool_fbytes(json_object*, byte*, bool); //FINISHED

//Set a value to a string.
bool _json_set_string(json_object*, string*, string*); //FINISHED

bool _json_set_string_fbytes(json_object*, byte*, string*); //FINISHED

//Set a value to an object.
bool _json_set_object(json_object*, string*, json_object*); //FINISHED

bool _json_set_object_fbytes(json_object*, byte*, json_object*); //FINISHED

//Set a value to an array. 
bool _json_set_array(json_object*, string*, json_array*); //FINISHED

bool _json_set_array_fbytes(json_object*, byte*, json_array*); //FINISHED

//Pull a JSON string from an object.
string* _json_pull(json_object*);

//Delete an object in memory.
void _json_object_delete(json_object*); //FINISHED

/* JSON ARRAY */

//Create a new JSON array.
json_array* _json_array_new(standard_library_context*); //FINISHED

//Add a float to a JSON array.
bool _json_array_add_float(json_array*, double);

//Add an integer to a JSON array.
bool _json_array_add_int(json_array*, long);

//Add a boolean to a JSON array.
bool _json_array_add_bool(json_array*, bool);

//Add a string to a JSON array.
bool _json_array_add_string(json_array*, string*);

//Add an array to a JSON array.
bool _json_array_add_array(json_array*, json_array*);

//Add an object to a JSON array.
bool _json_array_add_object(json_array*, json_object*);

//Get the length of a JSON array.
size_t _json_array_length(json_array*);

//Get the type of a JSON array item (array, index, error).
uint8_t _json_array_get_type(json_array*, size_t, uint8_t*);

//Get a floating point value.
double _json_array_get_float(json_array*, size_t, uint8_t*);

//Get an integer value.
long _json_array_get_int(json_array*, size_t, uint8_t*);

//Get a string object.
string* _json_array_get_string(json_array*, size_t, uint8_t*);

//Get a boolean value.
bool _json_array_get_bool(json_array*, size_t, uint8_t*);

//Get an array object.
json_array* _json_array_get_array(json_array*, size_t, uint8_t*);

//Get an object.
json_object* _json_array_get_object(json_array*, size_t, uint8_t*);

//Remove an element from the array.
size_t _json_array_remove(json_array*, size_t);

//Set an item in an array to a float.
bool _json_array_set_float(json_array*, size_t, double);

//Set an item in an array to an integer.
bool _json_array_set_int(json_array*, size_t, long);

//Set an item in an array to a bool.
bool _json_array_set_bool(json_array*, size_t, bool);

//Set an item in an array to a string.
bool _json_array_set_string(json_array*, size_t, string*);

//Set an item in an array to an object.
bool _json_array_set_object(json_array*, size_t, json_object*);

//Set an item in an array to another array.
bool _json_array_set_array(json_array*, size_t, json_array*);

//JSON array reset iterator.
void _json_array_reset_iterator(json_array*);

//JSON has next?
bool _json_array_has_next(json_array*);

//JSON array get next.
json_item* _json_array_get_next(json_array*);

//Delete an array in memory.
void _json_array_delete(json_array*);


#include "json_structs.c"
#include "json_object.c"
#include "json_array.c"
#include "json_parser.c"