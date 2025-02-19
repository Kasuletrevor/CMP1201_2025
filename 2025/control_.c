#include <stdio.h>

int main()
{

    int foo, bar;

    foo = 7 > 0;
    bar = 8 != 3;

    printf("%d\n", foo);
    printf("%d\n", bar);

    foo = (bar = 6);

    printf("%d\n", foo);
    printf("%d\n", bar);

    return 0;
}