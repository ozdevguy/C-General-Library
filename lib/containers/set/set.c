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

set.c
========================================================================


*/

//Create a new list.
list* _set_new(standard_library_context*, size_t); //COMPLETE

//Delete a list.
void _set_delete(list*); //COMPLETE

//Add an item to the list.
bool _set_add(list*, void*); //COMPLETE

//Get an item from the list.
void* _set_get(list*, size_t); //COMPLETE

//Remove an item from the list.
bool _set_remove(list*, size_t); //COMPLETE

//Reset the iterator.
void _set_reset_iterator(list*); //COMPLETE

//See if there are items left to be iterated through.
bool _set_has_next(list*); //COMPLETE

//Get the next item in the list.
void* _set_get_next(list*); //COMPLETE

//Does this set contain the given pointer?
bool _set_contains(list*, void*);

//Create a union of two sets.
list* _set_union(list*, list*);

//Get the intersection of two sets.
list* _set_intersect(list*, list*);


list* _set_new(standard_library_context* ctx, size_t start_size){

	return _list_new(ctx, start_size);

}

void _set_delete(list* st){

	_list_delete(st);

}

bool _set_add(list* st, void* ptr){

	size_t i;

	for(i = 0; i < st->used; i++){

		if(st->data[i] == ptr)
			return false;

	}

	_list_add(st, ptr);
	return true;

}

bool _set_contains(list* st, void* ptr){

	size_t i;

	if(!st)
		return false;

	for(i = 0; i < st->used; i++){

		if(st->data[i] == ptr)
			return true;

	}

	return false;

}

void* _set_get(list* st, size_t pos){

	return _list_get(st, pos);

}

bool _set_remove(list* st, size_t pos){

	return _list_remove(st, pos);

}

void _set_reset_iterator(list* st){

	_list_reset_iterator(st);

}

bool _set_has_next(list* st){

	return _list_has_next(st);

}

void* _set_get_next(list* st){

	return _list_get_next(st);

}

list* _set_union(list* st1, list* st2){

	list* u_set;
	size_t i;

	if(!st1 || !st2)
		return 0;

	u_set = allocate(st1->ctx, sizeof(list));
	u_set->data = allocate(st1->ctx, (sizeof(size_t) * st1->used));
	u_set->size = st1->used;
	u_set->ctx = st1->ctx;

	for(i = 0; i < st1->used; i++)
		_list_add(u_set, st1->data[i]);

	for(i = 0; i < st2->used; i++)
		_set_add(u_set, st2->data[i]);

	return u_set;

}

list* _set_intersect(list* st1, list* st2){

	list* i_set;
	size_t i;

	if(!st1 || !st2)
		return 0;

	i_set = allocate(st1->ctx, sizeof(list));
	i_set->data = allocate(st1->ctx, (sizeof(size_t) * st1->used));
	i_set->size = st1->used;
	i_set->ctx = st1->ctx;

	for(i = 0; i < st1->used; i++){

		if(_set_contains(st2, st1->data[i]))
			_list_add(i_set, st1->data[i]);

	}

	return i_set;

}



