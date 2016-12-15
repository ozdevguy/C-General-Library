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


void* _std_malloc(size_t allocation_size){

	if(!lib_global_context.memory_allocator)
		return calloc(allocation_size, 1);

	return 0;
	
}

void* _std_calloc(size_t ntimes, size_t size){

	if(!lib_global_context.memory_allocator)
		return calloc(size, ntimes);

}

void _std_free(void* ptr){

	if(!lib_global_context.memory_dealloc)
		return free(ptr);

}

#define calloc(a,b) _std_calloc(a,b)
#define malloc(a) _std_malloc(a)
#define free(a) _std_free(a)


