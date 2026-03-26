#include <stdio.h>

int main()
{

    int choice = 1;

    switch (choice)
    {

    case 1:
        printf("You entered one\n");
        break;

    case 2:
        printf("You entered Two\n");
        break;

    default:
        printf("You entered a wrong choice");
    }

    return 0;
}