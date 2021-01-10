#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

point makepoint(int x, int y) {
     point p1 = {x, y};
     return p1;
}

int main() {
    point points[5] = {
        makepoint(1, 3),
        makepoint(2, 7),
        makepoint(3, 9),
        makepoint(8, 10),
        makepoint(5, 3)
    };

    for(size_t i = 0; i < 5; i++) {
        printf("Point %zu: x = %d, y = %d\n", i + 1, points[i].x, points[i].y);
    }

    return 0;
}