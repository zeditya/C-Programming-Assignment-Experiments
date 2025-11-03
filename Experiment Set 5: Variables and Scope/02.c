// 2. Local Variable Access

// Problem: Declare a local variable inside a function and try to access it outside.

#include <stdio.h>

void function_with_local() {
    
    
    int local_variable = 50;
    
    printf("Inside function: local_variable = %d\n", local_variable);
}

int main() {
    
    int main_variable = 10;
    
    printf("Inside main: main_variable = %d\n", main_variable);
    
   
    function_with_local();
    
    printf("After the function call, 'local_variable' is destroyed.\n");
    
    return 0;
}
