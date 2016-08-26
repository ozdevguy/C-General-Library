#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#ifndef SPECIAL_TYPES
	
	#define SPECIAL_TYPES 1
	typedef unsigned char byte;

#endif

#ifndef DICTIONARY_LIB

	#define DICTIONARY_LIB 1
	#include "dictionary_structs.c"
	#include "dictionary.c"

#endif


dictionary* dictionary_create(unsigned int);
unsigned int dictionary_size(dictionary*);
unsigned int dictionary_hash(char*);
unsigned short dictionary_destroy(dictionary*);
unsigned short dictionary_destroy_all(dictionary*);
dictionary_entry* dictionary_loop_get_entry(dictionary*);
unsigned short dictionary_insert(dictionary*, void*, unsigned int);
void* dictionary_lookup(dictionary*, uint32_t);
