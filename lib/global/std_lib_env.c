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

std_lib_env.c
========================================================================

*/

//Library override definitions.
void* _std_calloc(size_t, size_t);
void _std_free(void*);

typedef struct standard_library_context standard_library_context;
typedef struct standard_library_context genlib_env_context;

struct standard_library_context{

	//Library instance ID.
	uint32_t instance_id;

	//Internal data.
	void* data;

	//Heap management enabled?
	bool heap_management_enabled;

	//Serialization pool starting address.
	size_t ser_pool_start;

	//Serialization pool size.
	size_t ser_pool_size;

	//Memory data.
	void* memory;

	//Pointer to memory allocator.
	void* (*memory_allocator)(size_t, standard_library_context*);

	//Pointer to memory de-allocator.
	bool (*memory_dealloc)(void*, standard_library_context*);

	//Log handler (logger(byte* message, size_t message_length, uint8_t type, standard_library_context* ctx))
	void* (*logger)(byte*, size_t, uint8_t, standard_library_context*);

	//Thread initializer.
	bool (*create_thread)(void*(void*));

	//Operation failure function.
	void (*operation_failure)(uint8_t, standard_library_context*);

};

//Global context.
standard_library_context lib_global_context;

//Global context pointer.
standard_library_context* lib_global_context_ext;

//Sync contexts.
void std_lib_sync(standard_library_context* ctx){

	if(!ctx)
		return;

	lib_global_context_ext = ctx;

}

/*==================DEFAULT FUNCTIONS=====================*/
void* int_std_calloc_bridge(size_t size, standard_library_context* ctx){

	void* ptr = _std_calloc(size, 1);

	if(!ptr)
		ctx->operation_failure(1, ctx);

	return ptr;

}

bool int_std_free_bridge(void* ptr, standard_library_context* ctx){

	_std_free(ptr);
	return true;

}

void int_operation_failure(uint8_t type, standard_library_context* ctx){

	if(type == 1)
		printf("[LOG] C General Library | The process has been killed due to a memory allocation failure.\n");
	
	else if(type == 2)
		printf("[LOG] C General Library | The process has been killed due to a memory release failure.\n");
	
	else
		printf("[LOG] C General Library | The process has been killed due to a general failure.\n");

	exit(0);

}

void* int_std_logger(byte* data, size_t length, uint8_t type, standard_library_context* ctx){

	printf("[LOG] %s\n", (char*)data);

	return 0;

}

void _std_lib_environment_min_setup(standard_library_context* ctx, uint32_t instance_id){

	ctx->instance_id = instance_id;
	ctx->memory_allocator = 0;
	ctx->memory_dealloc = 0;
	ctx->logger = 0;

}

//Setup a new standard library context without the managed heap.
void _std_lib_default(standard_library_context* ctx){

	ctx->instance_id = 0;
	ctx->memory_allocator = int_std_calloc_bridge;
	ctx->memory_dealloc = int_std_free_bridge;
	ctx->logger = int_std_logger;
	ctx->operation_failure = int_operation_failure;
	lib_global_context.heap_management_enabled = false;

}

//Setup a new standard library context with managed heap.
void _std_lib_managed(standard_library_context* ctx){

	ctx->instance_id = 0;
	ctx->memory_allocator = int_std_calloc_bridge;
	ctx->memory_dealloc = int_std_free_bridge;
	ctx->logger = int_std_logger;
	ctx->operation_failure = int_operation_failure;
	lib_global_context.heap_management_enabled = true;

}

void _std_lib_environment_set_memory_allocator(standard_library_context* ctx, void* (*memory_allocator)(size_t, standard_library_context*)){

	ctx->memory_allocator = memory_allocator;

}

void _std_lib_environment_set_memory_deallocator(standard_library_context* ctx, bool (*memory_dealloc)(void*, standard_library_context*)){

	ctx->memory_dealloc = memory_dealloc;

}

void _std_lib_environment_set_logger(standard_library_context* ctx, void* (*logger)(byte*, size_t, uint8_t, standard_library_context*)){

	ctx->logger = logger;

}