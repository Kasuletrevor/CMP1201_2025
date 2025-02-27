#include <stdio.h>

int main()
{
    int i, even;
    i = 0, even = 0;
    for (; i < 10; i++, even += 2)
        printf("%d\t", even);
    return 0;
}