#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char tolowercase (char character) {
    return character + 32;
}

char* mathop(char* string, char (*mapFn)(char x)) {
    size_t len = strlen(string);
    char* mappedstring = malloc(len);

    for(size_t i = 0; i < len; i++, mappedstring++, string++) {
        *mappedstring = mapFn(*string);
    }

    return mappedstring - len;
}

int main () {
    char* original = "HOLA";

    printf("%s\n", original);

    char* mapped = mathop(original, tolowercase);

    printf("%s\n", mapped);

    return 0;
}