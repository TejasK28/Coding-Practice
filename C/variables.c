#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    long d;

    printf("%d\n", a);

    //sizeof operator
    printf("%lu\n", sizeof(a));
    printf("%lu\n", sizeof(d));


    //sizeof on structs
    struct book
    {
        char name[40];
        int age;
        char color[10];
    };

    struct book bookvar;

    printf("%lu\n", sizeof(bookvar));


    //hexademial %p
    printf("%p\n", &bookvar);

    return 0;
}