// 1. Find the sum of all multiples of 3 or 5 below 1000

// Problem: Find and print the sum of all natural numbers below 1000 that are multiples of 3 or 5


#include <stdio.h>

int main() {
    
    // Initialize sum to 0
    int sum = 0;
    
    // Declare a variable 'i' for the loop
    int i;
    
    // Loop 'i' from 1 up to (but not including) 1000
    for (i = 1; i < 1000; i++) {
        
        // Check if 'i' is divisible by 3 OR divisible by 5
        if ( (i % 3 == 0) || (i % 5 == 0) ) {
            
            // If it is, add 'i' to the sum
            sum = sum + i;
        }
    }
    
    // Print the final total sum
    printf("The sum of all multiples of 3 or 5 below 1000 is: %d\n", sum);
    
    return 0;
}