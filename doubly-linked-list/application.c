#include <stdio.h>

#include "dll.h"


int main(){
    int data = 5;
    doubly_linked_list *dll = get_new_dll();
    add_data_to_dll(dll, &data);
    add_data_to_dll(dll, &data);
    add_data_to_dll(dll, &data);
    add_data_to_dll(dll, &data);

    node * current = dll->head;
    while(current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}