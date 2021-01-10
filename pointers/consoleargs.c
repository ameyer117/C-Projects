#include <stdio.h>

int main(int argc, char **argv) {
    
    printf("argc: %d\n", argc);

    for(size_t i = 1; i < argc; i++) {
        printf("arg[%zu] = %s\n", i, argv[i]);
    }

    return 0;
}