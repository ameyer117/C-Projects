#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char tolowercase (char character, size_t length, char* string) {
    return character + 32;
}

// Call free when done
char* map(char* string, char (*mapFn)(char c, size_t length, char* string)) {
    size_t len = strlen(string);
    char* mappedstring = malloc(len);

    for(size_t i = 0; i < len; i++, mappedstring++, string++) {
        *mappedstring = mapFn(*string, len, string - i);
    }

    return mappedstring - len;
}

int main () {
    char* original = "HOLA";

    printf("%s\n", original);

    char* mapped = map(original, tolowercase);

    printf("%s\n", mapped);

    free(mapped);

    return 0;
}