// 7. Mobile Phone Information System

// Problem: Write a C program to collect and display details about a mobile phone.

#include <stdio.h>

int main() {
    
    char brand_name[50];
    char model_name[50];
    int serial_number;
    float price;
    char color[30];
    int battery_capacity;
    
    printf("--- Enter Mobile Phone Details ---\n");
    
    printf("Brand Name (single word): ");
    scanf("%s", brand_name);
    
    printf("Model Name (single word): ");
    scanf("%s", model_name);
    
    printf("Serial Number: ");
    scanf("%d", &serial_number);
    
    printf("Price: ");
    scanf("%f", &price);
    
    printf("Color (single word): ");
    scanf("%s", color);
    
    printf("Battery Capacity (mAh): ");
    scanf("%d", &battery_capacity);
    
    printf("\n--- Mobile Phone Information Display ---\n");
    printf("Brand:     %s\n", brand_name);
    printf("Model:     %s\n", model_name);
    printf("Serial_No: %d\n", serial_number);
    printf("Price:     %.2f\n", price);
    printf("Color:     %s\n", color);
    printf("Battery:   %d mAh\n", battery_capacity);
    
    return 0;
}