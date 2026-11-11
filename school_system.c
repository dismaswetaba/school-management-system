#include <stdio.h>
int main(void)
// A program that makes descisions bassed on conditional statements 
    {printf("STUDENT MANAGEMENT SYSTEM\n");
    int choice;
    char name[50];
    int attendance;
    int age;
    double marks;
    printf("SELECT CHOICE FROM 1 TO 4\n")
    printf("1. Calculate student grade: \n");
    printf("2. View student report: \n");
    printf("3. View student Programs: \n");
    printf("4. View performance analysis: \n");
    switch (choice)



    printf("Enter student name: ");

    scanf("%49s", name);
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
