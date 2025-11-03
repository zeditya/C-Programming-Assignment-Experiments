// 1. Global Variable Access

// Problem: Declare a global variable and use it inside various functions.

#include <stdio.h>

int global_variable = 100;


void function1() {
    printf("Inside function1: global_variable = %d\n", global_variable);
   
    global_variable = 200;
}


void function2() {
    printf("Inside function2: global_variable = %d\n", global_variable);
}


int main() {
    
    printf("Inside main (before calls): global_variable = %d\n", global_variable);
    
    
    function1();
    
    printf("Inside main (after function1): global_variable = %d\n", global_variable);
    
    
    function2();
    
    return 0;
}
