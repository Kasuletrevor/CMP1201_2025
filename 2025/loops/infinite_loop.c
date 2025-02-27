#include <stdio.h>

int main()
{

    int i = 1;

    while (i != 10)
    {

        printf("The value of i is %d\n", i);
        printf("Enter a number: \t");
        scanf("%d", &i);
    }

    return 0;
}