#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("%d %p\n", *p1, p1);
    printf("%.2f %p\n", *p2, p2);
    printf("%c %p\n", *p3, p3);

    return 0;
}
