#include "list.h"

t_list* getLastButOne(t_list* list) {
    if (list == NULL) {
        return -2;
    }
    if (list->next == NULL) {
        return NULL;
    }
    while (list->next->next) {
        list = list->next;
    }
    return list;
}

void mx_pop_back(t_list **list) {
    t_list *last = NULL;
    if (!list) {
        return;
    }
    if (!(*list)) {
        return;
    }
    last = getLastButOne(*list);
    if (last == NULL) {
        free(*list);
        *list = NULL;
    }
    else {
        free(last->next);
        last->next = NULL;
    }
    
}
