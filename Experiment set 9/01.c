#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char text[100];

    fptr = fopen("example.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write to file: ");
    scanf(" %[^\n]", text);

    fprintf(fptr, "%s", text);
    fclose(fptr);

    printf("File created and text written successfully.\n");

    return 0;
}