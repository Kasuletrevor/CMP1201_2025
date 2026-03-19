#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 5)
    {
        printf("x is greater than 5\n");
    }
    else if (x == 5)
    {
        printf("x is equal to 5\n");
    }
    else
    {
        printf("x is not greater than 5\n");
    }

    printf("Done");

    return 0;
}