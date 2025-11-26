// Use calloc to allocate memory (which initializes to zero), display it, modify it, and display again.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int*) calloc(n, sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
 
    printf("\nValues immediately after calloc\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("\nNow, enter %d new numbers to update the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    printf("--- Updated Array ---\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}