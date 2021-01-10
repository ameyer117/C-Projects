#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* copystr(char* string) {
    size_t length = strlen(string);
    char* copy = malloc(length);

    for(size_t i = 0; *string != '\0'; i++, string++, copy++) {
        *copy = *string;
    }

    *copy = '\0';
    
    return copy - length;
}

int main () {

    char* copy = copystr("Hi Alec!!");

    printf("copy: %s", copy);

    if(copy != NULL) {
        free(copy);
    }

    return 0;
}