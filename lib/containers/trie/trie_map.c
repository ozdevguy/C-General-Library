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

trie_map.c | Trie Map
========================================================================

*/

//(Context, charactaristic)
trie_map* _trie_map_new(standard_library_context, uint8_t);

//(Map, Entry Value, Object, Chained trie (true, false))
trie_map_entry* _trie_map_add(trie_map*, size_t val, void* ptr, bool);

//Get a complete trie entry.
trie_map_entry* _trie_map_lookup_e(trie_map*, size_t);

//Get a trie object.
void* _trie_map_lookup(trie_map*, size_t);

