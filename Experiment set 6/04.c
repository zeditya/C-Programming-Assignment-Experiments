#include <stdio.h>

struct employee {
    char name[50];
    char address[100];
    int age;
    float salary;
};

int main() {
    struct employee e[100];
    int n, i;
    float sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %s %d %f", e[i].name, e[i].address, &e[i].age, &e[i].salary);
        sum += e[i].salary;
    }

    printf("Average Salary = %.2f\n", sum / n);

    return 0;
}
