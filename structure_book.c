#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int year;
};

int main() {
    struct Book book;

    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = 0; // Remove trailing newline

    printf("Enter book author: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = 0; // Remove trailing newline

    printf("Enter book year: ");
    scanf("%d", &book.year);

    printf("\nBook Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Year: %d\n", book.year);

    return 0;
}