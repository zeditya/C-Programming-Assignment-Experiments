#include <stdio.h>

int main() {
    int a = 100;
    float b = 200.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Original Integer Address: %p\n", (void*)p1);
    p1++;
    printf("After Increment: %p\n", (void*)p1);
    p1--;
    printf("After Decrement: %p\n", (void*)p1);

    printf("\nOriginal Float Address: %p\n", (void*)p2);
    p2++;
    printf("After Increment: %p\n", (void*)p2);
    p2--;
    printf("After Decrement: %p\n", (void*)p2);

    printf("\nOriginal Char Address: %p\n", (void*)p3);
    p3++;
    printf("After Increment: %p\n", (void*)p3);
    p3--;
    printf("After Decrement: %p\n", (void*)p3);

    return 0;
}