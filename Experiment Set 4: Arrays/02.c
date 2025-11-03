// 2. Count Positive, Negative, Odd, and Even Numbers

// Problem: Read integers into an array and count how many are positive, negative, odd, and even.

#include <stdio.h>

int main() {
    
    int arr[100];
    int n, i;
    
    
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
    
   
    for (i = 0; i < n; i++) {
        
        
        if (arr[i] > 0) {
            positive_count++; 
        } else if (arr[i] < 0) {
            negative_count++;
        }
        
       
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
