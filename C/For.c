#include <stdio.h>

int main()
{
    //for loops
    for(int i = 0 ; i < 20 ; i++)
    {
        printf("The number is %d\n", i+1);
    }
    //while loops
    int x = -10;
    while(x < 11)
    {  
        if(x % 2 == 0)
         printf("The number is %d\n", x);
        
        x++;
    }



    return 0;
}