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

list.c
========================================================================


*/

static void int_list_resize(list* lst, size_t new_size){

	byte** new_data;
	size_t i;

	if(!lst)
		return;

	if(new_size <= lst->size)
		return;

	new_data = allocate(lst->ctx, new_size * sizeof(size_t));

	for(i = 0; i < lst->used; i++)
		new_data[i] = lst->data[i];

	destroy(lst->ctx, (void**)&lst->data);

	lst->data = new_data;
	lst->size = new_size;

}

list* _list_new(standard_library_context* ctx, size_t start_size){

	if(!ctx || !start_size)
		return 0;
	
	list* l = allocate(ctx, sizeof(list));
	l->ctx = ctx;
	l->data = allocate(ctx, sizeof(size_t) * start_size);
	l->size = start_size;

	return l;

}

void _list_delete(list* lst){

	if(!lst)
		return;

	destroy(lst->ctx, (void**)&lst->data);
	destroy(lst->ctx, (void**)&lst);

}

void _list_add(list* lst, void* data){

	int8_t i;

	if(!lst)
		return;

	if(lst->used == lst->size)
		int_list_resize(lst, lst->size * 2);

	lst->data[lst->used++] = (byte*)data;
	
}

void _list_reset_iterator(list* lst){

	if(!lst)
		return;

	lst->iterator = 0;

}

bool _list_has_next(list* lst){

	if(!lst)
		return false;

	if(lst->iterator < lst->used)
		return true;

	return false;
}

void* _list_get_next(list* lst){

	size_t* l;

	if(!lst)
		return 0;

	if(lst->iterator >= lst->used)
		return 0;

	return (void*)lst->data[lst->iterator++];

}

bool _list_remove(list* lst, size_t pos){

	size_t i;
	bool removed;

	if(!lst)
		return false;

	if(pos >= lst->used)
		return false;

	for(i = pos; i < (lst->used - 1); i++)
		lst->data[i] = lst->data[i + 1];

	lst->used--;

	return true;

}

void* _list_get(list* lst, size_t pos){

	size_t* l;

	if(!lst)
		return 0;

	if(pos >= lst->used)
		return 0;


	return (void*)lst->data[pos];

}

bool _list_merge(list* lst1, list* lst2){

	size_t i;

	if(!lst1 || !lst2)
		return false;

	for(i = 0; i < lst2->used; i++)
		_list_add(lst1, lst2->data[i]);

	return true;

}

bool _list_set(list* lst, size_t pos, void* new_ptr){

	if(!lst)
		return false;

	if(pos >= lst->used)
		return false;

	lst->data[pos] = new_ptr;

	return true;
	
}

