#include <stdio.h>
#include <ctype.h>

// prototyped function to check a character
void checkC(char c);

int main()
{

    char c;
    // takes in a string of chars and calls the checkC method on each character
    do
    {
        c = getchar();
        checkC(c);

    } while (c != '\n');
    
    return 0;
}
// implementation of the prototyped function
void checkC(char c)
{
    if(isalnum(c))
        printf("%c : is an alpha character\n", c);
}