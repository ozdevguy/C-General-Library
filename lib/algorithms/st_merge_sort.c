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

st_merge_sort.c
========================================================================


*/

//Sort a list in ascending order.
bool _merge_sort_list_asc(list*, size_t, uint8_t);

//Sort a list in descending order.
bool _merge_sort_list_desc(list*, size_t, uint8_t);

//Sort a vector in ascending order.
bool _merge_sort_vector_asc(vector*, size_t, uint8_t);

//Sort a vector in descending order.
bool _merge_sort_vector_desc(vector*, size_t, uint8_t);

//Sort a normal integer array in ascending order.
bool _merge_sort_arr_asc(void*, uint8_t);

//Sort a normal integer array in descending order.
bool _merge_sort_arr_desc(void*, uint8_t);

