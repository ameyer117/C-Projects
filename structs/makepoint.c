#include <stdio.h>

struct point {
    char* name;
    int x;
    int y;
};

struct point makepoint(char* name, int x, int y) {
    struct point temp;
    temp.name = name;
    temp.x = x;
    temp.y = y;
    return temp;
}

// p1->x is equivalent to (*p1).x
struct point* comparepoints(struct point* p1, struct point* p2) {
    return p1->x > p2->x && p1->y > p2->y ? p1 : p2;
}

int main() {

    struct point p1 = makepoint("P1", 5, 3);
    struct point p2 = makepoint("P2", 7, 2);
    struct point *biggest = comparepoints(&p1, &p2);

    printf("%s is bigger\n", biggest->name);

    return 0;
}