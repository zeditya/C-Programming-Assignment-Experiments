#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <math.h>
#include <string.h>

void printAll(int num, ...) {
    va_list args;
    va_start(args, num);
    for(int i = 0; i < num; i++) {
        printf("%d ", va_arg(args, int));
    }
    va_end(args);
}

int main() {
    char c = 'a';
    printf("%c\n", toupper(c));

    char *p = malloc(10);
    assert(p != NULL);

    strcpy(p, "test");
    printf("%s\n", p);

    printAll(3, 1, 2, 3);

    printf("\n%f\n", sqrt(16));

    printf("%ld\n", time(NULL));

    free(p);
    return 0;
}
