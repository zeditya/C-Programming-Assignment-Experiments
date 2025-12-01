#include <stdio.h>
#define ADD(a,b) ((a)+(b))
#define SUB(a,b) ((a)-(b))
#define MUL(a,b) ((a)*(b))
#define DIV(a,b) ((a)/(b))

int main() {
    int a = 10, b = 5;
    printf("%d\n", ADD(a,b));
    printf("%d\n", SUB(a,b));
    printf("%d\n", MUL(a,b));
    printf("%d\n", DIV(a,b));
    return 0;
}
