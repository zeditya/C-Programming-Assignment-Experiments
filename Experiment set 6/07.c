#include <stdio.h>

union address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union address a;

    printf("Enter your present address: ");
    scanf("%s", a.home_address);

    printf("Present Address: %s\n", a.home_address);

    return 0;
}
