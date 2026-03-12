#include <stdio.h>

void greeting();
void printnum(int num);
int sum(int num1, int num2);

int main(void)
{
    greeting();

    int a;
    int b;

    printf("Enter the value of a:  ");
    scanf("%d", &a);
    printnum(a);

    printf("Enter the value of b:  ");
    scanf("%d", &b);
    printnum(b);

    // int c = sum(a, b);
    sum(a, b);
    // printnum(c);

    return 0;
}

void greeting()
{
    printf("Hello world\n");
}

void printnum(int num)
{

    printf("The number is %d\n", num);
}

int sum(int num1, int num2)
{
    return num1 + num2;
}