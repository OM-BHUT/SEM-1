#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    char publication[50];
    float price;
};

int main() {
    // Creating an array of structure Book
    struct Book books[3];

    // Reading data of 3 books
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Publication: ");
        scanf("%s", books[i].publication);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Displaying data of 3 books
    printf("\nDetails of 3 Books:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publication: %s\n", books[i].publication);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}
