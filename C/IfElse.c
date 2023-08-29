#include <stdio.h>

int main()
{
    //if, else if, and else statments 
    int x;
    printf("Input a number: \n");
    scanf("%d", &x);

    if(x > 50)
        printf("Your number is greater than 50\n");
    else if(x < 50)
        printf("Your numebr is less than 50\n");
    else
        printf("Your number is 50\n");

    return 0;
}