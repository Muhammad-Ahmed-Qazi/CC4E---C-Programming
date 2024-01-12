#include <stdio.h>
#include <stdlib.h>

int main () {
    int nb, nt, nl, c;
    nb = nt = nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }

    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", nb, nt, nl);
    
    return 0;
}