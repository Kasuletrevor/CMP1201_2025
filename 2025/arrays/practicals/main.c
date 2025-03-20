#include <stdio.h>

int main()
{

    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%d\n", num[0]);
    num[0] = 6;

    printf("The size of the array is %d\n", (int)sizeof(num));

    int num_of_elements = sizeof(num) / sizeof(num[0]);

    printf("The array has %d elements\n", num_of_elements);

    for (int count = 0; count < num_of_elements; count++)
    {

        printf("%d\t", num[count]);
    }

    // printf("%d\n", num[2]);

    return 0;
}