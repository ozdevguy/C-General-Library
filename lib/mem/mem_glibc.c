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

mem_glibc.c | C Memory allocation overrides for systems using the GNU C library.
========================================================================

Memory management library for 
*/

typedef struct standard_library_memory_manager standard_library_memory_manager;
typedef struct free_block free_block;
typedef struct mem_serialization mem_serialization;

//Represents free blocks in the currently allocated pool of memory.
struct free_block{

	//Block address.
	void* address;

	//Size of the block.
	size_t size;

	//Next block.
	free_block* next;

};

struct mem_serialization{


};

struct standard_library_memory_manager{

	//Serialization mode?
	bool serializtion;

	//Free blocks less than 128 bytes.
	free_block* block_128;

	//Free blocks less than 256 bytes.
	free_block* block_256;

	//Free blocks less than 512 bytes.
	free_block* block_512;

	//Free blocks less than 1KB.
	free_block* block_1k;

	//Free blocks less than 4KB.
	free_block* block_4k;

	//Free blocks less than 8KB.
	free_block* block_8k;

	//Free blocks less than 16KB.
	free_block* block_16k;

	//Free blocks less than 32KB.
	free_block* block_32k;

	//Free blocks less than 64KB.
	free_block* block_64k;

	//Free blocks less than 128KB.
	free_block* block_128k;

	//Free blocks less than 256KB.
	free_block* block_256k;

	//Free blocks less than 512KB.
	free_block* block_512k;

	//Free blocks less than 1MB.
	free_block* block_1m;

	//Free blocks less than 2MB.
	free_block* block_2m;

	//Free blocks less than 3MB.
	free_block* block_3m;

	//Free blocks less than 4MB.
	free_block* block_4m;

	//Free blocks less than 8MB.
	free_block* block_8m;

	//Free blocks less than 12MB.
	free_block* block_12m;

	//Free block less than 16MB.
	free_block* block_16m;

	//Free block less than 24MB.
	free_block* block_24m;

	//Free block less than 32MB.
	free_block* block_32m;

	//Free block less than 40MB.
	free_block* block_40m;

	//Free block less than 48MB.
	free_block* block_48m;

	//Any blocks greater than 48MB...
	free_block* block_super;

};


//Set memory boundaries.
inline bool _std_managed_heap_specs(size_t ser_pool_addr, size_t ser_pool_size){

	/*
	if(!ser_pool_size || !ser_pool_addr)
		return false;

	lib_global_context->ser_pool_start = ser_pool_addr;
	lib_global_context->ser_pool_size = ser_pool_size;

	return true;
	*/

}

//Heap setup.
inline void _std_managed_heap_init(){

	/*
	size_t heap_addr, new_heap_addr;

	//Get the starting address of the heap.
	heap_addr = (size_t)sbrk(0);

	if(heap_addr >= lib_global_context->ser_pool_start){

		//lib_global_context->operation_failure(1, &lib_global_context);
		return;

	}

	//Setup the serialization pool.
	new_heap_addr = lib_global_context->ser_pool_start + lib_global_context->ser_pool_size;
	brk((void*)new_heap_addr);

	//Create a new memory manager object.
	lib_global_context->memory = (void*)new_heap_addr;

	//Move the program break past the memory manager object.
	new_heap_addr += sizeof(standard_library_memory_manager);
	brk((void*)new_heap_addr);
	*/
	

}

void int_memory_manager_init(){

	
}


//Genlib malloc override.
inline void* _std_malloc(size_t allocation_size){

	//Use C stdlib calloc.
	if(!lib_global_context->heap_management_enabled)
		return calloc(allocation_size, 1);

	

	return 0;
	
}

//Genlib calloc override.
inline void* _std_calloc(size_t ntimes, size_t size){

	//Use C stdlib calloc.
	if(!lib_global_context->heap_management_enabled)
		return calloc(size, ntimes);

	return 0;

}

//Genlib free override.
inline void _std_free(void* ptr){

	//Use C stdlib free.
	if(!lib_global_context->heap_management_enabled)
		return free(ptr);

}

//stdlib memory management override macros.
#define calloc(a,b) _std_calloc(a,b)
#define malloc(a) _std_malloc(a)
#define free(a) _std_free(a)


