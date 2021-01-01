#include <stdio.h>

int main () {
    
    int character = 0;

    while((character = getchar()) != EOF) {
        if(character == '\n' || character == ' ' || character == '\t') {
            putchar('\n');
        } else {
            putchar(character);
        }
    }

    return 0;
}