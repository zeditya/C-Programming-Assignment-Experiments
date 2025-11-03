// 5. Simple Banking System

// Problem: Develop a menu-driven banking system with Deposit, Withdraw, and Check Balance functions.

#include <stdio.h>

float balance = 0.0;

void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    
    if (amount > 0) {
        balance = balance + amount;
        printf("Successfully deposited %.2f. New balance: %.2f\n", amount, balance);
    } else {
        printf("Invalid amount.\n");
    }
}

void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    
    if (amount > 0 && amount <= balance) {
        balance = balance - amount;
        printf("Successfully withdrew %.2f. Remaining balance: %.2f\n", amount, balance);
    } else if (amount > balance) {
        printf("Insufficient funds. Your balance is only %.2f\n", balance);
    } else {
        printf("Invalid amount.\n");
    }
}


void checkBalance() {
    printf("Your current balance is: %.2f\n", balance);
}

int main() {
    
    int choice;
    
   
    while (1) {
        
        printf("\n--- Simple Banking System ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                deposit();
                break;
                
            case 2:
                withdraw();
                break;
                
            case 3:
                checkBalance(); 
                break;
                
            case 4:
                printf("Thank you for banking with us. Goodbye!\n");
                return 0; 
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0; 
}
