#include <stdio.h>

void strcopy2(char *d, char* s) {
    while((*d++ = *s++)) {
    }
}

int main() {
    char* source = "Hi there!";
    char destination[25];

    strcopy2(destination, source);

    printf("%s", destination);

    return 0;
}