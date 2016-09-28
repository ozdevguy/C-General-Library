typedef struct string string;
typedef struct string_list string_list;

struct string{

	//Standard library context.
	standard_library_context* ctx;
	
	//String data.
	utf8_char* data;

	//Case-insensitive matching.
	bool case_insensitive;

	//Number of characters in the string.
	size_t length;

	//Total number of allocated unicode characters.
	size_t size;

};

struct string_list{

	//String
	string* s;

	//Next string.
	string_list* next;

};