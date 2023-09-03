#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char * cPtr = malloc(sizeof(char) * 20);

    if(cPtr == NULL) return 1;
    
    printf("Name?\n");
    fgets(cPtr, 20, stdin);
    printf("Greeting! Your name is %s", cPtr);

    return 0;
}