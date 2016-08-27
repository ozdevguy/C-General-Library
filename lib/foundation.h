//Include system libraries header.
#ifndef SYS_LIBS
	
	#ifdef __linux__

		#define SYS_LIBS 1
		#include "sys_include.h"

	#elif _WIN32
		
		#ifdef _WIN64

			//TO DO (64 bit windows server)

		#endif

		#ifndef _WIN64

			//TO DO (32 bit windows server)

		#endif
	
	#elif __APPLE__
		
		//TO DO (Mac OS)

	#endif

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

/* OVERRIDES */
#define malloc allocate
#define calloc allocate
#define free destroy

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