/* Write a program to replace each tab by the three-character sequence >, backspace, -, which prints as >, and each backspace by the similar sequence <. This makes tabs and backspaces visible. */
#include <stdio.h>
#include <stdlib.h>

int main () {
    int c;

    printf("Use Ctrl + H instead of hitting backspace to see the effect!\n");

    while ((c = getchar()) != EOF)
    {
        if (c != '\t' && c != '\b')
        {
            printf("%c", c);
        }
        else
        {
            if (c == '\t')
            {
                printf("-\b>");
            }
            else if (c == '\b')
            {
                printf("-\b<");
            }
        }
    }
    
    return 0;
}