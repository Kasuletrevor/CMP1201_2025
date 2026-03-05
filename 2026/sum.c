#include <stdio.h>

int main()
{
    int a, b, sum;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    sum = a + b;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}