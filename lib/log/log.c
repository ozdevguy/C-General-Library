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

log.c
========================================================================


*/

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

	ctx->logger(data, length, LOG_INFO, ctx->instance_id);

}