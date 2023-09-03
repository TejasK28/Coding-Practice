#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char buf[20];

    printf("Type in your name: \n> ");
    fgets(buf, 20, stdin);
    printf("\nHello %s\n", buf);

    return 0;
}