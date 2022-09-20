#include <stdio.h>

struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    /* declare two variables */
    struct student s1 = {19, 9, "John Birghimer"};
    struct student s2 = {22, 10, "Batman Jokerson"};

    printf("Student: %s, %d\n", s1.name, s1.age);
    printf("Student: %s, %d\n", s2.name, s2.age);

    /*
        struct student s1; // declaring

    // type cast needed
    s1= (struct student){19, 9, "John Birghimer"};

    printf("Student: %s, %d\n", s1.name, s1.age);

     */
     /*
        struct student s1 = { .grade = 9, .age = 19, .name = "John Birghimer"};

    printf("Name: %s, Age: %d, Grade: %d\n", s1.name, s1.age, s1.grade);
     */

    return 0;
}
