#include <stdio.h>

int main()
{

    //switch statements
    int x;
    printf("Enter a number(1,2,or 3): \n");
    scanf("%d", &x);

    switch(x)
    {
        case 1:
        printf("Red\n");
        break;

        case 2:
        printf("Green\n");
        break;

        case 3:
        printf("Blue\n");
        break;

        default:
        printf("Input is invalid\n");
    }


    return 0;

}