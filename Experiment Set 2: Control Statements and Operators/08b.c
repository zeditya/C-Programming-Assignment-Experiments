// Program 8b: Armstrong Number

// An Armstrong number (of 3 digits) is a number that is equal to the sum of the cubes of its digits (e.g., 153 = 1³ + 5³ + 3³).

#include <stdio.h>
int main() {
    
    int number, original_number, remainder, result = 0;
    
    printf("Enter a three-digit integer: ");
    scanf("%d", &number);
    
    original_number = number;
    
    while (original_number != 0) {
       
        remainder = original_number % 10;
      
        result = result + (remainder * remainder * remainder);
        
        original_number = original_number / 10;
    }
    
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}