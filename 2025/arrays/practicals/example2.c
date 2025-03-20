#include <stdio.h>

double average(double[], int);

int main()
{

    double marks[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks for Subject %d:\t", i);
        scanf("%lf", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Subject %d:  %lf\n", i, marks[i]);
    }

    // double avg, sum = 0;

    // for (i = 0; i < 5; i++)
    // {
    //     sum = sum + marks[i];
    // }

    // avg = sum / 5;

    double av = average(marks, 5);

    printf("The average of the marks is %lf", av);
    return 0;
}

double average(double arr[], int size)
{
    double avg, sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum / size;

    return avg;
}