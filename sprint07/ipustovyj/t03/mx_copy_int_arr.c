#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL 
        || !src)
        return NULL;
    int *arr = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        arr[i] = src[i];
    return arr;
}
