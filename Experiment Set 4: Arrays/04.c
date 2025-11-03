// 4. Matrix Multiplication

// Problem: Read two matrices and compute their product, checking for compatibility.

#include <stdio.h>

int main() {
    
    int A[10][10], B[10][10], C[10][10]; 
    int m, n, p, q;
    int i, j, k; 
    int sum;
    
    printf("Enter dimensions of Matrix A (rows cols): ");
    scanf("%d %d", &m, &n);
    
    printf("Enter dimensions of Matrix B (rows cols): ");
    scanf("%d %d", &p, &q);
    
    
    if (n != p) {
        printf("Matrices are not compatible for multiplication.\n");
        printf("Columns of A (%d) must equal Rows of B (%d).\n", n, p);
        return 1; 
    }
    
    
    printf("Enter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) { 
        for (j = 0; j < n; j++) { 
            scanf("%d", &A[i][j]);
        }
    }
    
    
    printf("Enter elements of Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) { 
            
            
            sum = 0;
            for (k = 0; k < n; k++) { 
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
    
   
    printf("\nProduct Matrix C (%d x %d):\n", m, q);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n"); 
    }
    
    return 0;
}