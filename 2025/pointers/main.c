#include <stdio.h>

int main()
{
    int num = 4;
    int *ptr = &num;

    printf("%d\n", num);
    printf("%p\n", &num);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", *&num);

    *ptr = 10;
    printf("%d\n", num);

    return 0;
}