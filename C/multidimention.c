#include <stdio.h>

int main()
{
    // string 2d array
    char animals[5][10] =  
    {
        "Dog",
        "Cat",
        "Bird",
        "Gecko",
        "Lizard"
    };

    for(int i = 0; i < 5; i++)
        printf("%s\n", animals[i]);


    return 0;
}