#include <stdio.h>

float area_of_circle(float radius);

int main()
{
    float r, a;
    r = 177.5;

    a = area_of_circle(r);

    printf("The area is %f", a);

    return 0;
}

float area_of_circle(float radius)
{

    return 3.14 * radius * radius;
}