typedef struct regex_compiled regex_compiled;
typedef struct regex_results regex_results;
typedef struct regex_node_descriptor regex_node_descriptor;

enum{REGEX_ROOT, REGEX_BRACKET, REGEX_BRACKET_END, REGEX_CAPTURE, REGEX_CAPTURE_END, REGEX_NOT, REGEX_ZERO_OR_ONE, REGEX_ZERO_OR_MORE, REGEX_ONE_OR_MORE, REGEX_STRING_START, REGEX_STRING_END, REGEX_TERMINAL_VAL, REGEX_RANGE, REGEX_CHAR, REGEX_OR, REGEX_OR_SUB};

struct regex_analyzer{

	//List of capture group strings.
	list* captures;

	//Stack for use by capture group.
	stack* capture_group;

	//Are we currently within the confines of square brackets?
	bool in_brackets;


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

struct regex_node_descriptor{

	//Node type.
	uint8_t type;

	//Starting character.
	uint32_t start;

	//Ending character.
	uint32_t end;

};

