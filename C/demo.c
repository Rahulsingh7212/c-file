
#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    struct Student student1, student2;
    float totalMarksSum, averageMarks;

    // Input data for student 1
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Total Marks: ");
    scanf("%f", &student1.totalMarks);

    // Input data for student 2
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Total Marks: ");
    scanf("%f", &student2.totalMarks);

    // Calculate total marks and average
    totalMarksSum = student1.totalMarks + student2.totalMarks;
    averageMarks = totalMarksSum / 2.0;

    // Display student information
    printf("\nStudent 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.totalMarks);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.totalMarks);

    printf("\nTotal Marks Sum: %.2f\n", totalMarksSum);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
