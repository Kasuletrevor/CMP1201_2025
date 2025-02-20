#include <stdio.h>

int main()
{
    int marks;
    int division;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 60)
    {
        printf("First Division\n");
    }

    else
    {
        if (marks >= 50)
        {
            printf("Second Division\n");
        }

        else
        {
            if (marks >= 40)
                printf("Third Division\n");

            else
                printf("Fail\n");
        }
    }

    return 0;
}