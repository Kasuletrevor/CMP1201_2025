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
    student_t alice = {6768, "Alice Tumukunde", 19, "ECE"};
    student_t bob = {2345, " Bob Kadondi", 0, "0"};
    student_t alice2 = alice;

    student_t *ptr = &bob;
    ptr->age = 19;
    (*ptr).age = 19;

    print_student(ptr);

    // printf("Alice's department: %s\n", alice2.department);

    return 0;
}