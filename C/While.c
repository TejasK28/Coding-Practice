#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);

    while(x <= 100)
    {
        printf("%d\n", x);
        x++;
    }

    return 0;
}