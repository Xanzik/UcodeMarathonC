#include "list.h"

void mx_push_front(t_list **list, void *data) {
    t_list *new = mx_create_node(data);
    if (*list == NULL) {
        *list = new;
    }
    else {
        new->data = data;
        new->next = *list;
        *list = new;
    }
}
