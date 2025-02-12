#include <stdio.h>
#include <math.h>

double magnitude(int x, int y);

int main()
{

    int a = 5;
    int b = 6;

    double mag;
    mag = magnitude(a, b);

    printf("The magnitude of points %d and %d is %.4f", a, b, mag);

    return 0;
}

double magnitude(int x, int y)
{
    double sum_squares = (x * x) + (y * y);

    return sqrt(sum_squares);
}
