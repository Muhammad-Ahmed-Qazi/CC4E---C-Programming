#include <stdio.h>
#include <stdlib.h>

int main () {
    int usf, euf;
    printf("Enter US floor: \n");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU floor %d\n", euf);

    return 0;
}