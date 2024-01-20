#include <stdio.h>
#include <stdlib.h>

int main () {
    int guess;

    while (scanf("%d", &guess) != EOF)
    {
        if (guess == 42)
        {
            printf("Nice work!\n");
            break;
        }
        else if (guess < 42)
        {
            printf("Too low\n");
        }
        else
        {
            printf("Too high\n");
        }
    }
    
    return 0;
}