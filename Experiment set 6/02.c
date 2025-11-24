#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float mark;
};

int main() {
    struct student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter mark: ");
    scanf("%f", &s.mark);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Mark: %.2f\n", s.mark);

    return 0;
}
