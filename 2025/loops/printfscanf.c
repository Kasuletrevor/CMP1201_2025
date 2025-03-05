#include <stdio.h>

int main(void)
{
    int n, sum;

    while (((printf("Enter number = ") && scanf("%d", &n)) && n) != 0)
    {
        sum = 0;

        do
        {
            sum += n % 10;
            n /= 10;
        } while (n > 0);

        printf("The sum of the digits is = %d\n", sum);
    }

    return 0;
}