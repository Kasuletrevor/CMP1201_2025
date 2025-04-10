#include <stdio.h>

int main()
{
    int myage = 20;
    int *myage_ptr = &myage;

    // myage_ptr = &myage;

    printf("%d\n", myage);
    printf("%p \n", &myage);
    printf("%p \n", myage_ptr);

    return 0;
}