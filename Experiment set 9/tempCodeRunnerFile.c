#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char ch;
    int words = 0;
    int inside_word = 0;

    fptr = fopen("example.txt", "r");

    if (fptr == NULL) {
        printf("File not found! Run the write program first.\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        if (isspace(ch)) {
            inside_word = 0;
        } else if (inside_word == 0) {
            inside_word = 1;
            words++;
        }
    }

    printf("Total number of words: %d\n", words);

    fclose(fptr);
    return 0;
}