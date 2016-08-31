
//Create a new hashmap.
map* _hashmap_new(standard_library_context*, size_t);

//Delete a hashmap.
bool _hashmap_delete(map*);

//Insert into a hashmap using a character array.
bool _hashmap_insert_fbytes(map*, byte*);

//Insert into hashmap using a string.
bool _hashmap_insert(map*, string*);

