#include <stdio.h>

int main() {
    int a = 10, *p1 = &a;
    float b = 5.5, *p2 = &b;
    char c = 'X', *p3 = &c;

    printf("%p\n", p1);
    p1++;
    printf("%p\n", p1);
    p1--;

    printf("%p\n", p2);
    p2++;
    printf("%p\n", p2);
    p2--;

    printf("%p\n", p3);
    p3++;
    printf("%p\n", p3);
    p3--;

    return 0;
}
