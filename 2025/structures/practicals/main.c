#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        char name[50];
        char hall[50];
        char regno[50];
        int age;
        char gender;
    } Student;

    Student student1 = {"Kasule John", "Livingstone", "19/U/14669/PS", 69, 'M'};
    // Student student2 = {"nuwagaba oscar", "Mitchell", "24/U/1035656/PS", 21, 'M'};
    Student student3;
    strcpy(student3.name, "Shadia");
    student3.age = 21;
    student3.gender = 'F';
    strcpy(student3.regno, "24/U/1035656/PS");
    printf("%s\n", student3.name);
    printf("%d\n", student3.age);

    Student *student_ptr = &student1;
    printf("%s\n", student_ptr->name);
    printf("%d\n", student_ptr->age);

    return 0;
}