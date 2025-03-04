#include <stdio.h>

int main(void)
{

    int num = 0;

    do
    {
        printf("Num is : %d\n", num);
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num != 0);

    return 0;
}