#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar(); // Reads a single character
    printf("You entered: ");
    putchar(ch); // Prints the entered character
    putchar('\n');
    return 0;
}
