#include <stdio.h>

struct point
{
    int x;
    int y;
};


int main () {

    struct point mypoint = { 3, 6 };

    // mypoint.x = 5;
    // mypoint.y = 10;

    printf("x: %d, y: %d\n", mypoint.x, mypoint.y);

    return 0;
}