//Preprocessor
#include <stdio.h>
#include <string.h>
//Main function
int main()

// Variable declation and asignment of login varialbles
    {int saved_password = 12345;
    char saved_username[50] = "admin";
    int password;
    char username[50];
    char name[50];
    char grade;
    int choice;
    int age;
    float descreet_math_mark;
    float linear_algebra_mark;
    float programming_mark;
    float fundermental_of_internet_mark;
    float technological_communication_mark;

// Data collection
    printf("==================SCHOOL SYSTEM LOGIN==================\n");
    printf("Enter username: "); scanf(" %49s", username);
    printf("Enter password: "); scanf(" %d", &password);
    if (strcmp(saved_username, username) == 0 && password == saved_password) {
        {printf("Login successful.\n Thank you.\n");}
    
  

//Data collection
    printf("=================COLLECTING STUDENT DETAILS===================\n");
    printf("Enter student name: "); scanf(" %49s", name);   
    printf("Enter student age: "); scanf(" %d", &age);
    printf("Enter student Descreet mathematics marks: "); scanf(" %f", &descreet_math_mark);
    printf("Etner Numerical linear algebra marks: "); scanf(" %f", &linear_algebra_mark);
    printf("Enter Fundermentals of programming marks: "); scanf(" %f", &programming_mark);
    printf("Enter Technological communication marks: "); scanf(" %f", &technological_communication_mark);
    printf("Enter Fundermentals of the internet marks: "); scanf(" %f", &fundermental_of_internet_mark);

//Data analysis 
    if (descreet_math_mark >= 0 && descreet_math_mark <= 100 && linear_algebra_mark >= 0 && linear_algebra_mark <= 100 && programming_mark >= 0 && programming_mark <= 100 && fundermental_of_internet_mark >= 0 && fundermental_of_internet_mark <= 100 && technological_communication_mark >= 0 && technological_communication_mark <= 100){
    double total_marks = (descreet_math_mark + linear_algebra_mark + programming_mark + technological_communication_mark + fundermental_of_internet_mark);
    double average = (total_marks)/5;
    //Check invalid marks 

    
    if (average >= 80)  {grade = 'A';}
    else if (average >= 70)  {grade = 'B';}
    else if (average >= 60)  {grade = 'C';}
    else if (average >= 50)  {grade = 'D';}
    else {grade = 'E';}
//Reports and analyzed results
    printf("==============SELECT ANY OF THE OPTION FROM 1 TO 3 ================\n 1. View student grade \n 2. View studnet details. \n 3. View student report.\n");
    printf("Enter your choice: "); scanf(" %d", &choice);
    switch (choice)  {
        case 1: 
            printf("===================Student Grade====================\n"); 
            printf("Name: %49s\n", name);
            printf("Grade: %c\n", grade);
            break;
        case 2:
            printf("======================Student Details===========================\n");
            printf("Name: %49s\n", name);
            printf("Age: %d\n", age);
            printf("Descreet Mathematics marks: %.2f\n", descreet_math_mark);
            printf("Numerical linear algebra marks: %.2f\n", linear_algebra_mark);
            printf("Fundermentals of programming marks: %.2f\n", programming_mark);
            printf("Fundermentals of the internet marks: %.2f\n", fundermental_of_internet_mark);
            printf("Technological communication marks: %.2f\n", technological_communication_mark);
            printf("Total marks: %.2f\n", total_marks);
            printf("Average marks: %.2f\n", average);
            break;
        case 3:
            printf("======================Student Report===========================\n");
            printf("Name: %49s\n", name);
            printf("Age: %d\n", age);
            printf("Descreet Mathematics marks: %.2f\n", descreet_math_mark);
            printf("Numerical linear algebra marks: %.2f\n", linear_algebra_mark);
            printf("Fundermentals of programming marks: %.2f\n", programming_mark);
            printf("Fundermentals of the internet marks: %.2f\n", fundermental_of_internet_mark);
            printf("Technological communication marks: %.2f\n", technological_communication_mark);
            printf("Total marks: %.2f\n", total_marks);
            printf("Average marks: %.2f\n", average);
            printf("Grade: %c\n", grade);
            break;
        default:
            printf("Invalid choice: Choice should be between 1, 2 or 3\n");
        }}
        else {printf("Invalid Maks: Marks for all units must be between (0 to 100).\n");}}
        

    else {printf("Error: Incorrect username or password.\n");}
        return 0;

    }
