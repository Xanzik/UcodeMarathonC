#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src) {
	if (src == NULL)
		return NULL;
	for (int i = 0; i < src->size; i++) {
		for (int j = i + 1; j < src->size; j++) {
			if (src->arr[i] == src->arr[j]) {
				for (int k = j; k < src->size - 1; k++)
					src->arr[k] = src->arr[k + 1];
				src->size--;
				j--;
			}
		}
	}
	return src;
	t_intarr *new;
	new->size = src->size;
	new->arr = mx_copy_int_arr(src->arr, new->size);
	return new;
}
