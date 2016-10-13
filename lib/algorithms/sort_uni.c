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

sort_uni.c
========================================================================


*/

sort_representation* _sort_setup_flist(list* input, size_t offset, uint8_t val_size){

	size_t i;
	void* data;

	sort_representation* sort_arr;

	if(!input)
		return false;

	//Create a sortable array.
	sort_arr = allocate(input->ctx, input->used * sizeof(sort_representation));

	for(i = 0; i < input->used; i++){

		data = _list_get(input, i);

		if(val_size == sizeof(byte))
			sort_arr[i].value = *((byte*)(data + offset));

		else if(val_size == sizeof(short))
			sort_arr[i].value = *((short*)(data + offset));

		else if(val_size == sizeof(int))
			sort_arr[i].value = *((int*)(data + offset));

		sort_arr[i].data = data;

	}

	return sort_arr;

}

bool _sort_copy_back(list* lst, sort_representation* input){

	size_t i;

	for(i = 0; i < lst->used; i++)
		lst->data[i] = input[i].data;

	destroy(lst->ctx, input);

}