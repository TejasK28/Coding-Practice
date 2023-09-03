#include <stdio.h>
#include <string.h>

char *longer(char *s1, char *s2);

int main()
{
    // ptr math
    int arr[] = {0,1,2,3,4,5,6};
    int *x = arr;

    printf("%d\n", *(x+5));

    //method ptrs
    char s1[] = "abc";
    char s2[] = "abcd";
    char *result;

    result = longer(s1, s2);

    printf("%s is longer\n", result);

    //arr ptrs
    char str[] = "abc";
    char *ptr = str;

    printf("%s\n", ptr);
    printf("%p\n", ptr);

    //test
    int a[] = {1,2,3};
    int *aptr = a;

    printf("%p\n", aptr);
    printf("%d\n", *aptr);

    return 0;
}

char *longer(char *s1, char *s2)
{
    int len1, len2;
    printf("%s", s1);
    printf("%p", s1);

    len1 = strlen(s1);
    len2 = strlen(s2);

    if(len1 > len2)
        return s1;
    else 
        return s2;
}