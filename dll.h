#ifndef __DLL__
#define __DLL__

typedef struct dll_node_{
    void *data;
    struct dll_node_ *left;
    struct dll_node_ *right;
} dll_node_t;


typedef struct dll_{
    dll_node_t *head;
} dll_t;


dll_t* get_new_dll();

int add_data_to_dll(dll_t *dll, void *data);

#endif
