#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[]);
void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getLine(line)) > 0) {
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if(max > 0) {
        printf("%s", longest);
    }

    return 0;
}

int getLine(char line[]) {
    int character;
    int i;
    int size = sizeof line / sizeof line[0];

    for(i = 0; i < size && (character=getchar()) != EOF && character!= '\n'; i++) {
        
        if(line[i] == '\0') {
            printf("Nul found at index: %d\n", i);
        }

        line[i] = character;
    }

    if(character == '\n') {
        line[i] = character;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    for (int i = 0; from[i] != '\0'; i++)
    {
        to[i] = from[i];
    }
}