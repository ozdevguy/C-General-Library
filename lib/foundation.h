//Include system libraries header.
#ifndef SYS_LIBS
	
	#define SYS_LIBS 1
	#include "sys_include.h"

#endif

//Include standard types header.
#ifndef STD_LIBS_TYPE_TYPES
	
	#define STD_LIBS_TYPE_TYPES 1
	#include "types/std_types.h"

#endif

//Include environment header.
#ifndef STD_LIBS_ENVIRONMENT
	
	#define STD_LIBS_ENVIRONMENT 1
	#include "global/environment.h"

#endif

//Include memory managment header.
#ifndef STD_LIBS_MEMORY
	
	#define STD_LIBS_MEMORY 1
	#include "mem/memory.c"

#endif

//Include the logger header.
#ifndef STD_LIBS_LOGGER

	#define STD_LIBS_LOGGER 1
	#include "log/log.h"

#endif