//4. Program to print the sum of digits of a number
//Problem: Write a C program that takes an integer as input and prints the sum of its digits.

#include <stdio.h>

int main() {
    
    int number, sum = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0) {
        
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    printf("Sum of the digits is: %d\n", sum);
    return 0;
  }

    