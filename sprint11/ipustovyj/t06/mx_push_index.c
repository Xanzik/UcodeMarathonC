#include "list.h"

int tmx_list_size(t_list *list) {
    t_list *temp = list;
    int size = 0;
    if (list == NULL)
        return 0;
    while (temp) {
        temp = temp->next;
        size++;
    }
    return size;
}

void mx_push_index(t_list **list, void *data, int index) {
    t_list *tmp = *list;
    t_list *new = mx_create_node(data);
    if (index < 1)
    {
        mx_push_front(list, data);
    }
    else if (index > mx_list_size(tmp))
    {
        mx_push_back(list, data);
    }
    else 
    {
        for (int i = 0; tmp; i++) 
        {
            if (i == index - 1) 
            {
                new->next = tmp->next;
                tmp->next = new;
            }
            tmp = tmp->next;
        }
    }
}