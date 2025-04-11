#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        char name[50];
        char hall[50];
        char gender;
        char regno[50];
        int age;
    } Student;

    Student student1 = {"Paul Mayanja", "Mitchell", 'M', "24/U/24345", 25};
    printf("%s\n", student1.name);
    printf("%s\n", student1.hall);
    printf("%c\n", student1.gender);

    printf("%d \n", student1.age);

    Student student2 = {"Paul Mukasa", "nkrumah", 'M', "24/U/243467", 28};
    Student student3;
    // student3.age = 20;
    //  student3.name = "Kasule John";
    printf("Enter your name: ");
    fgets(student3.name, sizeof(student3.name), stdin);
    printf("Enter your registration number: ");
    fgets(student3.regno, sizeof(student3.regno), stdin);
    printf("Enter your hall of residence: ");
    fgets(student3.hall, sizeof(student3.hall), stdin);
    printf("Enter your gender: ");
    scanf("%c", &student3.gender);

    printf("Enter your age: ");
    scanf("%d", &student3.age);

    // strcpy(student3.name, "Kasule John");
    // strcpy(student3.regno, "19/U/14XXX");
    // strcpy(student3.hall, "Lumumba");
    // student3.gender = 'M';
    printf("%s\n", student3.name);
    printf("%s\n", student3.hall);
    printf("%c\n", student3.gender);

    printf("%d", student3.age);

    Student *student_ptr = &student3;
    printf("%s\n", student_ptr->name);
    printf("%s\n", student_ptr->hall);
    printf("%c\n", student_ptr->gender);

    printf("%d", student_ptr->age);

    return 0;
}