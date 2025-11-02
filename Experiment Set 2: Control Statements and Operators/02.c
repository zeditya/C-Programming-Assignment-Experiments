// 2. Find all roots of a quadratic equation

// Problem: Find all roots of a quadratic equation ax² + bx + c = 0.


#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;
    
    // Case 1: Discriminant is positive (two real and distinct roots)
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    
    // Case 2: Discriminant is zero (two real and equal roots)
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    
    // Case 3: Discriminant is negative (two complex roots)
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    
    return 0;
}