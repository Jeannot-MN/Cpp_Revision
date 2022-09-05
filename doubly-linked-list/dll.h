/* Header file for Doubly Linked List */

typedef struct dll_node {
    void *data;
    struct dll_node *previous;
    struct dll_node *next;
} dll_node_t;

typedef struct dll_ {
    dll_node_t *head;
} dll_t;

/* Function to create and return
 * a new empty doubly linked list 
 */
dll_t *get_new_dll();

/*  Funtion to insert a node at the end of
 *  the given doubly linked list
 */
int add_data_to_dll(dll_t *dll, void *data);