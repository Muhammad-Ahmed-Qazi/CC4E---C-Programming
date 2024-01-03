#include <stdio.h>
#include <stdlib.h>

int main () {
    char line[1000];
    printf("Enter a line: \n");
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
    
    return 0;
}