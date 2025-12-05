#include <stdio.h>

void modify(int *a, int *b) {
    *a = *a + 10;
    *b = *b * 2;
}

int main() {
    int x = 50, y = 20;

    printf("Before Function Call:\n");
    printf("x = %d, y = %d\n", x, y);

    modify(&x, &y);

    printf("After Function Call:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}