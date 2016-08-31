/*
<-CUSTOM HIGH-SPEED STACK->

Written by Bobby Crawford
*/

//Create a new stack.
stack* _stack_new(standard_library_context*, size_t);

//Delete a stack instance.
void _stack_delete(stack*);

//Stack deallocator.
void _stack_dealloc(void*);

//Delete a stack + all its items using a deallocator.
void _stack_delete_all(stack*, void (void*));

//Push a new item to the stack.
void _stack_push(stack*, void*, uint8_t, size_t);

//Pop an item from the stack.
stack_item _stack_pop(stack*);

//Peek at the item on top of the stack.
stack_item _stack_peek(stack*);




static void int_stack_resize(stack* st){

	size_t new_size = st->size * 2, i;

	stack_item* entries = allocate(st->ctx, (sizeof(stack_item) * new_size));

	for(i = 1; i < st->size; i++)
		entries[i] = st->entries[i];

	destroy(st->ctx, st->entries);

	st->entries = entries;
	st->size = new_size;
}

void _stack_delete(stack* st){

	if(!st)
		return;

	destroy(st->ctx, st->entries);
	destroy(st->ctx, st);

}

void _stack_dealloc(void* st){

	_stack_delete((stack*)st);
	
}

void _stack_delete_all(stack* st, void (*dealloc)(void*)){

	if(!st)
		return;

	size_t i;

	for(i = 1; i < st->top; i++){

		if(st->entries[i].data){

			dealloc(st->entries[i].data);
			destroy(st->ctx, st->entries[i].data);

		}
		
	}

	_stack_delete(st);

}

stack* _stack_new(standard_library_context* ctx, size_t start_size){

	stack* st = allocate(ctx, sizeof(stack));
	st->entries = allocate(ctx, (sizeof(stack_item) * start_size));
	st->ctx = ctx;
	st->size = start_size;

	return st;

}

void _stack_push(stack* st, void* data, uint8_t type, size_t size){

	if(!st)
		return;

	if(st->top == st->size - 1)
		int_stack_resize(st);

	st->top++;
	st->entries[st->top].data = data;
	st->entries[st->top].size = size;
	st->entries[st->top].type = type;

}

stack_item _stack_pop(stack* st){

	stack_item item;

	if(!st)
		return item;

	if(!st->top)
		return item;

	item = st->entries[st->top--];

	return item;

}

stack_item _stack_peek(stack* st){

	stack_item item;

	if(!st)
		return item;

	if(!st)
		return item;

	if(!st->top)
		return item;

	item = st->entries[st->top];

	return item;

}