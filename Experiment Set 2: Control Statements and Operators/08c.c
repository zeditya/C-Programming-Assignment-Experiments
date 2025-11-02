// Program 8c: Fibonacci Sequence

// A sequence where each number is the sum of the two preceding ones (e.g., 0, 1, 1, 2, 3, 5, 8, ...).

#include <stdio.h>

int main() {
    
    int i, n;
    
    // t1 and t2 are the first two terms
    int t1 = 0, t2 = 1;
    
    // nextTerm will hold the sum (t1 + t2)
    int nextTerm;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    
    // Loop 'i' from 1 up to 'n'
    for (i = 1; i <= n; i++) {
        
        // Print the first term
        printf("%d, ", t1);
        
        // Calculate the next term
        nextTerm = t1 + t2;
        
        // "Shift" the terms for the next loop
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    
    return 0;
}