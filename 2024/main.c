#include <stdio.h>
#define PI 3.14159

int main()
{

float area, radius;
printf("Enter the radius:");
scanf("%f",&radius);

area=PI*radius*radius;

printf("The area of circle of radius %.2f is %.2f",radius, area);
// printf("area of the circle is %f", area);

    return 0;
}