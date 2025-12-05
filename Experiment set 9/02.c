#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char ch;

    fptr = fopen("example.txt", "r");

    if (fptr == NULL) {
        printf("File not found! Run the write program first.\n");
        return 1;
    }

    printf("File Content:\n");
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}