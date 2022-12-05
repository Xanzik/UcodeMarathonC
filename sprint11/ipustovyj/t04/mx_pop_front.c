#include "list.h"

void mx_pop_front(t_list **list) {
    t_list *prev = NULL;
    if (*list != NULL) {
        prev = (*list)->next;
        free(*list);
        *list = prev;
    }
}