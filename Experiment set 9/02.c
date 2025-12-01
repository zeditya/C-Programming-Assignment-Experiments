#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    char ch;
    if(fp == NULL) return 0;
    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}
