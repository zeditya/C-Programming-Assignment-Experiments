// 3. Employee Data Entry and Display

// Problem: Create a program that allows entry and display of employee details using functions.

#include <stdio.h>

// --- Entry Function ---
// This function takes POINTERS as parameters
// int* id means "a pointer to an integer"
// float* salary means "a pointer to a float"
void enterDetails(char name[], int* id, char dept[], float* salary) {
    
    printf("--- Enter Employee Details ---\n");
    printf("Enter Name (single word): ");
    scanf("%s", name); // Array 'name' is already a pointer
    
    printf("Enter ID: ");
    scanf("%d", id); // 'id' is already a pointer, so NO '&'
    
    printf("Enter Department (single word): ");
    scanf("%s", dept);
    
    printf("Enter Salary: ");
    scanf("%f", salary); // 'salary' is already a pointer, so NO '&'
}

// --- Display Function ---
// This function takes regular values (no pointers)
void displayDetails(char name[], int id, char dept[], float salary) {
    
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    printf("Department: %s\n", dept);
    printf("Salary: %.2f\n", salary);
}

// --- Main Function ---
int main() {
    
    // Declare variables in main to hold the data
    char emp_name[50];
    int emp_id;
    char emp_dept[50];
    float emp_salary;
    
    // Call the entry function
    // We pass the ADDRESS of id and salary using '&'
    enterDetails(emp_name, &emp_id, emp_dept, &emp_salary);
    
    // Call the display function
    // We pass the VALUES
    displayDetails(emp_name, emp_id, emp_dept, emp_salary);
    
    return 0;
}