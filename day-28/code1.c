//write a program to create library management system.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

// Define a structure to hold book information
struct Book {
    int id;
    char title[100];
    char author[100];
    int is_issued; // 0 = Available, 1 = Issued
};

int main() {
    struct Book library[MAX_BOOKS];
    int book_count = 0;
    int choice;

    while (1) {
        // Main Menu Layout
        printf("\n=================================");
        printf("\n    LIBRARY MANAGEMENT SYSTEM    ");
        printf("\n=================================");
        printf("\n1. Add a New Book");
        printf("\n2. Display All Books");
        printf("\n3. Issue a Book");
        printf("\n4. Return a Book");
        printf("\n5. Exit");
        printf("\n=================================");
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add a New Book
                if (book_count >= MAX_BOOKS) {
                    printf("\nError: Library is full!\n");
                    break;
                }
                printf("\nEnter Book ID (Integer): ");
                scanf("%d", &library[book_count].id);
                
                // Clear input buffer before reading strings
                while (getchar() != '\n'); 
                
                printf("Enter Book Title: ");
                fgets(library[book_count].title, sizeof(library[book_count].title), stdin);
                library[book_count].title[strcspn(library[book_count].title, "\n")] = 0; // Remove newline character

                printf("Enter Author Name: ");
                fgets(library[book_count].author, sizeof(library[book_count].author), stdin);
                library[book_count].author[strcspn(library[book_count].author, "\n")] = 0; // Remove newline character

                library[book_count].is_issued = 0; // Set default status to available
                book_count++;
                printf("\nSuccess: Book added successfully!\n");
                break;

            case 2: // Display All Books
                if (book_count == 0) {
                    printf("\nNotification: The library is empty.\n");
                    break;
                }
                printf("\n-------------------------------------------------------------");
                printf("\nID\t%-25s\t%-20s\tStatus", "Title", "Author");
                printf("\n-------------------------------------------------------------");
                for (int i = 0; i < book_count; i++) {
                    printf("\n%d\t%-25s\t%-20s\t%s", 
                           library[i].id, 
                           library[i].title, 
                           library[i].author, 
                           library[i].is_issued ? "Issued" : "Available");
                }
                printf("\n-------------------------------------------------------------\n");
                break;

            case 3: // Issue a Book
                if (book_count == 0) {
                    printf("\nNotification: No books available to issue.\n");
                    break;
                }
                int issue_id, found_issue = 0;
                printf("\nEnter Book ID to issue: ");
                scanf("%d", &issue_id);

                for (int i = 0; i < book_count; i++) {
                    if (library[i].id == issue_id) {
                        found_issue = 1;
                        if (library[i].is_issued == 1) {
                            printf("\nNotice: This book is already issued to someone else.\n");
                        } else {
                            library[i].is_issued = 1;
                            printf("\nSuccess: Book issued successfully!\n");
                        }
                        break;
                    }
                }
                if (!found_issue) {
                    printf("\nError: Book ID not found.\n");
                }
                break;

            case 4: // Return a Book
                if (book_count == 0) {
                    printf("\nNotification: No books are currently tracked.\n");
                    break;
                }
                int return_id, found_return = 0;
                printf("\nEnter Book ID to return: ");
                scanf("%d", &return_id);

                for (int i = 0; i < book_count; i++) {
                    if (library[i].id == return_id) {
                        found_return = 1;
                        if (library[i].is_issued == 0) {
                            printf("\nNotice: This book was not issued. It is already in the library.\n");
                        } else {
                            library[i].is_issued = 0;
                            printf("\nSuccess: Book returned successfully!\n");
                        }
                        break;
                    }
                }
                if (!found_return) {
                    printf("\nError: Book ID not found.\n");
                }
                break;

            case 5: // Exit
                printf("\nThank you for using the Library Management System. Goodbye!\n");
                exit(0);

            default:
                printf("\nInvalid Selection! Please choose an option between 1 and 5.\n");
        }
    }
    return 0;
}
