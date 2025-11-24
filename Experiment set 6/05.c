#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    struct employee e[5], temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        scanf("%s %s %f", e[i].name, e[i].address, &e[i].salary);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(e[i].name, e[j].name) > 0) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%s %s %.2f\n", e[i].name, e[i].address, e[i].salary);
    }

    return 0;
}
