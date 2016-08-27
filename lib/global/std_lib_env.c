struct std_lib_env{

	//Library instance ID.
	uint32_t instance_id;

	//Pointer to memory allocator (allocate(size_t total_space, uint32_t instance_id))
	void* (*memory_allocator)(size_t, uint32_t);

	//Pointer to memory de-allocator (destroy(void* pointer, uint32_t instance_id))
	bool (*memory_dealloc)(void*, uint32_t);

	//Log handler (logger(byte* message, size_t message_length, uint8_t type, uint32_t instance_id))
	void* (*logger)(byte*, size_t, uint8_t, uint32_t);



};

uint32_t _std_lib_environment_instance(){

	return STD_LIB_STATIC_ENV.instance_id;

}

void _std_lib_environment_setup(uint32_t instance_id){

	STD_LIB_STATIC_ENV.instance_id = instance_id;
	STD_LIB_STATIC_ENV.memory_allocator = 0;
	STD_LIB_STATIC_ENV.memory_dealloc = 0;
	STD_LIB_STATIC_ENV.logger = 0;

}

void _std_lib_environment_set_memory_allocator(void* (*memory_allocator)(size_t, uint32_t)){

	STD_LIB_STATIC_ENV.memory_allocator = memory_allocator;

}

void _std_lib_environment_set_memory_deallocator(bool (*memory_dealloc)(void*, uint32_t)){

	STD_LIB_STATIC_ENV.memory_dealloc = memory_dealloc;

}

void _std_lib_environment_set_logger(void* (*logger)(byte*, size_t, uint8_t, uint32_t)){

	STD_LIB_STATIC_ENV.logger = logger;

}