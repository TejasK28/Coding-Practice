#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *cptr;
    printf("%lu\n",sizeof(char));

    cptr = malloc(sizeof(char) * 100);

    if(cptr == NULL) {puts("Memory Error"); return 1;}
    else puts("Memory allocated successfully");

    printf("%p\n", cptr);
    printf("%c\n", *cptr);


    return 0;
}