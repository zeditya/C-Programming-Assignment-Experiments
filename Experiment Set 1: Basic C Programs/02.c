//2. Program to print the address of a variable
// Problem: Write a C program to declare a variable and print its memory address.

#include <stdio.h>

int main() {
    
    int my_variable = 10;

    printf("The value of the variable is: %d\n", my_variable);
    
    printf("The memory address of the variable is: %p\n", &my_variable);
    
    return 0;
}