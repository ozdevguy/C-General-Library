#include "../lib/genlib.h"

void main(){

	genlib_context* ctx;
	
	_lib_init();
	ctx = _ctx_init();

	string* myString = _string_new(ctx);
	long size;


	//utf8_char* characters = (utf8_char*)myString->data;

	_string_append_fbytes(myString, "Name: ");

	//printf("String length: %ld | Byte size: %ld\n", myString->length, myString->bytes_used);


	
	_string_append_fbytes(myString, "Bobby!");


	utf8_char* characters = (utf8_char*)myString->data;

	printf("Length: %ld\n", myString->length);

	char* str = (char*)_string_pull(myString, &size);

	destroy(ctx, (void**)&str);

	//printf("\n%s\n", str);

	string* string2 = _string_new_fbytes(ctx, ".....................");

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

	destroy(ctx, (void**)&substrchar);

	_string_set_ci(myString, true);
	_string_replace_all_fbytes(myString, "name", "Robert");
	_string_replace_all_fbytes(myString, "bob", "cat,");
	_string_replace_all_fbytes(myString, "carl", "bobbai!");
	//_string_set_ci(myString, false);

	printf("Replace single: %d\n", _string_replace_fbytes(myString, "bobbai", "dog", 16));

	str = (char*)_string_pull(myString, &size);

	printf("%s\n", str);

	destroy(ctx, (void**)&str);

	//Test string split.

	string_list* lst = _string_split(myString, 21);

	char* s1 = (char*)_string_pull(lst->s, &size);
	char* s2 = (char*)_string_pull(lst->next->s, &size);

	printf("%s\n", s1);
	printf("%s\n", s2);

	destroy(ctx, (void**)&s1);
	destroy(ctx, (void**)&s2);

	utf8_char get_char; 

	get_char = *_string_char_at(myString, 15);


	printf("Char: %s\n", get_char.data);

	//Find position.
	utf8_char tchar = _utf8_fbytes("T");


	long ctest = _string_position_fbytes(myString, "BObBaI!", 0);

	printf("Pos of str: %ld\n", ctest);


	long cpos = _string_index_of(myString, &tchar, 0);


	printf("Position of character: %ld\n", cpos);

	utf8_char tchar2 = _utf8_fbytes("☺");

	string_list* tlst = _string_split_delim(myString, tchar2, 0);

	long l;

	char* d0 = (char*)_string_pull(tlst->s, &l);
	char* d1 = (char*)_string_pull(tlst->next->s, &l);

	printf("%s\n", d0);
	printf("%s\n", d1);

	destroy(ctx, (void**)&d0);
	destroy(ctx, (void**)&d1);

	_string_delete_ll(lst);

	_string_delete_ll(tlst);
	_string_delete(myString);
	_string_delete(string2);
	_string_delete(substr);


	string* trimTest = _string_new_fbytes(ctx, "       Hello world!                  ");

	_string_uppercase(trimTest);

	_string_trim(trimTest);

	char* tt = (char*)_string_pull(trimTest, &l);

	printf("TRIMMED=====|%s|=======\n\n", tt);

	destroy(ctx, (void**)&tt);

	string_list* tlst2 = _string_split_fbytes(trimTest, " W", 0);

	if(!tlst2)
		printf("ERROR!");

	tt = (char*)_string_pull(tlst2->s, &l);
	printf("%s\n", tt);

	destroy(ctx, (void**)&tt);

	tt = (char*)_string_pull(tlst2->next->s, &l);
	printf("%s\n", tt);

	destroy(ctx, (void**)&tt);

	printf("Hash value: %ld\n", _string_hash(tlst2->s));

	_string_delete(trimTest);
	_string_delete_ll(tlst2);

	string* testRemString = _string_new_fbytes(ctx, "Hello, Bobby is here, and my name is Bobby!");
	string* remover = _string_new_fbytes(ctx, " ");

	_string_remove_all(testRemString, remover);

	size_t string_sz;
	char* ns = _string_pull(testRemString, &string_sz);

	printf("Result: %s\n", ns);

	destroy(ctx, (void**)&ns);

	string* lastString = _string_new_fbytes(ctx, "Hello there! \"It's a \\\"test\\\".\".");
	
	_string_reset_iterator(lastString);

	while(_string_has_next(lastString))
		printf("Char: %s\n", _string_get_next(lastString)->data);

	ns = _string_pull(lastString, &string_sz);

	printf("Last: %s\n", ns);

	_string_delete(lastString);
	_string_delete(testRemString);
	_string_delete(remover);
	_ctx_delete(ctx);


	return;
	
}