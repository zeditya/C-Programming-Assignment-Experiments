#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    char name[50];
    int id;
    float salary;
    struct date dob;
};

int main() {
    struct employee emp;

    printf("Enter Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &emp.dob.day, &emp.dob.month, &emp.dob.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("DOB: %02d-%02d-%d\n", emp.dob.day, emp.dob.month, emp.dob.year);

    return 0;
}