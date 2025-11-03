// Program 8c: Fibonacci Sequence

// A sequence where each number is the sum of the two preceding ones (e.g., 0, 1, 1, 2, 3, 5, 8, ...).

#include <stdio.h>

int main() {
    
    int i, n;
    
    int t1 = 0, t2 = 1;
    
    int nextTerm;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    
    for (i = 1; i <= n; i++) {
       
        printf("%d, ", t1);
       
        nextTerm = t1 + t2;
        
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    
    return 0;
}