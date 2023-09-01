#include <stdio.h>

int main()
{
    // Bank structure
    struct Bank 
    {
        int balance;
    };

    struct Bank checking;

    checking.balance = 100 + 500;

    printf("You have %d dollars in the bank.\n", checking.balance);

    return 0;
}