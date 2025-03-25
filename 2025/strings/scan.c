#include <stdio.h>

int main()
{

    char name[50];

    printf("Enter your name: \t");

    // scanf("%s", name);
    fgets(name, 50, stdin);

    printf("The name is %s", name);

    return 0;
}