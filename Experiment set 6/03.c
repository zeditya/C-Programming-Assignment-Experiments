#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    struct employee emp[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Address: ");
        scanf(" %[^\n]", emp[i].address);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - 1 - i; j++) {
            if(strcmp(emp[j].name, emp[j + 1].name) > 0) {
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }

    printf("\nEmployees sorted by Name:\n");
    for(i = 0; i < 5; i++) {
        printf("Name: %s, Address: %s, Salary: %.2f\n", emp[i].name, emp[i].address, emp[i].salary);
    }

    return 0;
}