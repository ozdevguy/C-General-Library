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

utf8.h
========================================================================


*/

/* STRUCTURES */

typedef struct utf8_char utf8_char;

/* UTF-8 */

utf8_char _utf8_fbytes(byte*);

size_t _utf8_ptr_fbytes(utf8_char*, byte*);

bool _utf8_compare(utf8_char*, utf8_char*, bool);

bool _utf8_compare_ci(utf8_char*, utf8_char*);

utf8_char _utf8_fint(uint32_t);

void _utf8_upper(utf8_char*);

void _utf8_lower(utf8_char*);

unsigned int _utf8_lang(utf8_char*);

#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "utf8_structs.c"
	#include "utf8.c"

#endif
