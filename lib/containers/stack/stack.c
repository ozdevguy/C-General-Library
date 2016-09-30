/*
<-CUSTOM HIGH-SPEED STACK->

Written by Bobby Crawford
*/

//Create a new stack.
stack* _stack_new(standard_library_context*, size_t);

//Delete a stack instance.
void _stack_delete(stack*);

//Delete a stack + all its items using a deallocator.
void _stack_delete_all(stack*, void (void*));

//Push a new item to the stack.
void _stack_push(stack*, void*);

//Pop an item from the stack.
void* _stack_pop(stack*);

//Peek at the item on top of the stack.
void* _stack_peek(stack*);




static void int_stack_resize(stack* st){

	size_t new_size = st->size * 2, i;

	byte** entries = allocate(st->ctx, (sizeof(size_t) * new_size));

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

void _stack_delete_all(stack* st, void (*dealloc)(void*)){

	size_t i;

	if(!st)
		return;

	for(i = 0; i < st->top; i++){

		dealloc(st->entries[i]);
		
	}

	_stack_delete(st);

}

stack* _stack_new(standard_library_context* ctx, size_t start_size){

	stack* st = allocate(ctx, sizeof(stack));
	st->entries = allocate(ctx, (sizeof(size_t) * start_size));
	st->ctx = ctx;
	st->size = start_size;

	return st;

}

void _stack_push(stack* st, void* data){

	if(!st)
		return;

	if(st->top == st->size - 1)
		int_stack_resize(st);

	st->top++;
	st->entries[st->top] = data;

}

void* _stack_pop(stack* st){

	if(!st)
		return 0;

	if(!st->top)
		return 0;

	return (void*)(st->entries[st->top--]);

}

void* _stack_peek(stack* st){

	if(!st)
		return 0;

	if(!st->top)
		return 0;

	return (void*)(st->entries[st->top]);


}