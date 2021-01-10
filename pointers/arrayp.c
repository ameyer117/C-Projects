#include <stdio.h>

int main() {
    int values[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int *vp = &values[0]; //9

    for (int i = 0; i < 10; i++, vp++)
    {
        // *(vp + 1) == values[i]
        printf("values[%d]: %d\n", i, *vp);
    }
    
    return 0;
}