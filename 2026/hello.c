#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int sum;
    a = 16;
    b = 4;
    sum = a + b;
    char grade = 'a';
    float pi = 3.14;

    printf("The value of a is %d", a);
    printf("\nThe value of b is %d", b);
    printf("\nThe value of grade is %c", grade);
    printf("\nThe value of pi is %f", pi);
    printf("\nThe sum of %d and %d is %d", a, b, sum);
    a = 7;

    printf("\tThe sum of %d and %d is %d", a, b, sum);
    return 0;
}
