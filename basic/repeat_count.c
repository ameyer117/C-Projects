#include <stdio.h>

int main () {

    int character;
    long nc = 0;

    while((character = getchar()) != EOF) {
        if(character != '\n') {
          ++nc;
        }
    }
    
    printf("%ld\n", nc);
}