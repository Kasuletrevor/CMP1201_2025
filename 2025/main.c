#include <stdio.h>

int main(void)
{
    double length, width, area;
    printf("Enter the length\n");
    scanf("%lf", &length);
    printf("enter the width\n");
    scanf("%lf", &width);
    area = length * width;
    printf("The area is: %f", length);

    return 0;
}