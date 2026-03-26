#include <stdio.h>

int main()
{
    int i = -1;

    do
    {
        printf("The number is %d\n", i);
        printf("Enter a number between 0 and 10: ");
        scanf("%d", &i);
    } while (i > 0 && i < 10);

    // while (i > 0 && i < 10)
    // {
    //     printf("%d\n", i);
    //     i = i + 1;
    // }

    return 0;
}