#include <stdio.h>

int main()
{

    int i, j;

    for (j = 0; j < 3; j++)
    {

        for (i = 0; i < 5; i++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}