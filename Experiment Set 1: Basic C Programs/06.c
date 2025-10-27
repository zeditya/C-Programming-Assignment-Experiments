// 6. Book Information System
// Problem: Write a C program to collect and display details about a book

#include <stdio.h>

int main() {
    
    char book_title[100];
    char author_name[100];
    int isbn;
    float price;
    char publisher[100];
    int year_of_publication;
    
    printf("--- Enter Book Details ---\n");
    
    printf("Book Title (single word): ");
    scanf("%s", book_title);
    
    printf("Author Name (single word): ");
    scanf("%s", author_name);
    
    printf("ISBN: ");
    scanf("%d", &isbn);
    
    printf("Price: ");
    scanf("%f", &price);
    
    printf("Publisher (single word): ");
    scanf("%s", publisher);
    
    printf("Year of Publication: ");
    scanf("%d", &year_of_publication);
    
    printf("\n--- Book Information Display ---\n");
    printf("Title:     %s\n", book_title);
    printf("Author:    %s\n", author_name);
    printf("ISBN:      %d\n", isbn);
    printf("Price:     %.2f\n", price);
    printf("Publisher: %s\n", publisher);
    printf("Year:      %d\n", year_of_publication);
    
    return 0;
}


