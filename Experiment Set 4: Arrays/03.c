// 3. Frequency of a Number in an Array

// Problem: Find how many times a specific number appears in a given array.

#include <stdio.h>

int main() {
    
    int arr[100];
    int n, i, numToFind, count = 0;
    
    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Get the number to search for
    printf("Enter the number to find: ");
    scanf("%d", &numToFind);
    
    // Loop through the array
    for (i = 0; i < n; i++) {
        
        // If the current element matches the number, increment count
        if (arr[i] == numToFind) {
            count++;
        }
    }
    
    printf("The number %d appears %d time(s) in the array.\n", numToFind, count);
    
    return 0;
}
