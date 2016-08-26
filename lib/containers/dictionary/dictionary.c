/*

Copyright 2016 Bobby Crawford (ozdevguy) | ozdevguy@gmail.com

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

========================================================================

The Ditto Virtual Machine | Ditto Assembler (dasm)

=========================================================================
Revision History

Written: March 2016 -> Bobby Crawford (ozdevguy)
Last Revision: N/A

=========================================================================

dictionary.c

This file contains the functions used to build a fast lookup data dictionary utilizing a hash table
with linear probing.


*/

//Re-insert an item into an expanded table.
static void dictionary_reinsert(dictionary* newTable, dictionary_entry entry){

	//Get the theoretical position in the new hash table for this entry.
	size_t tsize = newTable->size;
	int i = entry.hashval % tsize;

	//Check if the first mapped address is available.
	if(newTable->table[i].hashval){

		//Collision! Probe the table for an open space!
		while(newTable->table[i].hashval)			
			i = ((i + 1) % tsize);

	}

	//Insert the entry into the correct position in the new table by copying values from the old table entry.
	newTable->table[i].hashval = entry.hashval;
	newTable->table[i].data = entry.data;

	//Destroy the old entry so that we don't use unecessary memory.
	entry.hashval = 0;
	entry.data = 0;

	newTable->total++;


}

unsigned int dictionary_size(dictionary* source){

	if(!source)
		return 0;

	return source->size;
}

//Create a new hash table dictionary.
dictionary* dictionary_create(unsigned int startSize){

	//Ensure the start size is valid.
	if(!startSize)
		return 0;

	//Create a new dictionary object.
	dictionary* nt = calloc(sizeof(dictionary), 1);

	//Set defaults for the dictionary object.
	nt->total = 0;
	nt->size = startSize;
	nt->loop = 0;

	//Create the initial table.
	nt->table = (dictionary_entry*)calloc(sizeof(dictionary_entry) * startSize, 1);

	return nt;

}

//Refactor the dictionary if needed (internal use only).
static void refactor_dictionary(dictionary* source){

	int i, total;

	dictionary* nt;

	if(!source)
		return;

	total = source->size;

	nt = dictionary_create(source->size);

	for(i = 0; i < total; i++){

		//Start reinserting entries into the new table.
		if(source->table[i].hashval)
			dictionary_reinsert(nt, source->table[i]);

	}

	//Perform the swap..
	free(source->table);
	source->table = nt->table;
	free(nt);
}

//Expand the dictionary if needed (internal use only).
static unsigned int expand_dictionary(dictionary* source){

	int i, total;

	dictionary* nt;

	if(!source)
		return;

	total = source->size;

	nt = dictionary_create(source->size * 2);

	for(i = 0; i < total; i++){

		//Start reinserting entries into the new table.
		if(source->table[i].hashval)
			dictionary_reinsert(nt, source->table[i]);
		


	}

	//Perform the swap..
	source->size *= 2;
	free(source->table);
	source->table = nt->table;
	free(nt);

	return source->size;


}

//Calculate a hash value (internal use only).
unsigned int dictionary_hash(char* input){

	unsigned int hashval = 0;
	int i = 0;

	while(input[i++])
		hashval += (input[i - 1] * i);

	return hashval;

}

//Destroy a hash table dictionary.
unsigned short dictionary_destroy(dictionary* source){

	if(!source)
		return 0;

	if(source->table)
		free(source->table);

	free(source);

	return 1;

}

//Destroy a hash table dictionary while also destroying linked values.
unsigned short dictionary_destroy_all(dictionary* source){

	int i;
	int size;

	if(!source)
		return 0;

	size = source->size;

	if(source->table){

		for(i = 0; i < size; i++){

			if(source->table[i].data)
				free(source->table[i].data);

		}

		free(source->table);

	}

	free(source);

	return 1;

}


//Loop through a dictionary.
dictionary_entry* dictionary_loop_get_entry(dictionary* source){

	if(!source)
		return 0;

	if(source->loop < source->size){

		return &(source->table[source->loop++]);

	}
	
	source->loop = 0;
	return 0;
	
}




//Insert an item into the hash table.
unsigned short dictionary_insert(dictionary* source, void* object, unsigned int hashval){

	unsigned int i, size;

	//If provided source or hashval values are invalid, exit the function.
	if(!source || !hashval)
		return 0;

	size = source->size;
	i = hashval % source->size;

	//No room... Expand the hash table.
	if(source->total == (int)(size * 0.7))
		size = expand_dictionary(source);
		
	//Check if the first mapped address is available.
	if(source->table[i].hashval){

		//Unlike the lookup and remove functions, the insert function does not need j, as it will mathematically never be able to enter an infinite loop.
		//It will find any available space, and there will always be extra space, since no available space indicates a full table, and full tables are expanded.
		while(source->table[i].hashval){

			i = ((i + 1) % size);
			
		}
	

	}

	//Set the value.
	source->table[i].hashval = hashval;
	source->table[i].data = object;
	source->total++;

	return 1;


}

//Pull an item from the dictionary.
void* dictionary_lookup(dictionary* source, uint32_t hashval){

	int i, j, size;

	i = hashval % source->size;
	size = source->size;
	j = size;

	//Theoretical index empty? The value does not exist!
	if(!source->table[i].hashval)
		return 0;

	//J is here to make sure we don't go into an infinite loop looking for a non-existant value.
	while(source->table[i].hashval != hashval && j-- > 1)
		i = ((i + 1) % size);

	if(j)		
		return source->table[i].data;


	return 0;

}

//Remove an item from the dictionary.
unsigned short dictionary_remove(dictionary* source, unsigned int hashval){

	int i, j, size;

	i = hashval % source->size;
	size = source->size;
	j = size;

	//Theoretical index empty? The value does not exist!
	if(!source->table[i].hashval)
		return 0;

	//J is here to make sure we don't go into an infinite loop looking for a non-existant value.
	while(source->table[i].hashval != hashval && j-- > 1)
		i = ((i + 1) % size);

	if(j){

		//The entry was found, we must now zero out the old value and refactor the table.
		source->table[i].hashval = 0;
		source->table[i].data = 0;
		source->total--;

		refactor_dictionary(source);
		return 1;

	}

	return 0;


}