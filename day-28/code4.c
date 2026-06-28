//write a program to create contact management system.
#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 50

// Structure to store contact details
struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;

    while (1) {
        // Main Menu Display
        printf("\n*** CONTACT MANAGEMENT SYSTEM ***\n");
        printf("1. Add New Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        // Clear input buffer to avoid issues with string inputs next
        while (getchar() != '\n');

        switch (choice) {
            case 1: // Add Contact
                if (count < MAX_CONTACTS) {
                    printf("\nEnter Name: ");
                    fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
                    // Remove trailing newline character from fgets
                    contacts[count].name[strcspn(contacts[count].name, "\n")] = 0;

                    printf("Enter Phone Number: ");
                    fgets(contacts[count].phone, sizeof(contacts[count].phone), stdin);
                    contacts[count].phone[strcspn(contacts[count].phone, "\n")] = 0;

                    count++;
                    printf("Contact saved successfully!\n");
                } else {
                    printf("\nContact list full!\n");
                }
                break;

            case 2: // View Contacts
                if (count == 0) {
                    printf("\nNo contacts found.\n");
                } else {
                    printf("\n--- Stored Contacts ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d. Name: %s | Phone: %s\n", i + 1, contacts[i].name, contacts[i].phone);
                    }
                }
                break;

            case 3: // Exit Program
                printf("\nExiting program. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid selection! Please choose 1, 2, or 3.\n");
        }
    }
    return 0;
}
