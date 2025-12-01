#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    int words = 0, inWord = 0;
    char ch;
    if(fp == NULL) return 0;
    while((ch = fgetc(fp)) != EOF) {
        if(isspace(ch)) inWord = 0;
        else if(inWord == 0) {
            inWord = 1;
            words++;
        }
    }
    printf("%d", words);
    fclose(fp);
    return 0;
}
