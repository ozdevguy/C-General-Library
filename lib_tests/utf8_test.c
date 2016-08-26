#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned char byte;

#include "../lib/types/utf8/utf8.h"



void main(){

	char* test = "😒";

	utf8_char character = _utf8_fbyte(test);

	printf("Char dec value: %d\n", character.value);


	utf8_char newChar = _utf8_fint(128530);


	printf("Char: %s %s\n", (char*)character.data, (char*)newChar.data);

	return;
}