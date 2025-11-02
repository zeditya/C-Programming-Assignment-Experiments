// 2. Local Variable Access

// Problem: Declare a local variable inside a function and try to access it outside.

#include <stdio.h>

// --- Function with a Local Variable ---
void function_with_local() {
    
    // 'local_variable' is LOCAL to this function
    int local_variable = 50;
    
    printf("Inside function: local_variable = %d\n", local_variable);
}

// --- Main Function ---
int main() {
    
    int main_variable = 10;
    
    printf("Inside main: main_variable = %d\n", main_variable);
    
    // Call the function
    function_with_local();
    
    // --- THIS LINE WILL CAUSE A COMPILE ERROR ---
    // You cannot access 'local_variable' from 'main'
    
    // printf("Inside main, trying to access: %d\n", local_variable); 
    
    printf("After the function call, 'local_variable' is destroyed.\n");
    
    return 0;
}
