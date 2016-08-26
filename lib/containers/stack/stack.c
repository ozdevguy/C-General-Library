/*
<-CUSTOM HIGH-SPEED STACK->

Written by Bobby Crawford
*/

typedef struct sys_stack sys_stack;
typedef struct sys_stack_item sys_stack_item;


//A stack entry.
struct sys_stack_item{

	//The data.
	void* data;

	//The size of the data.
	unsigned int size;

	//The type of data.
	unsigned short type;

};


//Stack object.
struct sys_stack{

	//The stack array.
	sys_stack_item* entries;

	//Size of the stack.
	unsigned int size;

	//Top of the stack.
	unsigned int top;

};

static void stack_resize(sys_stack* stack){

	unsigned int new_size = stack->size * 2, i;

	sys_stack_item* entries = calloc(1, (sizeof(sys_stack_item) * new_size));

	for(i = 1; i < stack->size; i++)
		entries[i] = stack->entries[i];

	free(stack->entries);

	stack->entries = entries;
	stack->size = new_size;
}

void stack_destroy(sys_stack* stack){

	if(!stack)
		return;

	free(stack->entries);
	free(stack);

}

void stack_destroy_all(sys_stack* stack){

	if(!stack)
		return;

	int i;

	for(i = 1; i < stack->top; i++){

		if(stack->entries[i].data){
			free(stack->entries[i].data);
		}
	}

	stack_destroy(stack);

}

sys_stack* stack_create(unsigned int start_size){

	sys_stack* stack = calloc(1, sizeof(sys_stack));
	stack->entries = calloc(1, (sizeof(sys_stack_item) * start_size));

	stack->size = start_size;

	return stack;

}

void stack_push(sys_stack* stack, void* data, unsigned short type, unsigned int size){

	if(!stack)
		return;

	if(stack->top == stack->size - 1)
		stack_resize(stack);

	stack->top++;
	stack->entries[stack->top].data = data;
	stack->entries[stack->top].size = size;
	stack->entries[stack->top].type = type;

}

sys_stack_item* stack_pop(sys_stack* stack){

	if(!stack)
		return;

	if(!stack->top)
		return 0;

	sys_stack_item* item = (stack->entries + stack->top--);

	return item;

}

sys_stack_item* stack_peek(sys_stack* stack){

	if(!stack)
		return;

	if(!stack)
		return;

	if(!stack->top)
		return 0;

	sys_stack_item* item = (stack->entries + stack->top);

	return item;

}