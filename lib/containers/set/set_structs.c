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

set_structs.c
========================================================================


*/

typedef struct vset_int vset_int;
typedef struct vset_config vset_config;

struct vset_int{

	//Object.
	void* obj;

	//Value
	size_t val;

};

struct vset_config{

	//Data size.
	size_t data_size;

	//Value size.
	size_t v_size;

	//Value offset.
	size_t v_offset;

};