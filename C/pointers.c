#include <stdio.h>

int main()
{
    int a = 5;
    int * aptr = &a; // pts to the adress of a

    printf("a: %d\naptr: %p\n", a, aptr);


    printf("%p\n", aptr); //  without *, you get address
    printf("%d\n", *aptr); // with *, you get the content 

    return 0;
}