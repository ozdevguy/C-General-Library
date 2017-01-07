
//Represents a json object.
struct json_object{

	//Standard library context.
	standard_library_context* ctx;

	//Data hashmap.
	map* table;

	//JSON string.
	string* json_string;

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
