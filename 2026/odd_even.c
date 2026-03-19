#include <stdio.h>

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int rem = num % 2;

    if (rem == 1)
    {
        printf("%d is odd\n", num);
    }
    else
    {
        printf("%d is even\n", num);
    }

    return 0;
}