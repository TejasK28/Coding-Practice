#include <stdio.h>

// Needs to appear prior to main, but we can prototype
int add(int x, int y)
{
    return x + y;
}

int main()
{
    printf("%d\n", add(5, 4));
    return 0;
}

