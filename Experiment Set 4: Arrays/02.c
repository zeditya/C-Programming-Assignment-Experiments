// 2. Local Variable Access

// Problem: Declare a local variable inside a function and try to access it outside.

#include <stdio.h>

int main() {
    
    int arr[100];
    int n, i;
    
    // Initialize all counters to 0
    int positive_count = 0;
    int negative_count = 0;
    int even_count = 0;
    int odd_count = 0;
    
    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Loop through the array and check each element
    for (i = 0; i < n; i++) {
        
        // Check for positive or negative
        if (arr[i] > 0) {
            positive_count++; // ++ is shorthand for "add 1 to"
        } else if (arr[i] < 0) {
            negative_count++;
        }
        
        // Check for even or odd
        // Note: We treat 0 as an even number
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("\n--- Results ---\n");
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
    
    return 0;
}