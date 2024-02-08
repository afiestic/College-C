#include <stdio.h>

int main()
{
    // Using a single structure
    struct Student
    {
        int rollNumber;
        char name[50];
        float marks;
    };

    struct Student student1 = {1, "John Doe", 85.5};

    // Access and display structure members
    printf("Student Information:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    // Using an array of structures
    struct Student students[3];

    // Input information for each student
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Using a structure containing arrays
    struct Course
    {
        char courseName[50];
        int courseCode;
        float grades[5];
    };

    struct Course programmingCourse;

    // Input information for the course
    printf("Enter details for the course:\n");
    printf("Course Name: ");
    scanf("%s", programmingCourse.courseName);
    printf("Course Code: ");
    scanf("%d", &programmingCourse.courseCode);

    // Input grades for each assignment
    printf("Enter grades for each assignment (5 assignments):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Assignment %d: ", i + 1);
        scanf("%f", &programmingCourse.grades[i]);
    }

    // Display information for the course
    printf("\nCourse Information:\n");
    printf("Course Name: %s\n", programmingCourse.courseName);
    printf("Course Code: %d\n", programmingCourse.courseCode);
    printf("Grades for Assignments:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Assignment %d: %.2f\n", i + 1, programmingCourse.grades[i]);
    }

    return 0;
}
