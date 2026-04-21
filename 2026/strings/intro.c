#include <stdio.h>
#include <string.h>

int main()
{
    char name[20] = "Trevor";
    char firstname[] = "John";

    // printf("Enter your name: ");
    // scanf("%s", name);
    // fgets(name, sizeof(name), stdin);

    printf("%-40s", name);

    // puts(name);

    // strcpy(name, firstname);

    return 0;
}