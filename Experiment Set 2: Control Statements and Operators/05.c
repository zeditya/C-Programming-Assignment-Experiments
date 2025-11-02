// 5. Calculate the quotient and remainder of two given numbers

// Problem: Calculate the quotient and remainder of two given numbers.

#include <stdio.h>

int main() {
    
    int dividend, divisor, quotient, remainder;
    
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    
    // The division operator (/) gives the quotient
    quotient = dividend / divisor;
    
    // The modulo operator (%) gives the remainder
    remainder = dividend % divisor;
    
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    
    return 0;
}

