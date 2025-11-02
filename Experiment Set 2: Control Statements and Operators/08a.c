// Program 8a: Palindrome Number

// A palindrome number reads the same forwards and backwards (e.g., 121, 353).

#include <stdio.h>

int main() {
    
    int n, reversed_n = 0, remainder, original_n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original_n = n; // Store the original number
    
    // Reverse the number (same logic as sum of digits, but we build a new number)
    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n = n / 10;
    }
    
    // Compare the original number with the reversed number
    if (original_n == reversed_n) {
        printf("%d is a palindrome.\n", original_n);
    } else {
        printf("%d is not a palindrome.\n", original_n);
    }
    
    return 0;
}