#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#ifndef SPECIAL_TYPES
	
	#define SPECIAL_TYPES 1
	typedef unsigned char byte;

#endif

#ifndef STACK_LIB

	#define STACK_LIB 1
	#include "stack.c"

#endif