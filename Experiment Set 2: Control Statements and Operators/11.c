// 11. Implement Operators using nested switch case

// Problem: Demonstrate Relational, Logical, Bitwise, Assignment, and Increment/Decrement operators using a nested switch case.

#include <stdio.h>

int main() {
    
    int outer_choice, inner_choice;
    int a = 10, b = 5, c;
    
    printf("--- Operator Demonstration ---\n");
    printf("Variables: a = %d, b = %d\n", a, b);
    printf("1. Relational Operators\n");
    printf("2. Logical Operators (using 1=true, 0=false)\n");
    printf("3. Bitwise Operators\n");
    printf("4. Assignment Operators\n");
    printf("5. Increment/Decrement Operators\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &outer_choice);
    
    switch (outer_choice) {
        
        case 1: 
            printf("--- Relational ---\n");
            printf("1. Check a > b\n");
            printf("2. Check a == b\n");
            printf("Enter sub-choice: ");
            scanf("%d", &inner_choice);
            
          
            switch (inner_choice) {
                case 1:
                    printf("Result of (a > b) is: %d (1=true, 0=false)\n", a > b);
                    break;
                case 2:
                    printf("Result of (a == b) is: %d (1=true, 0=false)\n", a == b);
                    break;
                default:
                    printf("Invalid sub-choice.\n");
            }
            break;
            
        case 2:
            printf("--- Logical ---\n");
            printf("Result of (a > b && b > 0) is: %d\n", (a > b) && (b > 0)); 
            printf("Result of (a < b || b > 0) is: %d\n", (a < b) || (b > 0)); 
            printf("Result of !(a == b) is: %d\n", !(a == b)); 
            break;
            
        case 3:
            printf("--- Bitwise ---\n");
            printf("a = %d (binary 1010), b = %d (binary 0101)\n", a, b);
            printf("a & b (AND) = %d (binary 0000)\n", a & b);
            printf("a | b (OR)  = %d (binary 1111)\n", a | b);
            printf("a ^ b (XOR) = %d (binary 1111)\n", a ^ b);
            printf("~a (NOT a)  = %d\n", ~a);
            printf("a << 1 (Left Shift) = %d (binary 10100)\n", a << 1);
            printf("a >> 1 (Right Shift) = %d (binary 0101)\n", a >> 1);
            break;
            
        case 4:
            printf("--- Assignment ---\n");
            c = a;
            printf("c = a  -> c is %d\n", c);
            c += b; 
            printf("c += b -> c is %d\n", c);
            c -= a; 
            printf("c -= a -> c is %d\n", c);
            break;
            
        case 5: 
            printf("--- Increment/Decrement ---\n");
            printf("Original a = %d\n", a);
            a++; 
            printf("a++ (Post-increment) -> a is now %d\n", a);
            ++a; 
            printf("++a (Pre-increment)  -> a is now %d\n", a);
            a--; 
            printf("a-- (Post-decrement) -> a is now %d\n", a);
            --a; 
            printf("--a (Pre-decrement)  -> a is now %d\n", a);
            break;
            
        default:
            printf("Invalid choice.\n");
    }
    
    return 0;
}
