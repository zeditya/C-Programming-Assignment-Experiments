// 1. Second Largest Element in an Array

// Problem: Read integers into an array and find the second largest element.

#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    
    int arr[100]; // Declare an array that can hold up to 100 integers
    int n, i;
    
    // We need to initialize 'largest' and 'secondLargest' to the
    // smallest possible integer value.
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Loop through the array to find the largest and second largest
    for (i = 0; i < n; i++) {
        
        // If current element is greater than the current largest...
        if (arr[i] > largest) {
            
            // ...then the old 'largest' becomes the 'secondLargest'
            secondLargest = largest;
            
            // ...and the new 'largest' is the current element
            largest = arr[i];
            
        } 
        // If current element is between largest and secondLargest...
        else if (arr[i] > secondLargest && arr[i] < largest) {
            
            // ...then it becomes the new 'secondLargest'
            secondLargest = arr[i];
        }
    }
    
    if (secondLargest == INT_MIN) {
        printf("There is no second largest element (e.g., all elements are the same).\n");
    } else {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", secondLargest);
    }
    
    return 0;
}
