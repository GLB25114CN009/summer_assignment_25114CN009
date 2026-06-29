//write a program to create mini library system.
#include <stdio.h>
#include <string.h>

// Define a structure to hold book information
struct Book {
    char title[50];
    char author[50];
};

int main() {
    // Array of structures to store up to 50 books
    struct Book library[50]; 
    int bookCount = 0;
    int choice;

    while (1) {
        // Display Menu
        printf("\n--- MINI LIBRARY SYSTEM ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Consume the leftover newline character from scanf
        getchar(); 

        if (choice == 1) {
            if (bookCount < 50) {
                printf("\nEnter Book Title: ");
                // Reads full line including spaces, stops at newline
                scanf(" %[^\n]", library[bookCount].title); 
                
                printf("Enter Author Name: ");
                scanf(" %[^\n]", library[bookCount].author);

                bookCount++;
                printf("Book added successfully!\n");
            } else {
                printf("\nLibrary is full!\n");
            }
        } 
        else if (choice == 2) {
            if (bookCount == 0) {
                printf("\nNo books in the library yet.\n");
            } else {
                printf("\n--- Available Books ---\n");
                for (int i = 0; i < bookCount; i++) {
                    printf("%d. Title: %s | Author: %s\n", i + 1, library[i].title, library[i].author);
                }
            }
        } 
        else if (choice == 3) {
            printf("\nExiting Library System. Goodbye!\n");
            break;
        } 
        else {
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
