#include <stdlib.h>
#include <memory.h>

#include "dll.h"


doubly_linked_list *get_new_dll(){
    doubly_linked_list *dll = calloc(1, sizeof(doubly_linked_list));
    dll->head = NULL;
    dll->tail = NULL;

    return dll;
}

int add_data_to_dll(doubly_linked_list *dll, int *data){
    if(!dll || !data) return -1;

    node *new_node = calloc(1, sizeof(node));

    new_node->data = data;
    new_node->next = NULL;
    new_node->previous  = NULL;

    if(dll->head == NULL){
        dll->head = new_node;
        return 0;
    }

    dll->tail->next = new_node;
    dll->tail = new_node;
}