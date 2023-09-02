#include <stdio.h>

int main()
{
    int a = 5;
    int * aptr = &a;

    printf("a: %d\naptr: %p\n", a, aptr);

    return 0;
}