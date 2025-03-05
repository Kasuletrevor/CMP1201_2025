#include <stdio.h>

int main()
{
    int num[3];

    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter a number: \t");
        scanf("%d", &num[i]);
    }

    printf("The elements are:");

    for (i = 0; i < 3; i++)
    {
        printf("%d\t", num[i]);
    }

    return 0;
}