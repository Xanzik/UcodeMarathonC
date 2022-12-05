#include "../inc/minilibmx.h"

int main (int argc, char **argv) {
	if (argc != 6) {
		mx_printerr("usage: ./way_home [file_name] [x1] [y1] [x2] [y2]\n");
	}
    int x1 = mx_atoi(argv[2]);
    int y1 = mx_atoi(argv[3]);
    int x2 = mx_atoi(argv[4]);
    int y2 = mx_atoi(argv[5]);
    int file = mx_open_file(argv[1]);
    if (file < 0) {
        mx_printerr("map does not exist\n");
    }
    void mx_check_x_points(int i) {
    if (i > 20
        || i < 0) {
            mx_printerr("points are out of map range\n");
        }
}
    mx_check_x_points(x2);





    close(file);
    return 0;
}
