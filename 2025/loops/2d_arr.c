#include <stdio.h>
#define S 7
#define M 4

int main()
{
    int s, m;

    printf("Enter the number of students:");
    scanf("%d", &s);
    printf("Enter the number of scores:");
    scanf("%d", &m);

    int scores[S][M];

    for (int i = 0; i < S; i++)
    {

        printf("Student %d\n", i);
        for (int j = 0; j < M; j++)
        {
            printf("Mark %d: \t", j);
            scanf("%d", &scores[i][j]);
        }
        printf("*************\n");
    }
    printf("Now printing the entries");

    for (int i = 0; i < S; i++)
    {

        printf("Student %d\n", i);
        for (int j = 0; j < M; j++)
        {
            printf("Mark %d: %d \n", j, scores[i][j]);
        }
        printf("*************\n");
    }
    return 0;
}