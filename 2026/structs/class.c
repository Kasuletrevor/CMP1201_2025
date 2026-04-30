#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char name[50];
    int age;
    char department[50];
} student_t;

void print_student(student_t *n)
{
    printf(" age: %d\n", n->age);
    printf(" id: %d\n", n->id);
    printf("%s\n", n->name);
}

int main()
{
    student_t class[3] = {
        {125, "Alice T", 43, "ECE"},
        {124, "Bob T", 43, "ECE"},
        {121, "kadondi T", 43, "ECE"}
    };

    printf("Name of 1st student: %s",class[0].name );


    // printf("Alice's department: %s\n", alice2.department);

    return 0;
}