/*
ozdevguy | C General Libraries

Copyright 2016 Bobby Crawford (ozdevguy)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

stack.c
========================================================================


*/

/*
<-CUSTOM HIGH-SPEED STACK->

Written by Bobby Crawford
*/


static void int_stack_resize(stack* st){

	size_t new_size = st->size * 2, i;

	byte** entries = allocate(st->ctx, (sizeof(size_t) * new_size));

	for(i = 1; i < st->size; i++)
		entries[i] = st->entries[i];

	destroy(st->ctx, (void**)&st->entries);

	st->entries = entries;
	st->size = new_size;
}

void _stack_delete(stack* st){

	if(!st)
		return;

	destroy(st->ctx, (void**)&st->entries);
	destroy(st->ctx, (void**)&st);

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

void _stack_reset(stack* st){

	if(!st)
		return;

	destroy(st->ctx, (void**)&st->entries);
	st->entries = allocate(st->ctx, (sizeof(size_t) * st->size));
	st->top = 0;

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