void* allocate(size_t size){

	void* ptr = calloc(size, 1);
	
}

bool destroy(void* ptr){

	free(ptr);

}