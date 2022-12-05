void mx_arr_rotate(int *arr, int size, int shift) {
    if (shift > 0) {
        if (size == 0)
            return;
        shift = shift % size;
        if (shift > size)
            return;
        int temp[shift];
        for (int i = size - shift; i < size; i++) {
            temp[i - size + shift] = arr[i];
        }
        for (int i = size - shift - 1; i >= 0; i--) {
            arr[i + shift] = arr[i];
        }
        for (int i = 0; i < shift; i++) {
            arr[i] = temp[i];
        }    
    }
    if (shift < 0) {
    	shift = -shift;
        if (size == 0)
            return;
        shift = shift % size;
        if (shift > size)
            return;
        int temp[shift];
        for (int i = 0; i < shift; i++) {
            temp[i] = arr[i];
        }
        for (int i = 0; i < size - shift; i++) {
            arr[i] = arr[i + shift];
        }
        for (int i = size - shift; i < size; i++) {
            arr[i] = temp[i - size + shift];
        }
    }
}

