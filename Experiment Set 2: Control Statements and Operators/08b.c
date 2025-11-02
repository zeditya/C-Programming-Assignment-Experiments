// Program 8b: Armstrong Number

// An Armstrong number (of 3 digits) is a number that is equal to the sum of the cubes of its digits (e.g., 153 = 1³ + 5³ + 3³).

#include <stdio.h>
int main() {
    
    int number, original_number, remainder, result = 0;
    
    printf("Enter a three-digit integer: ");
    scanf("%d", &number);
    
    original_number = number;
    
    while (original_number != 0) {
        
        // Get the last digit
        remainder = original_number % 10;
        
        // Add the cube of the digit to the result
        result = result + (remainder * remainder * remainder);
        
        // Remove the last digit
        original_number = original_number / 10;
    }
    
    // Check if the result is equal to the original number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}