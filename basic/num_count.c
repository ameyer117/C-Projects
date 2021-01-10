#include <stdio.h>

int main () {
    
    int character = 0;
    int nums[10];

    for (int i = 0; i < 10; i++)
    {
        nums[i] = 0;
    }

    while ((character = getchar()) != EOF)
    {
        if(character >= '0' && character <= '9') {
            int index = character - '0';
            nums[index] = nums[index] + 1;
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("Number %d: %d\n", i, nums[i]);
    }
    
    return 0;
}