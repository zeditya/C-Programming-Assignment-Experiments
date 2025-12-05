#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <math.h>
#include <string.h>

double sum_values(int count, ...) {
    va_list args;
    double sum = 0;
    int i;

    va_start(args, count);
    for (i = 0; i < count; i++) {
        sum += va_arg(args, double);
    }
    va_end(args);
    return sum;
}

int main() {
    char str[50] = "hello world";
    int i;
    time_t current_time;
    double number = 25.0;
    int *ptr;

    printf("Original string: %s\n", str);
    printf("Uppercase: ");
    for(i = 0; i < strlen(str); i++) {
        printf("%c", toupper(str[i]));
    }
    printf("\n");

    ptr = (int*)malloc(sizeof(int));
    assert(ptr != NULL);
    *ptr = 100;
    printf("Dynamic memory value: %d\n", *ptr);
    free(ptr);

    printf("Square root of %.2f is %.2f\n", number, sqrt(number));

    printf("Sum of 3 numbers (1.1, 2.2, 3.3): %.2f\n", sum_values(3, 1.1, 2.2, 3.3));

    time(&current_time);
    printf("Current time: %s", ctime(&current_time));

    return 0;
}