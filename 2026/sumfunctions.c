#include <stdio.h>

int sum(int a, int b);

int main()
{

    int c;
    int num1, num2;
    num1 = 5;
    num2 = 11;
    c = sum(num1, num2);

    printf("Sum: %d", c);

    return 0;
}

int sum(int a, int b)
{

    return a + b;
}