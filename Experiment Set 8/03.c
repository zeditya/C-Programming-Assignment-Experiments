// Create an array, fill it, then increase its size using realloc() and add more values.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int initial_size, new_size, i;
    
    printf("Enter initial size of array: ");
    scanf("%d", &initial_size);
    
    arr = (int*) malloc(initial_size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d integers:\n", initial_size);
    for (i = 0; i < initial_size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the NEW total size for the array (must be > %d): ", initial_size);
    scanf("%d", &new_size);
    arr = (int*) realloc(arr, new_size * sizeof(int));
    
    if (arr == NULL) {
        printf("Reallocation failed!\n");
        return 1;
    }
  
    printf("Enter the %d additional integers:\n", new_size - initial_size);
    for (i = initial_size; i < new_size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n Final Array Elements\n");
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}