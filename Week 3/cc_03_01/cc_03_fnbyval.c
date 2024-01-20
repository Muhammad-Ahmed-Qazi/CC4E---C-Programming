#include <stdio.h>
#include <stdlib.h>

int main () {
    int mymult();
    int retval;

    retval = mymult(3, 4);
    printf("Answer: %d\n", retval);
    
    return 0;
}

// int mymult(int a, int b)
// {
//     return a * b;
// }

int mymult(a, b)
int a, b;
{
    int c = a * b;
    return c;
}