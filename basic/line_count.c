#include <stdio.h>

int main () {
    int character = 0;
    int line_count = 0;

    while ((character = getchar()) != EOF)
    {
        if(character == '\n') {
            line_count += 1;
        }
    }

    printf("Line Count: %d", line_count);
}