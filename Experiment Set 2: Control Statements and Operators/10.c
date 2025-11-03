// 10. Create a Simple Calculator (+, -, *, /, %)

// Problem: Make a simple calculator using a switch statement.


#include <stdio.h>

int main() {
    
    char op; 
    float num1, num2;
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    
    switch (op) {
       
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break; 
      
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
       
        case '/':
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;

        case '%':
            
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            break;
    
        default:
            printf("Error! Operator is not correct\n");
    }
    
    return 0;
}