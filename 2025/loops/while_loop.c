#include <stdio.h>

int main()
{

    int sum, temp;

    sum = 0;

    int i = 5;

    while (i <= 0)
    {
        printf("The value of i is %d\n", i);
        printf("Enter a number: ");
        scanf("%d", &temp);

        sum = sum + temp;

        printf("The sum is so far %d\n", sum);

        i = i - 1;
    }

    return 0;
}