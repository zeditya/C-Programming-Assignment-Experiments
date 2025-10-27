//2. Program to print the address of a variable
// Problem: Write a C program to declare a variable and print its memory address.

#include <stdio.h>

int main() {
    
    // Declare an integer variable and assign it the value 10
    int my_variable = 10;
    
    // Print the value of the variable
    printf("The value of the variable is: %d\n", my_variable);
    
    // Print the memory address of the variable
    // & is the "address-of" operator
    // %p is the format specifier to print an address (pointer)
    printf("The memory address of the variable is: %p\n", &my_variable);
    
    return 0;
}