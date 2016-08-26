typedef struct string string;
typedef struct string_pair string_pair;

struct string{

	//String data.
	byte* data;

	//Case-insensitive matching.
	bool case_insensitive;

	//Number of characters in the string.
	size_t length;

	//Total number of allocated unicode characters.
	size_t size;

};

struct string_pair{

	//String 1.
	string* s1;

	//String 2.
	string* s2;

	//Error.
	bool error;

};