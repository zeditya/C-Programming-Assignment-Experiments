#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'Z';

    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    printf("Integer Value: %d, Pointer Value: %d\n", a, *ptr_int);
    printf("Float Value: %.2f, Pointer Value: %.2f\n", b, *ptr_float);
    printf("Char Value: %c, Pointer Value: %c\n", c, *ptr_char);

    printf("Address of int: %p\n", (void*)ptr_int);
    printf("Address of float: %p\n", (void*)ptr_float);
    printf("Address of char: %p\n", (void*)ptr_char);

    return 0;
}