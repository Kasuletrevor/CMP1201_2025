#include <stdio.h>

void increment(int *n);

int main()
{
    int num = 4;
    increment(&num);
    printf("%d\n", num);

    return 0;
}

void increment(int *n)
{
    *n = *n + 1;
}