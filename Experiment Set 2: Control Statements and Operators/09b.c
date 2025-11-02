// Pattern 9b: Number Triangle (Floyd's Triangle)

// 1
// 2 3
// 4 5 6
// 7 8 9 10


#include <stdio.h>

int main() {
    
    int i, j, rows, num = 1;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop for columns
        for (j = 1; j <= i; j++) {
            
            // Print the current number and then increment it
            printf("%d ", num);
            num++;
        }
        
        // New line after the row is done
        printf("\n");
    }
    
    return 0;
}
