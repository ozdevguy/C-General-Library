typedef struct regex_compiled regex_compiled;
typedef struct regex_results regex_results;
typedef struct regex_token regex_token;
typedef struct regex_analyzer regex_analyzer;
typedef struct regex_capture regex_capture;

enum{REGEX_ROOT, REGEX_BRACKET, REGEX_NOT_BRACKET, REGEX_BRACKET_END, REGEX_CAPTURE, REGEX_NON_CAPTURE, REGEX_CAPTURE_END, REGEX_MIN_MAX, REGEX_ZERO_OR_ONE, REGEX_ZERO_OR_MORE, REGEX_ONE_OR_MORE, REGEX_CHAR, REGEX_OR, REGEX_OR_SUB};

struct regex_results{

	//Starting position.
	size_t start_pos;

	//List of captures.
	list* captures;
	
};

struct regex_capture{

	//Capture string.
	string* capture;

	//Capture start position.
	size_t start;

	//Capture end position.
	size_t end;

};

struct regex_analyzer{

	//Current capture group.
	stack* current_capture;

	//Capture swap stack.
	stack* swap_stack;

	//Input string.
	string* input;

	//List of capture group strings.
	list* captures;

	//Position.
	long pos;

};



struct regex_compiled{

	//The regular expression parse tree.
	graph* parse_tree;

	//Parse stack.
	stack* parse_stack;

	//Previously popped node.
	graph_node* last_popped;

	//Original regex string.
	string* regex;

	//Successfully compiled.
	bool success;

	//Last key.
	long key;

};

struct regex_token{

	//Node type.
	uint8_t type;

	//Starting character.
	uint32_t start;

	//Ending character.
	uint32_t end;

};

