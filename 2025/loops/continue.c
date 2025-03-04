#include <stdio.h>
#define MAX 5

int main(void)
{
    int data, sum = 0, k;

    for (k = 0; k < MAX; k++)
    {
        scanf("%d", &data);
        if (data <= 0)
            continue;
        sum += data;
        printf("Sum is %d\n", sum);
    }

    printf("Sum of positive values is %d\n.", sum);
    return (0);
}