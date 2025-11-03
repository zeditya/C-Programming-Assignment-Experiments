// 1. Second Largest Element in an Array

// Problem: Read integers into an array and find the second largest element.

#include <stdio.h>
#include <limits.h> 

int main() {
    
    int arr[100]; 
    int n, i;
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
   
    for (i = 0; i < n; i++) {
        
       
        if (arr[i] > largest) {
           
            secondLargest = largest;
            largest = arr[i];
            
        } 
       
        else if (arr[i] > secondLargest && arr[i] < largest) {
            
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
