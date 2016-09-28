typedef struct stack stack;
typedef struct stack_item stack_item;

//Stack object.
struct stack{

	//Standard library context.
	standard_library_context* ctx;

	//The stack array.
	byte** entries;

	//Size of the stack.
	size_t size;

	//Top of the stack.
	size_t top;

};