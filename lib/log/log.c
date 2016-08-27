
enum {LOG_INFO, LOG_WARNING, LOG_ERROR, LOG_FATAL, LOG_PANIC};

void _log_warning(byte* data, size_t length){

	STD_LIB_STATIC_ENV.logger(data, length, LOG_WARNING, STD_LIB_STATIC_ENV.instance_id);

}

void _log_error(byte* data, size_t length){

	STD_LIB_STATIC_ENV.logger(data, length, LOG_ERROR, STD_LIB_STATIC_ENV.instance_id);

}

void _log_fatal(byte* data, size_t length){

	STD_LIB_STATIC_ENV.logger(data, length, LOG_FATAL, STD_LIB_STATIC_ENV.instance_id);

}

void _log_panic(byte* data, size_t length){

	STD_LIB_STATIC_ENV.logger(data, length, LOG_PANIC, STD_LIB_STATIC_ENV.instance_id);

}

void _log_info(byte* data, size_t length){

	STD_LIB_STATIC_ENV.logger(data, length, LOG_PANIC, STD_LIB_STATIC_ENV.instance_id);

}