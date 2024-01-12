/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

#include <stdio.h>
#include <stdlib.h>

#define YES 1
#define NO 0

int main () {
    int c, prev_blank;
    prev_blank = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            printf("%c", c);
            if (prev_blank == YES)
                prev_blank = NO;
        }
        else
        {
            if (prev_blank == NO)
            {
                printf("%c", c);
                prev_blank = YES;
            }
        }
    }
    
    return 0;
}