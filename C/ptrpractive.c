#include <stdio.h>

int main()
{
    int array[] = {1,42,3,4,5};
    int * arrayX = array;

    printf("%p\n", array); // gives you address of first element
    printf("%p\n", arrayX); // ptr also gives you address of first elemnt
    printf("%d\n", *(arrayX + 1)); // 

    char str[] = "bello world";
    char * strX = str;
  
    printf("%p\n", str);
    printf("%s\n", str);

    printf("%p\n", strX);
    printf("%s\n", strX);


    return 0;
}