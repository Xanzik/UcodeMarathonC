void mx_printchar(char c);
void mx_printint(int n);

void mx_print_arr_int(const int *arr, int size) {
	for (int x = 0; x < size; x++) {
		mx_printint(arr[x]);
		mx_printchar('\n');
	}
}

