#include <stdio.h>

int main()
{
    int i = 0, count = 0, sum = 0;
    while (i < 10)
    {
        if(i%2 == 1){
            sum = sum + i;
            count++;
        }

        i++;
    }
    printf("Sum: %d\n", sum);
    printf("Count: %d\n", count);
}