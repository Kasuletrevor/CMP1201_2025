#include <stdio.h>

int main()
{

    char grade = 'A';
    char *num_ptr = &grade;

    printf("%c\n", grade);
    printf("%p\n", &grade);
    printf("%p\n", num_ptr);

    printf("%c\n", *num_ptr);

    return 0;
}