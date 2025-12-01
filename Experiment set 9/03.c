#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    char line[100];
    if(fp == NULL) return 0;
    while(fgets(line, 100, fp)) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
