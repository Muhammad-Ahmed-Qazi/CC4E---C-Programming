/* Write a program which prints the words in its input, one per line. */
#include <stdio.h>
#include <stdlib.h>

#define YES 1
#define NO 0

int main () {
    int c, inword;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {    if (c == ' ' && inword == YES)
            {
                printf("\n");
            }
            inword = NO;
        }
        else
        {
            printf("%c", c);
            inword = YES;
        }
    }

    return 0;
}