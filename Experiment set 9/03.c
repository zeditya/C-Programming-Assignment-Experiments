#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char line[150];

    fptr = fopen("example.txt", "r");

    if (fptr == NULL) {
        printf("File not found! Run the write program first.\n");
        return 1;
    }

    printf("Reading Line by Line:\n");
    while (fgets(line, sizeof(line), fptr)) {
        printf("%s", line);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}