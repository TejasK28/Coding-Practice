#include <stdio.h>
#include <ctype.h>

int main()
{

    // takes in a char and return the string of chars without numbers
    int c;
    // interesting do-while loop since C is stream oritneted 
    do 
    {
        c = getchar();

        if(isalpha(c))
            printf("%c", c);
        if(isspace(c))
            printf(" ");

    } while (c != '\n');
    // '\n' is the same as an enter

    return 0;
}