#include "libmx.h"

int mx_list_size(t_list *list){
    if(!list)
        return 0;

    int counter = 0;
    t_list *temp = NULL;
    
    if (list) {
        temp = list;
        for (; temp; counter++) 
            temp = temp->next;
        
    }
    
    return counter;
}
