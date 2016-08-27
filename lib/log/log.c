
enum {LOG_INFO, LOG_WARNING, LOG_ERROR, LOG_FATAL, LOG_PANIC};

void _log_warning(standard_library_context* ctx, byte* data, size_t length){

	ctx->logger(data, length, LOG_WARNING, ctx->instance_id);

}

void _log_error(standard_library_context* ctx, byte* data, size_t length){

	ctx->logger(data, length, LOG_ERROR, ctx->instance_id);

}

void _log_fatal(standard_library_context* ctx, byte* data, size_t length){

	ctx->logger(data, length, LOG_FATAL, ctx->instance_id);

}

void _log_panic(standard_library_context* ctx, byte* data, size_t length){

	ctx->logger(data, length, LOG_PANIC, ctx->instance_id);

}

void _log_info(standard_library_context* ctx, byte* data, size_t length){

	ctx->logger(data, length, LOG_PANIC, ctx->instance_id);

}