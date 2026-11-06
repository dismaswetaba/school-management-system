#include <stdio.h>
int main(void)
// A program that makes descisions bassed on conditional statements 
    {printf("STUDENT MANAGEMENT SYSTEM\n");
    char name[] = "Dismas";
    int attendance;
    int age;
    double marks;
    printf("Collecting student details.\n");
    printf("Enter age: ");
    scanf(" %d", &age);
    printf("Enter Class attendance percentage: ");
    scanf(" %d", &attendance);
    printf("Enter marks: ");
    scanf("%lf", &marks);
    if (marks >= 80) {printf("Name: %s\n", name); printf("Marks %.2f\n", marks); printf("Grade: A Plain\n");}
    else if (marks >= 70) {printf("Name %s\n", name); printf("Marks: %.2f\n", marks); printf("Grade: B Plain\n");}
    else if (marks >= 60) {printf("Name %s\n", name); printf("Marks: %.2f\n", marks); printf("Grade: C Plain\n");}
    else if (marks >= 50) {printf("Name %s\n", name); printf("Marks: %.2f\n", marks); printf("Grade: D Plain\n");}
    else {printf("Name %s\n", name); printf("Marks: %.2f\n", marks); printf("Grade: E Fail\n");}
    {
        /* code */
    }
    


    }