#include "../inc/minilibmx.h"

void mx_check_y_points(int i) {
    if (i > 10
        || i < 0) {
            mx_printerr("points are out of map range\n");
        }
}