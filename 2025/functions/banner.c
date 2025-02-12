#include <stdio.h>

double area(double radius);

int main(void)
{

    // double  r = 10.56;
    double price;
    double r;
    double area_pizza;
    double psqi;

    r = 10.56;
    price = 25000;

    area_pizza = area(r);

    printf("The area of the pizza is : %f\n", area_pizza);

    psqi = price / area_pizza;

    printf("The price per square inch of the pizza is %.3f\n", psqi);

    return 0;
}

double area(double radius)
{
    double a;
    a = 3.143 * radius * radius;
    // printf("The area is %.3f\n", a);

    return a;
}