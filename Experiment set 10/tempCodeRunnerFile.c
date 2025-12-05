#include <stdio.h>

#define ADD(x, y) ((x) + (y))
#define SUB(x, y) ((x) - (y))
#define MUL(x, y) ((x) * (y))
#define DIV(x, y) ((x) / (y))

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum: %.2f\n", ADD(a, b));
    printf("Difference: %.2f\n", SUB(a, b));
    printf("Product: %.2f\n", MUL(a, b));

    if (b != 0) {
        printf("Quotient: %.2f\n", DIV(a, b));
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}