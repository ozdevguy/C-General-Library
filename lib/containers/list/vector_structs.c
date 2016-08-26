typedef struct vector vector;

struct vector{

	//Size of this vector.
	unsigned long size;

	//Used spaces.
	unsigned long used;

	//Data size.
	unsigned short data_size;

	//Vector iterator counter.
	unsigned long iterator;
	
	//Vector data.
	byte* data;

};