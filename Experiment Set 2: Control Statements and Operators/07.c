// 7. Check if a number is even or odd using the ternary operator

// Problem: Use the ternary operator to check if a number is even or odd.

#include <stdio.h>

int main() {
    
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Use the ternary operator
    (number % 2 == 0) ? printf("%d is Even\n", number) : printf("%d is Odd\n", number);
    
    return 0;
}