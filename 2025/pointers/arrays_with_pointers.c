#include <stdio.h>

int main()
{

    int num[5] = {1, 2, 3, 4, 5};

    printf("%p\n", &num[0]);
    printf("%p\n", num);
    printf("...............................\n");
    printf("%p\n", &num[1]);
    printf("%p\n", num + 1);

    return 0;
}