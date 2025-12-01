#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if(fp == NULL) return 0;
    fputs("Hello File", fp);
    fclose(fp);
    return 0;
}
