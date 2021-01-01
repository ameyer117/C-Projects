#include <stdio.h>

int main () {
    
    int word_count = 0;
    int character = 0;

    while((character = getchar()) != EOF) {
        if(character == '\n' || character == ' ' || character == '\t') {
            word_count += 1;
        }
    }

    printf("Total words: %d", word_count);

    return 0;
}