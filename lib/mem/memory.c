void* allocate(standard_library_context* ctx, size_t size){

	return ctx->memory_allocator(size, ctx->instance_id);
	
}

bool destroy(standard_library_context* ctx, void* ptr){

	return ctx->memory_dealloc(ptr, ctx->instance_id);

}