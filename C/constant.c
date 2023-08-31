#include <stdio.h>
// constant expression example
// must be all caps
#define AUTHOR "Bob Marley"
#define OCCUPATION "Musician"
int main()
{
    // data type constant
    const float pi = 3.14159;

    printf("The value of PI is %f\n", pi);
    printf("Someone is %s\n", AUTHOR);
    printf("That someone is a %s\n", OCCUPATION);

    return 0;
}