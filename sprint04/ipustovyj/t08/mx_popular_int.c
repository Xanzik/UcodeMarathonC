int mx_popular_int(const int *arr, int size) {
    int popular = 0;
    int count = 1;
    int prev = 0;
    int check;
    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size - 1; j++) {
            check = arr[j];
            if (check == arr[i]) {
                if (count == prev) {
                    continue;
                }
                if (count > prev) {
                    popular = check;
                    count++;
                }
            }
        }
        prev = count;
        count = 0;
    }
    return popular;
}

