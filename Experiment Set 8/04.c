// Allocate memory for a string, display it, then expand the memory to append more text.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    char tempBuffer[100];
    int initial_len, append_len;
    
    printf("Enter initial string size (approx): ");
    scanf("%d", &initial_len);
    
    str = (char*) malloc((initial_len + 1) * sizeof(char));
    
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter the first part of the string: ");
    scanf("%s", str);
    
    printf("Current String: %s\n", str);
    
    printf("\nEnter text to append: ");
    scanf("%s", tempBuffer);
    
    int current_len = strlen(str);
    int new_total_len = current_len + strlen(tempBuffer) + 1;
    
    str = (char*) realloc(str, new_total_len * sizeof(char));
    
    if (str == NULL) {
        printf("Reallocation failed!\n");
        return 1;
    }
    
    strcat(str, tempBuffer);
    
    printf("Final Concatenated String: %s\n", str);
    
    free(str);
    return 0;
}