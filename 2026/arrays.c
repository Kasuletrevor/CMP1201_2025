#include <stdio.h>

int sum_arr(const int arr[], int size);

int main()
{

    int numbers[6] = {1, 3, 4, 5, 6, 7};

    int sum = sum_arr(numbers, 6);

    printf("The sum is %d", sum);

    return 0;
}

int sum_arr(const int arr[], int size)
{

    int s = 0;
    int i = 0;

    while (i < size)
    {
        s = s + arr[i];
        i++;
    }

    return s;
}