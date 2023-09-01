#include <stdio.h>

int main()
{
    // simple calorie counter via integer strings
    int calories[3];
    int total;

    for(int i = 0; i < 3 ; i++)
    {
        printf("How many calories in meal %d?\n", i + 1);
        scanf("%d", &calories[i]);
    }

    total = 0;
    for(int i = 0; i < 3; i++)
        total += calories[i];
    
    printf("You ate %d calories!\n", total);

    return 0;
}