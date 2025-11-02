// 10. Create a Simple Calculator (+, -, *, /, %)

// Problem: Make a simple calculator using a switch statement.


#include <stdio.h>

int main() {
    
    char op; // To store the operator (+, -, etc.)
    float num1, num2;
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // Note the space before %c
    
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    
    // The switch statement checks the value of 'op'
    switch (op) {
        
        // If op == '+'
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break; // 'break' exits the switch
            
        // If op == '-'
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
            
        // If op == '*'
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
            
        // If op == '/'
        case '/':
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;

        // If op == '%'
        case '%':
            // Modulo only works on integers
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            break;
            
        // If 'op' doesn't match any case
        default:
            printf("Error! Operator is not correct\n");
    }
    
    return 0;
}