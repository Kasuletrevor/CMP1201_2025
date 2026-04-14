#include <stdio.h>

void swap(int *a, int *b);

int main()
{

    int x = 42, y = 99;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}