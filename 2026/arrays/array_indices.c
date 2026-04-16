#include <stdio.h>

#define NO_OF_DAYS 7

int main()
{
    int i;
    float rainfall[7];

    // printf("Enter the rainfall values: ");
    // scanf("%f %f %f %f %f %f %f", &rainfall[0], &rainfall[1], &rainfall[2], &rainfall[3], &rainfall[4], &rainfall[5], &rainfall[6]);

    for (int i = 0; i < 7; i++)
    {
        printf("Enter the rainfall value %d \t: ", i);
        scanf("%f", &rainfall[i]);
    }

    for (i = 0; i < 7; i++)
    {
        printf("Rainfall: %.2f\n", rainfall[i]);
    }

    return 0;
}