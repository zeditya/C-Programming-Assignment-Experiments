#include <stdio.h>

void modify(int *x, float *y, char *z) {
    *x = *x + 5;
    *y = *y * 2;
    *z = 'Z';
}

int main() {
    int a = 10;
    float b = 3.5;
    char c = 'A';

    modify(&a, &b, &c);

    printf("%d %.2f %c\n", a, b, c);

    return 0;
}
