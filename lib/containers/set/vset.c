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

vset.c
========================================================================


*/

static size_t int_vset_get_value(vset_config* config, void* obj){

	byte* dat;
	size_t value;

	if(!config || !obj)
		return 0;

	dat = (byte*)obj;

	if(config->v_size == sizeof(int8_t))
		value = *((int8_t*)(dat + config->v_offset));

	else if(config->v_size == sizeof(int16_t))
		value = *((int16_t*)(dat + config->v_offset));

	else if(config->v_size == sizeof(uint32_t))
		value = *((int32_t*)(dat + config->v_offset));

	else
		value = *((size_t*)(dat + config->v_offset));

	return value;

}


vector* _vset_new(standard_library_context* ctx, size_t data_size, void* obj_addr_start, void* obj_addr_value, size_t value_size, size_t start_size){

	vector* vect;
	vset_config* config;
	size_t i, offset;

	if(!ctx || !data_size || !start_size || !obj_addr_value)
		return 0;

	offset = (size_t)(obj_addr_value - obj_addr_start);

	if((offset + value_size) > data_size)
		return 0;

	vect = allocate(ctx, sizeof(vector));
	vect->ctx = ctx;
	vect->data = allocate(ctx, sizeof(vset_int) * start_size);
	vect->size = start_size;
	vect->data_size = sizeof(vset_int);

	//Allocate the information about this set.
	config = allocate(ctx, sizeof(vset_config));
	config->data_size = data_size;
	config->v_size = value_size;
	config->v_offset = offset;
	vect->ext = config;

	return vect;

}

void _vset_delete(vector* vect){

	size_t i;
	vset_int* dat;

	if(!vect)
		return;

	dat = (vset_int*)vect->data;

	for(i = 0; i < vect->used; i++)
		destroy(vect->ctx,  dat[i].obj);
	
	destroy(vect->ctx, vect->ext);
	_vector_delete(vect);

}

bool _vset_contains(vector* vect, size_t val){

	size_t i;
	vset_int* dat;

	if(!vect)
		return false;

	dat = (vset_int*)vect->data;

	for(i = 0; i < vect->used; i++){

		if(dat[i].val == val)
			return true;

	}

	return false;

}

bool _vset_add(vector* vect, void* obj){

	vset_config* config;
	byte *dat, *odat;
	size_t i;

	if(!vect)
		return false;

	config = (vset_config*)vect->ext;
	size_t val = int_vset_get_value(config, obj);

	if(!_vset_contains(vect, val)){

		dat = allocate(vect->ctx, config->data_size);
		odat = (byte*)obj;

		for(i = 0; i < config->data_size; i++)
			dat[i] = odat[i];

		vset_int data;
		data.val = val;
		data.obj = dat;

		_vector_add(vect, &data);
		return true;

	}

	return false;

}

void* _vset_get(vector* vect, size_t pos){

	vset_int* data;

	data = _vector_get(vect, pos);

	if(data)
		return data->obj;

	return 0;

}

void _vset_remove(vector* vect, size_t pos){

	vset_int* dat;

	if(!vect || !pos)
		return;

	if(pos >= vect->used)
		return;

	dat = (vset_int*)vect->data;

	destroy(vect->ctx,  dat[pos].obj);

	_vector_remove(vect, pos);

}

void _vset_reset_iterator(vector* vect){

	_vector_reset_iterator(vect);

}

bool _vset_has_next(vector* vect){

	return _vector_has_next(vect);

}

void* _vset_get_next(vector* vect){

	vset_int* dat;

	dat = _vector_get_next(vect);

	if(dat)
		return dat->obj;

	return 0;

}


vector* _vset_union(vector* st1, vector* st2){

	vector* u_set;
	vset_config *config1, *config2;
	vset_int* dat;
	size_t i;

	if(!st1 || !st2)
		return 0;

	config1 = (vset_config*)st1->ext;
	config2 = (vset_config*)st2->ext;

	if(config1->data_size != config2->data_size || config1->v_offset != config2->v_offset)
		return 0;

	u_set = _vset_new(st1->ctx, config1->data_size, (void*)0, (void*)config1->v_offset, config1->v_size, st1->used);

	dat = (vset_int*)st1->data;

	for(i = 0; i < st1->used; i++)
		_vset_add(u_set, dat[i].obj);

	dat = (vset_int*)st2->data;

	for(i = 0; i < st2->used; i++)
		_vset_add(u_set, dat[i].obj);


	return u_set;

}

vector* _vset_intersect(vector* st1, vector* st2){

	vector* i_set;
	vset_config *config1, *config2;
	vset_int* dat;
	size_t i;

	if(!st1 || !st2)
		return 0;

	config1 = (vset_config*)st1->ext;
	config2 = (vset_config*)st2->ext;
	dat = (vset_int*)st1->data;

	if(config1->data_size != config2->data_size || config1->v_offset != config2->v_offset)
		return 0;

	i_set = _vset_new(st1->ctx, config1->data_size, (void*)0, (void*)config1->v_offset, config1->v_size, st1->used);

	for(i = 0; i < st1->used; i++){

		if(_vset_contains(st2, dat[i].val))
			_vset_add(i_set, dat[i].obj);

	}

	
	return i_set;

}

