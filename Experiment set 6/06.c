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
    struct employee e;

    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%d %d %d", &e.dob.day, &e.dob.month, &e.dob.year);
    scanf("%f", &e.salary);

    printf("%s %d %02d-%02d-%04d %.2f\n",
           e.name, e.id,
           e.dob.day, e.dob.month, e.dob.year,
           e.salary);

    return 0;
}
