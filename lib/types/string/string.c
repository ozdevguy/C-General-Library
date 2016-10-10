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

string.c
========================================================================


*/

//String creators.
string* _string_new(standard_library_context*);	//COMPLETE
string* _string_new_fbytes(standard_library_context*, byte*);  //COMPLETE
void _string_delete(string*);		//COMPLETE
void _string_delete_ll(string_list*); //COMPLETE
void _string_set_ci(string*, bool);	//COMPLETE

//Append to a string.
void _string_append_fbytes(string*, byte*); //COMPLETE
void _string_append_fstring(string*, string*); //COMPLETE
void _string_append_fchar(string*, utf8_char*); //COMPLETE

//Insert substring at position.
void _string_insert(string*, string*, size_t); //COMPLETE

//Find the position of a substring within the parent string.
long _string_position_fbytes(string*, byte*, size_t); //COMPLETE
long _string_position_fstring(string*, string*, size_t); //COMPLETE

//Get pure byte array.
byte* _string_pull(string*, size_t*); //COMPLETE

//Get utf8_char array.
utf8_char* _string_pull_carr(string*, size_t*); //COMPLETE

//Replace a matching substring within the string..
bool _string_replace_all_fbytes(string*, byte*, byte*);	//COMPLETE
bool _string_replace_all_fstring(string*, string*, string*); //COMPLETE

bool _string_replace_fbytes(string*, byte*, byte*, size_t); //COMPLETE
bool _string_replace_fstring(string*, string*, string*, size_t); //COMPLETE

//Get a character at a position.
bool _string_char_at(string*, size_t, utf8_char*); //COMPLETE

//Get a substring.
string* _string_substr(string*, size_t, size_t); //COMPLETE

//Get a section of a string up to a specific character.
string_list* _string_split(string*, size_t); //COMPLETE

string_list* _string_split_delim(string*, utf8_char, size_t); //COMPLETE

//Trim spaces from beginning and end of a string.
void _string_trim(string* str); //COMPLETE

//Get a section of a string up to a specific substring.
string_list* _string_split_fbytes(string*, byte*, size_t); //COMPLETE
string_list* _string_split_fstring(string*, string*, size_t); //COMPLETE

//Convert a string to all lowercase.
void _string_lowercase(string*); //COMPLETE

//Convert a string to all uppercase.
void _string_uppercase(string*); //COMPLETE

//Get the index of a character.
long _string_index_of(string*, utf8_char*, size_t); //COMPLETE

//Check to see if two strings are equal.
bool _string_compare(string*, string*);


/* ===============CREATE AND DESTROY============= */

//Create a new string from scratch.
string* _string_new(standard_library_context* ctx){

	size_t total_bytes = 0;

	if(!ctx)
		return 0;

	total_bytes = sizeof(utf8_char) * 10;

	//Create a new string of size 10.
	string* str = allocate(ctx, sizeof(string));
	str->data = allocate(ctx, total_bytes);
	str->ctx = ctx;
	str->size = 10;

	return str;

}

//Create a new string from an existing byte array.
string* _string_new_fbytes(standard_library_context* ctx, byte* data){

	size_t i = 0, j = 0, length = 0, size = 0;
	string* str;

	if(!data)
		return 0;

	//Get the length of the string.
	while(data[i] != 0){

		utf8_char unichar = _utf8_fbytes(data + i);
		i += unichar.size;
		length++;
	}

	size = length + 10;

	str = allocate(ctx, sizeof(string));
	str->data = allocate(ctx, size * sizeof(utf8_char));
	str->length = length;
	str->size = size;
	str->ctx = ctx;

	for(i = 0; i < length; i++)
		j += _utf8_ptr_fbytes(str->data + i, data + j);

	return str;

}

//Delete a string.
void _string_delete(string* str){

	if(!str)
		return;

	if(str->data)
		destroy(str->ctx, str->data);

	destroy(str->ctx, str);

}

//Delete a string pair.
void _string_delete_ll(string_list* lst){

	string_list* tmp;
	standard_library_context* ctx;

	if(!lst)
		return;

	while(lst){

		tmp = lst->next;
		ctx = lst->s->ctx;
		_string_delete(lst->s);
		destroy(ctx, lst);
		lst = tmp;
	}

}

//Return a string as a byte array.
byte* _string_pull(string* str, size_t* length){

	size_t i, j = 0, k = 0, total = 0;
	byte* data;

	if(!str || !length)
		return 0;

	//Compute the total length of the string.
	for(i = 0; i < str->length; i++)
		total += _utf8_fbytes(str->data[i].data).size;

	//Allocate a byte array.
	data = allocate(str->ctx, total + 1);

	//Copy the data into the byte array.
	for(i = 0; i < str->length; i++){

		utf8_char unichar = str->data[i];

		for(j = 0; j < unichar.size; j++)
			data[k++] = unichar.data[j];
					
	}

	*length = total;
	return data;

}

//Return a pointer to the character array.
utf8_char* _string_pull_carr(string* str, size_t* length){

	if(!str)
		return 0;

	*length = str->length;

	return str->data;

}

void _string_set_ci(string* str, bool value){

	if(!str)
		return;

	str->case_insensitive = value;

}

/*=========== MODIFICATION FUNCTIONS ============*/

//Append to a string.
void _string_append_fbytes(string* str, byte* append){

	if(!str)
		return;

	//First, create a new string from the byte data.
	string* to_append = _string_new_fbytes(str->ctx, append);

	if(!to_append)
		return;

	_string_append_fstring(str, to_append);

	_string_delete(to_append);

}


void _string_append_fstring(string* str, string* append){

	size_t i, combined_size, new_size, new_byte_size;
	utf8_char* data;

	if(!str || !append)
		return;

	//How much space does the new string need?
	combined_size = (str->length + append->length);

	//There is enough space in the base string to append the new string.
	if(combined_size < str->size){

		for(i = 0; i < append->length; i++)
			str->data[i + str->length] = append->data[i];

		str->length += append->length;
		return;

	}

	new_size = (combined_size + 10);
	new_byte_size = new_size * sizeof(utf8_char);

	//Not enough space. Allocate a bigger string.
	data = allocate(str->ctx, new_byte_size);

	//Copy original string.
	for(i = 0; i < str->length; i++)
		data[i] = str->data[i];

	//Append the new string.
	for(i = 0; i < append->length; i++)
		data[i + str->length] = append->data[i];


	destroy(str->ctx, str->data);

	str->data = data;
	str->size = new_size;
	str->length += append->length;

}

void _string_append_fchar(string* str, utf8_char* append){

	if(!str || !append)
		return;

	_string_append_fbytes(str, append->data);

}

//Insert substring at the given position.
void _string_insert(string* str, string* insert, size_t pos){

	size_t i, new_size, new_byte_size;
	utf8_char* data;

	if(!str || !insert)
		return;

	if(pos > str->length){

		_string_append_fstring(str, insert);
		return;

	}

	new_size = (str->length + insert->length + 10);
	new_byte_size = new_size * sizeof(utf8_char);

	data = allocate(str->ctx, new_byte_size);

	//Copy section one of str.
	for(i = 0; i < pos; i++)
		data[i] = str->data[i];

	//Copy insert.
	for(i = 0; i < insert->length; i++)
		data[i + pos] = insert->data[i];

	//Copy section two of str.
	for(i = pos; i < str->length; i++)
		data[i + insert->length] = str->data[i];

	destroy(str->ctx, str->data);

	str->data = data;
	str->size = new_size;
	str->length += insert->length;

}

//Find the position of a substring within the parent string.
long _string_position_fbytes(string* str, byte* find, size_t s_pos){

	long result;

	if(!str || !find)
		return -1;

	string* new_string = _string_new_fbytes(str->ctx, find);

	result = _string_position_fstring(str, new_string, s_pos);

	_string_delete(new_string);

	return result;

}

//Find the position of a substring within the parent string.
long _string_position_fstring(string* str, string* find, size_t s_pos){

	size_t i, j;

	if(!str || !find)
		return 0;

	if(s_pos < 0 || s_pos >= str->length)
		return 0;

	for(i = s_pos; i < str->length; i++){

		for(j = 0; j < find->size; j++){

			if(!_utf8_compare(str->data + i + j, find->data + j, str->case_insensitive))
				break;

		}

		if(j == find->length)
			return i;
	
	}

	return -1;

}


//Replace the first instance of a matching substring within a string.
bool _string_replace_fbytes(string* str, byte* pattern, byte* replace, size_t s_pos){

	bool result;

	if(!str || !pattern || !replace)
		return false;

	string* pattern_string = _string_new_fbytes(str->ctx, pattern);
	string* replacement_string = _string_new_fbytes(str->ctx, replace);

	result = _string_replace_fstring(str, pattern_string, replacement_string, s_pos);

	_string_delete(pattern_string);
	_string_delete(replacement_string);

	return result;

}

bool _string_replace_fstring(string* str, string* pattern, string* replace, size_t s_pos){

	size_t i;
	long find_pos;
	string *s1 = 0, *s2 = 0;

	if(!str || !pattern || !replace)
		return false;

	if(s_pos < 0 || s_pos >= str->length)
		return false;

	//Find the first occurance of the pattern.
	find_pos = _string_position_fstring(str, pattern, s_pos);

	if(find_pos < 0)
		return false;

	if(find_pos){

		s1 = _string_substr(str, 0, find_pos - 1);
		s2 = _string_substr(str, find_pos + pattern->length, str->length - 1);

	}
	else{

		s1 = _string_new(str->ctx);
		s2 = _string_substr(str, find_pos + pattern->length, str->length - 1);

	}

	_string_append_fstring(s1, replace);
	_string_append_fstring(s1, s2);
	_string_delete(s2);

	destroy(str->ctx, str->data);
	str->data = s1->data;
	str->size = s1->size;
	str->length = s1->length;
	destroy(str->ctx, s1);

	return true;

}



//Replace all instances of a matching substring within a string.
bool _string_replace_all_fbytes(string* str, byte* pattern, byte* replace){

	string* pattern_string = _string_new_fbytes(str->ctx, pattern);
	string* replacement_string = _string_new_fbytes(str->ctx, replace);

	_string_replace_all_fstring(str, pattern_string, replacement_string);

	_string_delete(pattern_string);
	_string_delete(replacement_string);

}


bool _string_replace_all_fstring(string* str, string* pattern, string* replace){

	size_t i;
	long find_pos;
	string *s1 = 0, *s2 = 0, *tmp;

	if(!str || !pattern || !replace)
		return false;

	//Find the first occurance of the pattern.
	find_pos = _string_position_fstring(str, pattern, 0);

	//While we have a match.
	while(find_pos >= 0){

		//Get the two substrings before and after the replacement text.
		if(find_pos > 0 && !s1){

			s1 = _string_substr(str, 0, find_pos - 1);
			s2 = _string_substr(str, find_pos + pattern->length, str->length - 1);

		}
		else if(!s1){

			s1 = _string_new(str->ctx);
			s2 = _string_substr(str, find_pos + pattern->length, str->length - 1);

		}
		else{

			tmp = _string_substr(s1, 0, find_pos - 1);
			s2 = _string_substr(s1, find_pos + pattern->length, s1->length - 1);

			_string_delete(s1);

			s1 = tmp;

		}


		
		_string_append_fstring(s1, replace);
		
		_string_append_fstring(s1, s2);

		find_pos = _string_position_fstring(s1, pattern, find_pos + replace->length - 1);


		_string_delete(s2);

	}

	if(!s1)
		return false;

	destroy(str->ctx, str->data);
	str->data = s1->data;
	str->size = s1->size;
	str->length = s1->length;
	destroy(str->ctx, s1);

	return true;

}

//Get the position of a specific character.
long _string_index_of(string* str, utf8_char* unichar, size_t pos){

	size_t i;
	utf8_char* data;

	if(!str || !unichar)
		return -1;

	if(pos < 0 || pos >= str->length)
		return 1;

	for(i = pos; i < str->length; i++){

		if(_utf8_compare(unichar, str->data + i, str->case_insensitive))
			return i;

	}

	return -1;

}

//Get a character at a position.
bool _string_char_at(string* str, size_t pos, utf8_char* unichar){

	if(!str || !unichar || pos < 0)
		return false;

	if(pos >= str->length)
		return false;

	*unichar = str->data[pos];

	return true;
}

//Get a substring.
string* _string_substr(string* str, size_t s_pos, size_t e_pos){

	size_t i, new_byte_size, new_size;
	utf8_char* data;
	string* new_string;

	if(!str)
		return 0;

	if(s_pos >= str->length || e_pos < s_pos || e_pos >= str->length)
		return 0;

	new_size = e_pos - s_pos + 10;
	new_byte_size = new_size * sizeof(utf8_char);

	//Allocate a new utf8 byte array.
	data = allocate(str->ctx, new_byte_size);

	//Allocate a new string.
	new_string = allocate(str->ctx, sizeof(string));

	for(i = s_pos; i <= e_pos; i++)
		data[i - s_pos] = str->data[i];


	new_string->ctx = str->ctx;
	new_string->data = data;
	new_string->length = e_pos - s_pos + 1;
	new_string->size = new_size;

	return new_string;

}

//Split a string at the given index.
string_list* _string_split(string* str, size_t pos){

	size_t s1_size, s2_size;
	string_list* lst;
	byte* data;

	if(!str)
		return 0;

	if(pos <= 0 || pos >= str->length)
		return 0;

	lst = allocate(str->ctx, sizeof(string_list));
	lst->s = _string_substr(str, 0, pos);

	lst->next = allocate(str->ctx, sizeof(string_list));
	lst->next->s = _string_substr(str, pos + 1, str->length - 1);	

	return lst;

}


//Get a section of a string up to a specific character.
string_list* _string_split_delim(string* str, utf8_char delim, size_t s_pos){

	string_list* lst;
	long pos;

	if(!str)
		return 0;

	pos = _string_index_of(str, &delim, s_pos);

	if(pos < 0)
		return 0;

	lst = allocate(str->ctx, sizeof(string_list));
	lst->s = _string_substr(str, 0, pos - 1);

	lst->next = allocate(str->ctx, sizeof(string_list));
	lst->next->s = _string_substr(str, pos + 1, str->length - 1);

	return lst;

}

//Trim spaces of beginning and end of string.
void _string_trim(string* str){

	size_t i, s_pos = 0, e_pos = 0;
	string* trimmed;

	if(!str)
		return;

	e_pos = str->length - 1;

	for(i = 0; i < str->length; i++){

		if(str->data[i].value == 32)
			s_pos++;

		else
			break;

	}

	if(s_pos == e_pos){

		destroy(str->ctx, str->data);
		str->length = 0;
		return;

	}

	for(i = str->length - 1; i >= 0; i--){

		if(str->data[i].value == 32)
			e_pos--;

		else
			break;

	}

	if(s_pos == 0 && e_pos == str->length - 1)
		return;

	trimmed = _string_substr(str, s_pos, e_pos);

	destroy(str->ctx, str->data);
	str->data = trimmed->data;
	str->length = trimmed->length;
	str->size = trimmed->size;
	destroy(str->ctx, trimmed);

}

//Get a section of a string up to a specific substring.
string_list* _string_split_fbytes(string* str, byte* delim, size_t s_pos){

	string* delim_string;
	string_list* lst;

	if(!str || !delim)
		return 0;

	delim_string = _string_new_fbytes(str->ctx, delim);

	lst = _string_split_fstring(str, delim_string, s_pos);

	_string_delete(delim_string);


	return lst;

}

string_list* _string_split_fstring(string* str, string* delim, size_t s_pos){

	string_list* lst;
	long pos;

	if(!str || !delim)
		return 0;

	pos = _string_position_fstring(str, delim, s_pos);

	if(pos < 0)		
		return 0;

	lst = allocate(str->ctx, sizeof(string_list));
	lst->s = _string_substr(str, 0, pos - 1);

	lst->next = allocate(str->ctx, sizeof(string_list));
	lst->next->s = _string_substr(str, pos + delim->length, str->length - 1);

	return lst;

}

//Convert a string to all lowercase.
void _string_lowercase(string* str){

	size_t i;
	utf8_char* data;

	if(!str)
		return;

	for(i = 0; i < str->length; i++)
		_utf8_lower(str->data + i);


}

//Convert a string to all uppercase.
void _string_uppercase(string* str){

	size_t i;

	if(!str)
		return;

	for(i = 0; i < str->length; i++)
		_utf8_upper(str->data + i);
	
}

//Check to see if two strings are equal.
bool _string_compare(string* str1, string* str2){

	size_t i;

	if(!str1 || !str2)
		return false;

	if(str1->length != str2->length)
		return false;

	for(i = 0; i < str1->length; i++){

		if(!_utf8_compare(str1->data + i, str2->data + i, str1->case_insensitive))
			return false;

	}

	return true;

}
