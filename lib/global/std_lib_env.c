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

struct standard_library_context{

	//Library instance ID.
	uint32_t instance_id;

	//Internal data.
	void* data;

	//Pointer to memory allocator (allocate(size_t total_space, uint32_t instance_id))
	void* (*memory_allocator)(size_t, uint32_t);

	//Pointer to memory de-allocator (destroy(void* pointer, uint32_t instance_id))
	bool (*memory_dealloc)(void*, uint32_t);

	//Log handler (logger(byte* message, size_t message_length, uint8_t type, uint32_t instance_id))
	void* (*logger)(byte*, size_t, uint8_t, uint32_t);

	//Thread initializer.
	bool (*create_thread)(void*(void*));

	//Operation failure function.
	//TO DO

};

/*==================DEFAULT FUNCTIONS=====================*/
void* int_std_calloc_bridge(size_t size, uint32_t instance_id){

	return calloc(size, 1);

}

bool int_std_free_bridge(void* ptr, uint32_t instance_id){

	free(ptr);
	return true;

}

void* int_std_logger(byte* data, size_t length, uint8_t type, uint32_t instance_id){

	printf("[LOG] %s\n", (char*)data);

	return 0;

}

void _std_lib_environment_min_setup(standard_library_context* ctx, uint32_t instance_id){

	ctx->instance_id = instance_id;
	ctx->memory_allocator = 0;
	ctx->memory_dealloc = 0;
	ctx->logger = 0;

}

void _std_lib_default(standard_library_context* ctx){

	ctx->instance_id = 0;
	ctx->memory_allocator = int_std_calloc_bridge;
	ctx->memory_dealloc = int_std_free_bridge;
	ctx->logger = int_std_logger;

}

void _std_lib_environment_set_memory_allocator(standard_library_context* ctx, void* (*memory_allocator)(size_t, uint32_t)){

	ctx->memory_allocator = memory_allocator;

}

void _std_lib_environment_set_memory_deallocator(standard_library_context* ctx, bool (*memory_dealloc)(void*, uint32_t)){

	ctx->memory_dealloc = memory_dealloc;

}

void _std_lib_environment_set_logger(standard_library_context* ctx, void* (*logger)(byte*, size_t, uint8_t, uint32_t)){

	ctx->logger = logger;

}