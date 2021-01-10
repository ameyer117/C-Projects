#include <stdio.h>

typedef struct {
    int length;
    int width;
} rectangle;

int comparerectangle(rectangle* r1, rectangle* r2) {
    int r1Area = r1->length * r1->width;
    int r2Area = r2->length * r2->width;
    if (r1Area == r2Area) {
        return 0;
    }

    return r1Area < r2Area ? -1 : 1;
}

int main () {

    rectangle r1 = { 5, 8 };
    rectangle r2 = { 10, 12};

    int comparison = comparerectangle(&r1, &r2);

    printf("Comparison result: %d\n", comparison);

    return 0;
}