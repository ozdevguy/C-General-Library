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

graph.h
========================================================================


*/

//Include the queue header.
#include "queue.h"

//Include the stack header.
#include "stack.h"

//Include the map header.
#include "map.h"

//Include the list header.
#include "list.h"

//Include undirected graph header.
#ifndef STD_LIBS_CONTAINERS_GRAPH

	#define STD_LIBS_CONTAINERS_GRAPH 1
	#include "containers/graph/graph.h"

#endif