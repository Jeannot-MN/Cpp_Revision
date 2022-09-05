/* Header file for Doubly Linked List */

typedef struct node {
    void *data;
    struct node *previous;
    struct node *next;
} node;

typedef struct doubly_linked_list {
    node *head;
} doubly_linked_list;

/* Function to create and return
 * a new empty doubly linked list 
 */
doubly_linked_list *get_new_dll();

/*  Funtion to insert a node at the end of
 *  the given doubly linked list
 */
int add_data_to_dll(doubly_linked_list *dll, void *data);