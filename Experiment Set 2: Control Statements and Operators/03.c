// 3. Find the largest among three numbers

// Problem: Find the largest among three numbers entered by the user.


#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Check if num1 is greater than or equal to both num2 and num3
    if ( (num1 >= num2) && (num1 >= num3) ) {
        printf("%d is the largest number.\n", num1);
    }
    
    // If not, check if num2 is greater than or equal to both num1 and num3
    else if ( (num2 >= num1) && (num2 >= num3) ) {
        printf("%d is the largest number.\n", num2);
    }
    
    // If neither of the above, then num3 must be the largest
    else {
        printf("%d is the largest number.\n", num3);
    }
    
    return 0;
}