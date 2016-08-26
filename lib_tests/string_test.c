#include "../lib/string.h"

void main(){



	string* myString = _string_new();
	size_t size;


	//utf8_char* characters = (utf8_char*)myString->data;

	_string_append_fbytes(myString, "Name: ");
	_string_append_fbytes(myString, "Bobby!");


	utf8_char* characters = (utf8_char*)myString->data;

	printf("Length: %ld\n", myString->length);

	char* str = (char*)_string_pull(myString, &size);

	destroy(str);

	//printf("\n%s\n", str);

	string* string2 = _string_new_fbytes(".....................");

	//_string_insert(myString, string2, 0);

	_string_append_fbytes(myString, " ☺ ");
	_string_append_fbytes(myString, "bob bob bob bob tam tam tam asdf asdf asdfg carl");

	long position = _string_position_fbytes(myString, "Name", 0);

	printf("Position: %ld\n", position);


	string* substr = _string_substr(myString, 2, 4);

	if(!substr)
		printf("Invalid substring!\n");

	char* substrchar = (char*)_string_pull(substr, &size);

	printf("%s\n", substrchar);

	printf("Length: %ld\n", substr->length);

	destroy(substrchar);

	_string_set_ci(myString, true);
	_string_replace_all_fbytes(myString, "name", "Robert");
	_string_replace_all_fbytes(myString, "bob", "cat,");
	_string_replace_all_fbytes(myString, "carl", "bobbai!");
	//_string_set_ci(myString, false);

	printf("Replace single: %d\n", _string_replace_fbytes(myString, "bobbai", "dog", 16));

	str = (char*)_string_pull(myString, &size);

	printf("%s\n", str);

	destroy(str);

	//Test string split.

	string_pair pair = _string_split(myString, 21);

	char* s1 = (char*)_string_pull(pair.s1, &size);
	char* s2 = (char*)_string_pull(pair.s2, &size);

	printf("%s\n", s1);
	printf("%s\n", s2);

	destroy(s1);
	destroy(s2);

	utf8_char get_char = _string_char_at(myString, 15);


	printf("Char: %s\n", get_char.data);

	//Find position.
	utf8_char tchar = _utf8_fbyte("T");


	long ctest = _string_position_fbytes(myString, "BObBaI!", 0);

	printf("Pos of str: %ld\n", ctest);


	long cpos = _string_index_of(myString, &tchar, 0);


	printf("Position of character: %ld\n", cpos);

	utf8_char tchar2 = _utf8_fbyte("☺");
	string_pair tpair = _string_split_delim(myString, tchar2, 0);

	size_t l;

	char* d0 = (char*)_string_pull(tpair.s1, &l);
	char* d1 = (char*)_string_pull(tpair.s2, &l);

	printf("%s\n", d0);
	printf("%s\n", d1);

	destroy(d0);
	destroy(d1);

	_string_delete_pair(&tpair);

	_string_delete_pair(&pair);
	_string_delete(myString);
	_string_delete(string2);
	_string_delete(substr);


	string* trimTest = _string_new_fbytes("       Hello world!                  ");

	_string_uppercase(trimTest);

	_string_trim(trimTest);

	char* tt = (char*)_string_pull(trimTest, &l);

	printf("TRIMMED=====|%s|=======\n\n", tt);

	destroy(tt);

	string_pair tpair2 = _string_split_fbytes(trimTest, " W", 0);

	if(tpair2.error)
		printf("ERROR!");

	tt = (char*)_string_pull(tpair2.s1, &l);
	printf("%s\n", tt);

	destroy(tt);

	tt = (char*)_string_pull(tpair2.s2, &l);
	printf("%s\n", tt);

	destroy(tt);

	_string_delete(trimTest);
	_string_delete_pair(&tpair2);


	return;
}