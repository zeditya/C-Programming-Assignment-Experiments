// 2. Display Student Information

// Problem: Write a program using a function to display a student’s name, roll number, and marks.

#include <stdio.h>

// --- Function Definition ---
// This function returns 'void' (nothing)
// It takes three parameters
void displayStudent(char name[], int roll, float marks) {
    
    printf("\nStudent Details\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Marks: %.1f\n", marks);
}
// -------------------------


// --- Main Function ---
int main() {
    
    // Declare variables in main
    char student_name[50] = "ADITYA";
    int student_roll = 101;
    float student_marks = 88.5;
    
    // Call the display function and pass the variables as arguments
    displayStudent(student_name, student_roll, student_marks);

    return 0;
}