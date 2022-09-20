#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Student Structure Definition
struct student{
    char name[50];
    int number;
    int age;
};
// Struct pointer as a function parameter
void showStudentData(struct student *st)
{
    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);
    printf("Number : %d\n", st->number);
    printf("Age: %d\n", st->age);
}
int main()
{
    // New Student Record Creation
    struct student st1;
    struct student st2;
    // Filling Student 1 details
    strcpy(st1.name, "Krishna");
    st1.number = 5;
    st1.age = 21;
    // Filling student 2 Details
    strcpy(st2.name, "Max");
    st2.number = 9;
    st2.age = 15;
    // Displaying student 1 Details
    showStudentData(&st1);
    // Displaying student 2 Details
    showStudentData(&st2);

    return 0;
}
