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

string_structs.c
========================================================================


*/

typedef struct string string;
typedef struct string_list string_list;

struct string{

	//Standard library context.
	standard_library_context* ctx;
	
	//String data.
	utf8_char* data;

	//Case-insensitive matching.
	bool case_insensitive;

	//Number of characters in the string.
	long length;

	//Total number of allocated unicode characters.
	long size;

};

struct string_list{

	//String
	string* s;

	//Next string.
	string_list* next;

};