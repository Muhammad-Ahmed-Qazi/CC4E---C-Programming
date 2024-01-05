/*
Python

hand = open('romeo.txt')
for line in hand:
    print(line.strip())
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    char line[1000];
    FILE *hand;

    hand = fopen("romeo.txt", "r");

    while (fgets(line, 1000, hand) != NULL)
    {
        printf("%s", line);
    }
    
    
    return 0;
}