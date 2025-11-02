// Pattern 9a: Right-Angle Star Triangle

// *
// **
// ***
// ****
// *****


#include <stdio.h>

int main() {
    
    int i, j, rows;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    // Outer loop controls the rows (from 1 to 'rows')
    for (i = 1; i <= rows; i++) {
        
        // Inner loop controls the columns (prints '*' 'i' times)
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // After the inner loop finishes, print a new line
        printf("\n");
    }
    
    return 0;
}
