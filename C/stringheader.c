#include <stdio.h>
#include <string.h> // helper string library

int main()
{
    // takes input and ouputs string
    char firstName[10];
    char lastName[10];

    printf("Enter your first name: \n");
    fgets(firstName, 10, stdin);

    printf("Enter your last name: \n");
    fgets(lastName, 10, stdin);

    printf("%s", firstName);
    printf("%s", lastName);

    // combines input 1 and input 2
    char fullName[20];

    strcpy(fullName, firstName);
    strcat(fullName, lastName);

    puts(fullName);



    return 0;

}

