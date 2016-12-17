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

stack.h
========================================================================


*/

/* STRUCTURES */

typedef struct stack stack;
typedef struct stack_item stack_item;

/* STACK */

//Create a new stack.
stack* _stack_new(standard_library_context*, size_t);

//Reset this stack.
void _stack_reset(stack*);

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

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "stack_structs.c"
	#include "stack.c"

#endif