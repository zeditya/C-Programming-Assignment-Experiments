// 5. Product Information System
// Problem: Write a C program to collect and display details about a product.

#include <stdio.h>

int main() {
    
    char product_name[50];
    int product_id;
    int quantity;
    float price;
    char manufacturer[50];
    char category[50];
    
    printf("Enter Product Details\n");
    
    printf("Product Name (single word): ");
    scanf("%s", product_name);
    
    printf("Product ID: ");
    scanf("%d", &product_id);
    
    printf("Quantity: ");
    scanf("%d", &quantity);
    
    printf("Price: ");
    scanf("%f", &price);
    
    printf("Manufacturer (single word): ");
    scanf("%s", manufacturer);
    
    printf("Category (single word): ");
    scanf("%s", category);
    
    printf("\nProduct Information Display\n");
    printf("Product Name: %s\n", product_name);
    printf("Product ID:   %d\n", product_id);
    printf("Quantity:     %d\n", quantity);
    printf("Price:        %.2f\n", price); 
    printf("Manufacturer: %s\n", manufacturer);
    printf("Category:     %s\n", category);
    
    return 0;
}

