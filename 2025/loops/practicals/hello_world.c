#include <stdio.h>

int main()
{
    int i, n;

    // printf("Enter the number of times you want to print: ");
    // scanf("%d", &n);

    for (i = 0; i < 10; i++)
    {

        if (i == 5)
        {
            continue;
        }
        printf("%d\t", i);
    }

    return 0;
}