#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char fname[50];
    char lname[50];
};

int main() {
    struct student s[5], temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        scanf("%d %s %s", &s[i].roll_no, s[i].fname, s[i].lname);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (s[i].roll_no > s[j].roll_no) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d %s %s\n", s[i].roll_no, s[i].fname, s[i].lname);
    }

    return 0;
}
