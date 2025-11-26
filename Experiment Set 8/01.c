// Allocate an integer array dynamically, input elements, and find sum, max, and min.

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, i, sum = 0;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    
   
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
  
    int max = arr[0];
    int min = arr[0];
    
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
        
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Sum: %d\n", sum);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    free(arr);
    
    return 0;
}