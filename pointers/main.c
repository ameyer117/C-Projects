#include <stdio.h>

int main () {

    int x = 10;

    // Declare pointer
    int *ip;

    // Set pointer
    ip = &x;

    // Mutate value
    *ip += 1;

    printf("x: %d", x);
    
    return 0;
}