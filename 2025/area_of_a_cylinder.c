#include <stdio.h>
#define PI 3.14159

int main()
{

    double r, h, area;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &r);

    h = 10.0;
    area = 2 * PI * r * (r + h);
    printf("The area of the cylinder is: %.4f\n", area);

    return 0;
}