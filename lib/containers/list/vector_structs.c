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

vector_structs.c
========================================================================


*/

typedef struct vector vector;

struct vector{

	//Standard library context.
	standard_library_context* ctx;

	//Size of this vector.
	size_t size;

	//Used spaces.
	size_t used;

	//Data size.
	size_t data_size;

	//Vector iterator counter.
	size_t iterator;
	
	//Vector data.
	byte* data;

	//Extra data.
	void* ext;

};