#include <stdio.h>
#include <stdlib.h>

int main () {
    char name[100];
    printf("Enter your name: \n");
    scanf("%100s", name);
    printf("Hello, %s!\n", name); // When you pass the identifier of an array, you are passing the address of the beginning of the array.

    return 0;
}