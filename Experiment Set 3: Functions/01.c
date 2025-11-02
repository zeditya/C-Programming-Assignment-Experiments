// 1. Calculate Area of a Circle

// Problem: Write a function that takes radius as input and returns the area of the circle.

// Define a constant for PI
#define PI 3.14159

// Function Definition
// This function takes one 'float' (radius) and returns a 'float' (area)
float calculateArea(float r) {
    
    float area = PI * r * r;
    
    // 'return' sends this value back to where the function was called
    return area;
}
// -------------------------


// --- Main Function ---
int main() {
    
    float radius, result;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // Call the function, pass 'radius' to it,
    // and store the returned value in 'result'
    result = calculateArea(radius);
    
    printf("The area of the circle is: %.2f\n", result);
    
    return 0;
}