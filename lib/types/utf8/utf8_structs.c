//UTF-8 Data structures.

typedef struct utf8_char utf8_char;

struct utf8_char{

	byte data[5];

	uint8_t size;

	uint32_t value;

};
