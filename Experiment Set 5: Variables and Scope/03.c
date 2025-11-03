// 3. Block Scope

// Problem: Declare variables within different code blocks ({}) and test their accessibility.

#include <stdio.h>

int main() {
    
    int a = 10;
    
    printf("Inside main, a = %d\n", a);
    
    if (a == 10) {
        
        int b = 20;
        
        printf("Inside if-block, a = %d\n", a); 
        printf("Inside if-block, b = %d\n", b);
        
    } 
    
    printf("Outside if-block, a = %d\n", a); 
    
    return 0;
}
