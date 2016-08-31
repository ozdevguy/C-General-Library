typedef struct stack stack;
typedef struct stack_item stack_item;


//A stack entry.
struct stack_item{

	//The data.
	byte* data;

	//The size of the data.
	size_t size;

	//The type of data.
	uint8_t type;

};


//Stack object.
struct stack{

	//Standard library context.
	standard_library_context* ctx;

	//The stack array.
	stack_item* entries;

	//Size of the stack.
	size_t size;

	//Top of the stack.
	size_t top;

};