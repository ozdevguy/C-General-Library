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

string.h
========================================================================


*/

/* STRUCTURES */

typedef struct string string;
typedef struct string_list string_list;

/* STRING */

//String creators.
string* _string_new(standard_library_context*);	//COMPLETE
string* _string_new_fbytes(standard_library_context*, byte*);  //COMPLETE
void _string_delete(string*);		//COMPLETE
void _string_delete_ll(string_list*); //COMPLETE
void _string_set_ci(string*, bool);	//COMPLETE

//Clear the string (empty string).
void _string_clear(string*);

//Copy a string from one object to another.
void _string_copy(string*, string*);

//Append to a string.
void _string_append_fbytes(string*, byte*); //COMPLETE
void _string_append_fstring(string*, string*); //COMPLETE
void _string_append_fchar(string*, utf8_char*); //COMPLETE

//Insert substring at position.
void _string_insert(string*, string*, long); //COMPLETE

//Find the position of a substring within the parent string.
long _string_position_fbytes(string*, byte*, long); //COMPLETE
long _string_position_fstring(string*, string*, long); //COMPLETE

//Get pure byte array.
byte* _string_pull(string*, size_t*); //COMPLETE

//Get utf8_char array.
utf8_char* _string_pull_carr(string*, size_t*); //COMPLETE

//Remove a matching substring from within the string.
bool _string_remove_all_fbytes(string*, byte*);
bool _string_remove_fbytes(string*, byte*, long);
bool _string_remove_all(string*, string*);
bool _string_remove(string*, string*, long);

//Replace a matching substring within the string..
bool _string_replace_all_fbytes(string*, byte*, byte*);	//COMPLETE
bool _string_replace_all_fstring(string*, string*, string*); //COMPLETE

bool _string_replace_fbytes(string*, byte*, byte*, long); //COMPLETE
bool _string_replace_fstring(string*, string*, string*, long); //COMPLETE

//Get a character at a position.
utf8_char* _string_char_at(string*, size_t); //COMPLETE

//Get a substring.
string* _string_substr(string*, long, long); //COMPLETE

//Get a section of a string up to a specific character.
string_list* _string_split(string*, long); //COMPLETE

string_list* _string_split_delim(string*, utf8_char, long); //COMPLETE

//Trim spaces from beginning and end of a string.
void _string_trim(string* str); //COMPLETE

//Get a section of a string up to a specific substring.
string_list* _string_split_fbytes(string*, byte*, long); //COMPLETE
string_list* _string_split_fstring(string*, string*, long); //COMPLETE

//Convert a string to all lowercase.
void _string_lowercase(string*); //COMPLETE

//Convert a string to all uppercase.
void _string_uppercase(string*); //COMPLETE

//Get the index of a character.
long _string_index_of(string*, utf8_char*, long); //COMPLETE

//Check to see if two strings are equal.
bool _string_compare(string*, string*);

//Create a hash from the string.
size_t _string_hash(string*);

//String iterators.
void _string_reset_iterator(string*);

void _string_iterator_rewind(string*);

bool _string_has_next(string*);

utf8_char* _string_get_next(string*);

bool _string_match_regex_fbytes(string*, byte*);

bool _string_match_regex(string*, string*);


#ifndef GENLIB_LINK_OBJECT_NCOMP

	#include "string_structs.c"
	#include "string.c"

#endif