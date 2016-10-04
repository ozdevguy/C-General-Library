//Include system libraries header.
#ifndef SYS_LIBS
	
	#define SYS_LIBS 1

	#ifdef __linux__

		#include "sys_include.h"
		#include "posix_thread_wrapper.h"

	#elif _WIN32
		
		#ifdef _WIN64

			//TO DO (64 bit windows server)

		#endif

		#ifndef _WIN64

			//TO DO (32 bit windows server)

		#endif
	
	#elif __APPLE__
		
		#include "sys_include.h"
		#include "posix_thread_wrapper.h"

	#elif __DITTO_COMPILER_DIRECT__
		
		//Compile for the Ditto Virtual Machine (in progress).
		#include "spec/dvmetal_sys_include.h"

	#elif __MAESTRO__
		
		//Compile for the Maestro virtual operating system.
		#include "sys_include.h"

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