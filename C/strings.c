#include <stdio.h>

int main()
{
    //wihtout a value in brackets
    char string[] = "money";
    printf("bags of %s\n", string);

    //with value in brackets
    char name[15];
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Your name is: %s\n", name);

    //fgets()
    char occupation[15];
    printf("What is your occupation?");
    fgets(occupation, 15, stdin);
    printf("your occupation is: %s\n", occupation);

    return 0;
}