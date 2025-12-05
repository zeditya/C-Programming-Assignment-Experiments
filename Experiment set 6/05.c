#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address addr;

    printf("Enter your present Hostel Address: ");
    scanf(" %[^\n]", addr.hostel_address);

    printf("\nPresent Address: %s\n", addr.hostel_address);

    return 0;
}