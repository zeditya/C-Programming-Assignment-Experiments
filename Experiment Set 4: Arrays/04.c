// 4. Matrix Multiplication

// Problem: Read two matrices and compute their product, checking for compatibility.

#include <stdio.h>

int main() {
    
    int A[10][10], B[10][10], C[10][10]; // 2D arrays for matrices
    int m, n, p, q; // Dimensions
    int i, j, k; // Loop variables
    int sum;
    
    printf("Enter dimensions of Matrix A (rows cols): ");
    scanf("%d %d", &m, &n);
    
    printf("Enter dimensions of Matrix B (rows cols): ");
    scanf("%d %d", &p, &q);
    
    // --- Compatibility Check ---
    // Columns of A (n) must equal Rows of B (p)
    if (n != p) {
        printf("Matrices are not compatible for multiplication.\n");
        printf("Columns of A (%d) must equal Rows of B (%d).\n", n, p);
        return 1; // Exit program with an error
    }
    
    // --- Get Matrix A ---
    printf("Enter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) { // Loop for rows
        for (j = 0; j < n; j++) { // Loop for columns
            scanf("%d", &A[i][j]);
        }
    }
    
    // --- Get Matrix B ---
    printf("Enter elements of Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    // --- Calculate Matrix C (Product) ---
    // Resultant matrix C will have dimensions m x q
    for (i = 0; i < m; i++) { // Loop rows of C
        for (j = 0; j < q; j++) { // Loop cols of C
            
            // Calculate C[i][j]
            sum = 0;
            for (k = 0; k < n; k++) { // Loop 'inner' dimension (n or p)
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
    
    // --- Print Resultant Matrix C ---
    printf("\nProduct Matrix C (%d x %d):\n", m, q);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", C[i][j]); // \t is a tab
        }
        printf("\n"); // New line after each row
    }
    
    return 0;
}