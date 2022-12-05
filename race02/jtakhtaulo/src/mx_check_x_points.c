#include "../inc/minilibmx.h"

void mx_check_x_points(int i) {
    if (i > 20
        || i < 0) {
            mx_printerr("points are out of map range\n");
        }
}