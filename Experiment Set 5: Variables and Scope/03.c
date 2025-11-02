// 3. Block Scope

// Problem: Declare variables within different code blocks ({}) and test their accessibility.

#include <stdio.h>

int main() {
    
    // 'a' is local to main()
    int a = 10;
    
    printf("Inside main, a = %d\n", a);
    
    if (a == 10) {
        
        // --- Start of Inner Block ---
        // 'b' is local to this 'if' block
        int b = 20;
        
        printf("Inside if-block, a = %d\n", a); // 'a' is visible
        printf("Inside if-block, b = %d\n", b); // 'b' is visible
        
        // --- End of Inner Block ---
        // 'b' is destroyed here
    } 
    
    printf("Outside if-block, a = %d\n", a); // 'a' is still visible
    
    // --- THIS LINE WILL CAUSE A COMPILE ERROR ---
    // 'b' is out of scope here
    
    // printf("Outside if-block, trying to access b: %d\n", b);
    
    return 0;
}
