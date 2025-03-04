#include <stdio.h>

int main(void)
{

    int num = 0;

    while (1)
    {
        printf("Num is : %d\n", num);
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
    }

    printf("You left the loop\n");

    return 0;
}