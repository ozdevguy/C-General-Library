#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#ifndef SPECIAL_TYPES
	
	#define SPECIAL_TYPES 1
	typedef unsigned char byte;

#endif


#ifndef VECTOR_LIB

	#define VECTOR_LIB 1
	#include "vector_structs.c"
	#include "vector.c"

#endif