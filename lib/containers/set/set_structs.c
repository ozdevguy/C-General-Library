typedef struct vset_int vset_int;
typedef struct vset_config vset_config;

struct vset_int{

	//Object.
	void* obj;

	//Value
	size_t val;

};

struct vset_config{

	//Data size.
	size_t data_size;

	//Value size.
	size_t v_size;

	//Value offset.
	size_t v_offset;

};