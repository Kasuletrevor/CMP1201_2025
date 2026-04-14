#include <stdio.h>

int main()
{

    int x = 42;
    char grade = 'A';

    int *ptr, *num;

    ptr = &x;
    num = &x;
    char *gradeptr = &grade;

    printf("Value of x: %d\n", x);
    *ptr = 100;
    *num = 200;
    printf("Value of x is %d\n", *ptr);
    printf("Address of x: %p\n", ptr);

    printf("The value of grade is %c\n", grade);
    printf("The address of grade is %p\n", gradeptr);

    return 0;
}