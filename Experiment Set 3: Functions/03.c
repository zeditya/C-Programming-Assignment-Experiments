// 3. Employee Data Entry and Display

// Problem: Create a program that allows entry and display of employee details using functions.

#include <stdio.h>

void enterDetails(char name[], int* id, char dept[], float* salary) {
    
    printf("--- Enter Employee Details ---\n");
    printf("Enter Name (single word): ");
    scanf("%s", name); 

    printf("Enter ID: ");
    scanf("%d", id); 
    
    printf("Enter Department (single word): ");
    scanf("%s", dept);
    
    printf("Enter Salary: ");
    scanf("%f", salary); 
}


void displayDetails(char name[], int id, char dept[], float salary) {
    
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    printf("Department: %s\n", dept);
    printf("Salary: %.2f\n", salary);
}


int main() {
    
    
    char emp_name[50];
    int emp_id;
    char emp_dept[50];
    float emp_salary;
   
    enterDetails(emp_name, &emp_id, emp_dept, &emp_salary);
    
    displayDetails(emp_name, emp_id, emp_dept, emp_salary);
    
    return 0;
}