// 6. Generate all even numbers between 100 and 200

// Problem: Print all even numbers in the range 100 to 200.

#include <stdio.h>

int main() {
    
    int i;
    
    printf("Even numbers between 100 and 200:\n");
    
    // Start 'i' at 100
    // Keep looping as long as 'i' is less than or equal to 200
    // After each loop, add 2 to 'i'
    for (i = 100; i <= 200; i = i + 2) {
        printf("%d\n", i);
    }
    
    return 0;
}
