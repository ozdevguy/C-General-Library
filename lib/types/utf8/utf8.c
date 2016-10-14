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

utf8.c
========================================================================


*/

//Get utf8 character size.
static uint8_t int_utf8_sz(byte b0){

	byte b = (b0 & 128);

	if(!b)
		return 1;

	b = ((b0 & 0xE0) ^ 0xC0);

	if(!b)
		return 2;

	b = ((b0 & 0xF0) ^ 0xE0);

	if(!b)
		return 3;

	return 4;

}

static void int_utf8_pad(utf8_char* unichar){

	uint8_t i;

	//Fill in any remaining zeros.
	for(i = unichar->size; i < 5; i++)
		unichar->data[i] = 0;
}

//Create a unicode character from a byte array.
utf8_char _utf8_fbytes(byte* data){

	int8_t size, i;
	uint32_t modifier = 0, dec = 0;
	utf8_char unichar;

	//Fist, get the size of the character (in bytes).
	size = int_utf8_sz(*data);
	unichar.size = size;

	int_utf8_pad(&unichar);

	//Copy the character data to the structure.
	for(i = 0; i < size; i++)
		unichar.data[i] = data[i];

	//Get the decimal value of the character.
	if(size == 1)
		unichar.value = *((uint8_t*)(data));

	else{

		for(i = (size - 1); i >= 0; i--){

			if(!i)
				modifier = ((data[i] & (255 >> (size + 1))) << (6 * (size - 1)));

			else
				modifier = (data[i] & 63) << (6 * (size - i - 1));


			dec |= modifier;

		}

		unichar.value = dec;

	}

	return unichar;

}

//Create a unicode character using an existing object.
size_t _utf8_ptr_fbytes(utf8_char* unichar, byte* data){

	int8_t size, i;
	uint32_t modifier = 0, dec = 0;

	//Fist, get the size of the character (in bytes).
	size = int_utf8_sz(*data);
	unichar->size = size;

	int_utf8_pad(unichar);

	//Copy the character data to the structure.
	for(i = 0; i < size; i++)
		unichar->data[i] = data[i];

	//Get the decimal value of the character.
	if(size == 1)
		unichar->value = *((uint8_t*)(data));

	else{

		for(i = (size - 1); i >= 0; i--){

			if(!i)
				modifier = ((data[i] & (255 >> (size + 1))) << (6 * (size - 1)));

			else
				modifier = (data[i] & 63) << (6 * (size - i - 1));


			dec |= modifier;

		}

		unichar->value = dec;

	}

	return size;

}

//Compare two unicode characters.
bool _utf8_compare(utf8_char* c1, utf8_char* c2, bool case_insensitive){

	if(c1->value == c2->value)
		return true;
	
	if(case_insensitive){

		//Case insensitivity.
		if(c1->value <= 128 && c2->value <= 128){

			if((c1->value > 64 && c1->value < 91) && c2->value == (c1->value + 32))
				return true;
			else if((c1->value > 96 && c1->value < 123) && c2->value == (c1->value - 32))
				return true;
		
		}
	}

	return false;

}

//Compare two unicode characters (non-case sensitive)
bool _utf8_compare_ci(utf8_char* c1, utf8_char* c2){

	if(c1->value < 97){

		if(c1->value == c2->value || c1->value == (c2->value + 32))
			return true;

	}
	else{

		if(c1->value == c2->value || c1->value == (c2->value - 32))
			return true;

	}

	return false;

}

//Create a unicode character from the decimal value of the character.
utf8_char _utf8_fint(uint32_t input){

	int8_t size, i;
	byte* data;
	uint32_t modifier = 0, val = 0;
	utf8_char unichar;

	//4 byte unicode character.
	if(input > 65535)
		size = 4;

	//3 byte unicode character.
	else if(input > 2047)
		size = 3;

	//2 byte unicode character.
	else if(input > 127)
		size = 2;

	//Single byte unicode/ascii character.
	else{

		size = 1;
		unichar.data[0] = input;
		unichar.value = input;
		unichar.size = 1;
		int_utf8_pad(&unichar);
		return unichar;
	}

	//Multi-byte character.

	//Get byte 0 of the unicode character.
	unichar.data[0] = (input >> (6 * (size - 1))) | ((254 << (8 - size - 1)) & 255);

	//Translate the remaining bytes of the character.
	for(i = (size - 2); i >= 0; i--)
		unichar.data[size - i - 1] = (((input >> (6 * i)) & 63) | 128);
	
	unichar.size = size;

	int_utf8_pad(&unichar);

	return unichar;


}

void _utf8_upper(utf8_char* unichar){

	if(unichar->value > 96 && unichar->value < 123){

		unichar->value -= 32;
		unichar->data[0] -= 32;

	}

}

void _utf8_lower(utf8_char* unichar){

	if(unichar->value > 64 && unichar->value < 91){

		unichar->value += 32;
		unichar->data[0] += 32;
		
	}

}

unsigned int _utf8_lang(utf8_char* unichar){

	/* TO DO */

	return 0;

}

