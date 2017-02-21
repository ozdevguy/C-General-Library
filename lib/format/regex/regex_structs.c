typedef struct regex_compiled regex_compiled;
typedef struct regex_results regex_results;
typedef struct regex_node_descriptor regex_node_descriptor;

enum{REGEX_ROOT, REGEX_BRACKET, REGEX_CAPTURE, REGEX_NOT, REGEX_ZERO_OR_ONE, REGEX_ZERO_OR_MORE, REGEX_ONE_OR_MORE, REGEX_STRING_START, REGEX_STRING_END, REGEX_TERMINAL_VAL, REGEX_RANGE, REGEX_CHAR};

struct regex_results{


};

struct regex_compiled{

	//The regular expression parse tree.
	graph* parse_tree;

	//Original regex string.
	string* regex;

	//Current node.
	graph_node* parent_node;

	//Previous node.
	graph_node* child_node;

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

