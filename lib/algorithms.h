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

algorithms.h
========================================================================


*/

//Include foundation header.
#ifndef STD_LIBS_FOUNDATION
	
	#define STD_LIBS_FOUNDATION 1
	#include "foundation.h"

#endif

//Include list header.
#ifndef STD_LIBS_CONTAINERS_LIST
	
	#define STD_LIBS_CONTAINERS_LIST 1
	#include "containers/list/list.h"

#endif

//Include vector header.
#ifndef STD_LIBS_CONTAINERS_VECTOR

	#define STD_LIBS_CONTAINERS_VECTOR 1
	#include "containers/list/vector.h"

#endif

//Include binary heap header.
#ifndef STD_LIBS_CONTAINERS_BINARY_HEAP
	
	#define STD_LIBS_CONTAINERS_BINARY_HEAP 1
	#include "containers/heap/binary_heap.h"

#endif

//Include set header.
#ifndef STD_LIBS_CONTAINERS_SET
	
	#define STD_LIBS_CONTAINERS_SET 1
	#include "containers/set/set.h"

#endif

//And, finally, include the algorithms headers.
#ifndef STD_LIBS_ST_ALGORITHMS
	
	#define STD_LIBS_ST_ALGORITHMS 1
	#include "algorithms/algorithms.h"

#endif

#ifndef STD_LIBS_THREADED_ALGORITHMS
	
	#define STD_LIBS_THREADED_ALGORITHMS 1
	#include "thread_enhanced/algorithms/th_algorithms.h"

#endif
