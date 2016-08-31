#include "../lib/vector.h"
#include "../lib/string.h"


void main(){


	standard_library_context ctx;
	_std_lib_default(&ctx);

	string* firstString = _string_new_fbytes(&ctx, "Hello world! ");
	string* secondString = _string_new_fbytes(&ctx, " how are you? ");
	string* thirdString = _string_new_fbytes(&ctx, "I am great!");


	vector* myVector = _vector_new(&ctx, sizeof(string), 10);

	_vector_add(myVector, firstString);
	_vector_add(myVector, secondString);
	_vector_add(myVector, thirdString);

	_vector_reset_iterator(myVector);

	while(_vector_has_next(myVector)){

		char* data;
		size_t i;

		data = _string_pull(_vector_get_next(myVector), &i);

		printf("%s", data);

		destroy(&ctx, data);


	}

	printf("\n");

	_vector_remove(myVector, 0);

	_vector_add(myVector, firstString);

	string* res = _vector_get(myVector, 1);

	char* d;
	size_t i2;

	d = _string_pull(res, &i2);

	printf("Res: %s\n", d);

	destroy(&ctx, d);

	while(_vector_has_next(myVector)){

		char* data;
		size_t i;

		data = _string_pull(_vector_get_next(myVector), &i);

		printf("%s", data);

		destroy(&ctx, data);


	}

	printf("\n");

	_string_delete(firstString);
	_string_delete(secondString);
	_string_delete(thirdString);
	_vector_delete(myVector);
	


}