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

memory.c
========================================================================


*/

void* allocate(standard_library_context* ctx, size_t size){

	return ctx->memory_allocator(size, ctx->instance_id, ctx->data);
	
}

bool destroy(standard_library_context* ctx, void* ptr){

	return ctx->memory_dealloc(ptr, ctx->instance_id, ctx->data);

}