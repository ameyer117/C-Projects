#include <stdio.h>

size_t strlen2(char *string);

int main() {
    char* greeting = "Hi my name is Alec.";

    size_t length = strlen2(greeting);

    printf("%s is %zu characters long.\n", greeting, length);

    return 0;
}

size_t strlen2(char *string) {
    char* p = string;

    while(*p != '\0') {
        p++;
    }

    return p - string;
}