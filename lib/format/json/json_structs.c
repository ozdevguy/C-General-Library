typedef struct json_object json_object;
typedef struct json_item json_item;
typedef struct json_array json_array;
typedef struct json_obj_parser json_obj_parser;
typedef struct json_parse_error json_parse_error;
typedef struct json_allocation json_allocation;

enum{JSON_TYPE_UNDEFINED, JSON_TYPE_SCALAR, JSON_TYPE_INT, JSON_TYPE_FLOAT, JSON_TYPE_BOOL, JSON_TYPE_STRING, JSON_TYPE_CHAR, JSON_TYPE_OBJECT, JSON_TYPE_ARRAY, JSON_TYPE_NULL};
enum{JSON_ERROR, JSON_OBJECT, JSON_ARRAY, JSON_ITEM, JSON_MORE_EXISTS, JSON_END_OBJECT, JSON_END_ARRAY};
enum{JSON_ERROR_STRING_TERMINATED, JSON_ERROR_INVALID_SYNTAX, JSON_ERROR_INVALID_NAME, JSON_ERROR_INVALID_SEPARATOR, JSON_ERROR_INVALID_TYPE};

//Represents a json object.
struct json_object{

	//Standard library context.
	standard_library_context* ctx;

	//Data hashmap.
	map* table;

	//JSON string.
	string* json_string;

	//Allocation vector.
	vector* allocations;

};

//Represents a JSON array.
struct json_array{

	//Standard library context.
	standard_library_context* ctx;

	//Vector of items in this array.
	vector* items;

};

//Represents an individual JSON item.
struct json_item{

	//Standard library context.
	standard_library_context* ctx;

	//Item type.
	uint8_t type;

	//Item size.
	size_t size;

	//Item pointer.
	void* data;

};

struct json_obj_parser{

	//Context.
	standard_library_context* ctx;

	//Vector of allocations.
	vector* allocations;

	//String
	string* json_string;

	//Number of concurrent stack frames for the object parser.
	size_t obj_parser_sf;

	//Number of concurrent stack frames for the array parser.
	size_t arr_parser_sf;

};

struct json_parse_error{

	//Error type.
	uint8_t code;

	//Line
	size_t line;

};

struct json_allocation{

	//Allocation type.
	uint8_t type;

	//Pointer.
	void* ptr;

};
