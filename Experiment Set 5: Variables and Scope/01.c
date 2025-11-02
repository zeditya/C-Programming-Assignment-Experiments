// 1. Global Variable Access

// Problem: Declare a global variable and use it inside various functions.

#include <stdio.h>

// --- Global Variable ---
// Declared outside all functions
int global_variable = 100;

// --- Function 1 ---
void function1() {
    printf("Inside function1: global_variable = %d\n", global_variable);
    
    // We can also modify it
    global_variable = 200;
}

// --- Function 2 ---
void function2() {
    printf("Inside function2: global_variable = %d\n", global_variable);
}

// --- Main Function ---
int main() {
    
    printf("Inside main (before calls): global_variable = %d\n", global_variable);
    
    // Call function 1, which reads and modifies the global var
    function1();
    
    printf("Inside main (after function1): global_variable = %d\n", global_variable);
    
    // Call function 2, which reads the modified value
    function2();
    
    return 0;
}
