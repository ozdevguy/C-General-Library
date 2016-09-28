#include "../lib/string.h"

void main(){

	standard_library_context ctx;
	_std_lib_default(&ctx);

	string* myString = _string_new(&ctx);
	size_t size;


	//utf8_char* characters = (utf8_char*)myString->data;

	_string_append_fbytes(myString, "Name: ");

	//printf("String length: %ld | Byte size: %ld\n", myString->length, myString->bytes_used);


	
	_string_append_fbytes(myString, "Bobby!");


	utf8_char* characters = (utf8_char*)myString->data;

	printf("Length: %ld\n", myString->length);

	char* str = (char*)_string_pull(myString, &size);

	destroy(&ctx, str);

	//printf("\n%s\n", str);

	string* string2 = _string_new_fbytes(&ctx, ".....................");

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

	destroy(&ctx, substrchar);

	_string_set_ci(myString, true);
	_string_replace_all_fbytes(myString, "name", "Robert");
	_string_replace_all_fbytes(myString, "bob", "cat,");
	_string_replace_all_fbytes(myString, "carl", "bobbai!");
	//_string_set_ci(myString, false);

	printf("Replace single: %d\n", _string_replace_fbytes(myString, "bobbai", "dog", 16));

	str = (char*)_string_pull(myString, &size);

	printf("%s\n", str);

	destroy(&ctx, str);

	//Test string split.

	string_list* lst = _string_split(myString, 21);

	char* s1 = (char*)_string_pull(lst->s, &size);
	char* s2 = (char*)_string_pull(lst->next->s, &size);

	printf("%s\n", s1);
	printf("%s\n", s2);

	destroy(&ctx, s1);
	destroy(&ctx, s2);

	utf8_char get_char; 

	_string_char_at(myString, 15, &get_char);


	printf("Char: %s\n", get_char.data);

	//Find position.
	utf8_char tchar = _utf8_fbytes("T");


	long ctest = _string_position_fbytes(myString, "BObBaI!", 0);

	printf("Pos of str: %ld\n", ctest);


	long cpos = _string_index_of(myString, &tchar, 0);


	printf("Position of character: %ld\n", cpos);

	utf8_char tchar2 = _utf8_fbytes("☺");

	string_list* tlst = _string_split_delim(myString, tchar2, 0);

	size_t l;

	char* d0 = (char*)_string_pull(tlst->s, &l);
	char* d1 = (char*)_string_pull(tlst->next->s, &l);

	printf("%s\n", d0);
	printf("%s\n", d1);

	destroy(&ctx, d0);
	destroy(&ctx, d1);

	_string_delete_ll(lst);

	_string_delete_ll(tlst);
	_string_delete(myString);
	_string_delete(string2);
	_string_delete(substr);


	string* trimTest = _string_new_fbytes(&ctx, "       Hello world!                  ");

	_string_uppercase(trimTest);

	_string_trim(trimTest);

	char* tt = (char*)_string_pull(trimTest, &l);

	printf("TRIMMED=====|%s|=======\n\n", tt);

	destroy(&ctx, tt);

	string_list* tlst2 = _string_split_fbytes(trimTest, " W", 0);

	if(!tlst2)
		printf("ERROR!");

	tt = (char*)_string_pull(tlst2->s, &l);
	printf("%s\n", tt);

	destroy(&ctx, tt);

	tt = (char*)_string_pull(tlst2->next->s, &l);
	printf("%s\n", tt);

	destroy(&ctx, tt);

	_string_delete(trimTest);
	_string_delete_ll(tlst2);


	return;
	
}