#include <stdio.h>

int main()
{
    int n;
    int i, rem;
    int flag = 1;

    printf("Enter a number > = 2: ");
    scanf("%d", &n);

    for (i = 2; i < n && n > 2; i++)
    {
        rem = n % i;
        if (rem == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a Prime number");
    }

    return 0;
}