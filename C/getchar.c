#include <stdio.h>

int main()
{
    
    printf("Give me a number: ");
    int x = getchar();
    putchar(x);
    printf("\n");

    /*
        getchar and putchar return int values
    */

    printf("num 1\n");
    int a = getchar();
    putchar(a);

    printf("\nnum 2\n");
    int b = getchar();
    putchar(b);

    printf("\nnum 3\n");
    int c = getchar();
    putchar(c);


    return 0;
}