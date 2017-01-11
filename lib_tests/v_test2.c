#include "../lib/vector.h"

void main(){

	_lib_init();

	genlib_context* ctx = _ctx_init();

	vector* vect = _vector_new(ctx, sizeof(long), 10);

	
	_ctx_delete(ctx);

}