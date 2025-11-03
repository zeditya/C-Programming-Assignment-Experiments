// 4. Determine and output whether a number N is even or odd

// Problem: Check if a given number is even or odd.


#include <stdio.h>

int main() {
    
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    }
    
    else {
        printf("%d is an odd number.\n", number);
    }
    
    return 0;
}