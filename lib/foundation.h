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

foundation.h | This header must be included for ALL library components.
========================================================================


*/

//Include system libraries header.
#ifndef SYS_LIBS
	
	#define SYS_LIBS 1
	
	#ifdef __linux__
	
		//This is a POSIX system, so we just need to include the normal POSIX headers.
		#include "sys_include.h"

	#elif _WIN32
		
		#ifdef _WIN64

			#include "sys/win_posix/sys_include64.h"

		#endif

		#ifndef _WIN64

			#include "sys/win_posix/sys_include32.h"

		#endif
	
	#elif __APPLE__
		
		#include "sys_include.h"

	#elif __DITTO_COMPILER_DIRECT__
		
		//Compile for the Ditto Virtual Machine (in progress).
		#include "spec/dvmetal_sys_include.h"

	#elif __MAESTRO__
		
		//Compile for the Maestro virtual operating system.
		#include "sys_include.h"

	#elif __ARDUINO__ || __EMBEDDED__
	
		//Compile for embedded systems.
		#include "embedded_threads.h"
		#include "embedded.h"
	
	#endif

	//Include standard types header.
	#ifndef STD_LIBS_TYPE_TYPES
		
		#define STD_LIBS_TYPE_TYPES 1
		#include "types/std_types.h"

	#endif

	//Include environment header.
	#ifndef STD_LIBS_ENVIRONMENT
		
		#define STD_LIBS_ENVIRONMENT 1

		//General environment.
		#include "global/environment.h"

		//Now, we include the custom memory manager and overrides.
		#include "mem_glibc.h"

	#endif

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