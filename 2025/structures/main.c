#include <stdio.h>

typedef struct
{
    double x;
    double y;

} point;

void changePoint(point *p);

int main()
{

    point point2 = {1.2, 3.4};

    // point1.x = 3.4;
    // point1.y = 4.6;

    printf("%f\t %f\n", point2.x, point2.y);

    int num = 5;
    int *num_pointer = &num;

    point point1 = {5.2, 7.3};
    point *point1_ptr = &point1;

    // before changing
    // printf("%f\t %f\n", point1.x, point1.y);
    // printf("%f\t %f\n", point1_ptr->x, point1_ptr->y);

    changePoint(&point1);

    printf("%f\t %f\n", point1.x, point1.y);

    return 0;
}

void changePoint(point *p)
{
    printf("x: %f y: %f\n", p->x, p->y);

    p->x = 1.1;
    p->y = 1.1;
}