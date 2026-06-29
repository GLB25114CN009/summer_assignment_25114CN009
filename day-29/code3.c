//write a program to create menu-driven string array operatioms system.
#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 10
#define MAX_LENGTH 50

// Function prototypes
void displayStrings(char arr[MAX_STRINGS][MAX_LENGTH], int count);
void insertString(char arr[MAX_STRINGS][MAX_LENGTH], int *count);
void searchString(char arr[MAX_STRINGS][MAX_LENGTH], int count);

int main() {
    char stringArray[MAX_STRINGS][MAX_LENGTH];
    int stringCount = 0;
    int choice;

    do {
        // Display the menu
        printf("\n--- STRING ARRAY OPERATIONS ---\n");
        printf("1. Insert a string\n");
        printf("2. Display all strings\n");
        printf("3. Search for a string\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        getchar(); // Clears the newline character from the input buffer

        switch (choice) {
            case 1:
                insertString(stringArray, &stringCount);
                break;
            case 2:
                displayStrings(stringArray, stringCount);
                break;
            case 3:
                searchString(stringArray, stringCount);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to insert a string into the array
void insertString(char arr[MAX_STRINGS][MAX_LENGTH], int *count) {
    if (*count >= MAX_STRINGS) {
        printf("Error: Array is full!\n");
        return;
    }

    printf("Enter the string to insert: ");
    fgets(arr[*count], MAX_LENGTH, stdin);
    
    // Remove the trailing newline character added by fgets
    arr[*count][strcspn(arr[*count], "\n")] = '\0';

    (*count)++;
    printf("String inserted successfully!\n");
}

// Function to display all strings in the array
void displayStrings(char arr[MAX_STRINGS][MAX_LENGTH], int count) {
    if (count == 0) {
        printf("The array is empty.\n");
        return;
    }

    printf("\n--- Current Strings ---\n");
    for (int i = 0; i < count; i++) {
        printf("[%d]: %s\n", i + 1, arr[i]);
    }
}

// Function to search for a specific string in the array
void searchString(char arr[MAX_STRINGS][MAX_LENGTH], int count) {
    if (count == 0) {
        printf("The array is empty. Nothing to search.\n");
        return;
    }

    char searchKey[MAX_LENGTH];
    int found = 0;

    printf("Enter the string to search for: ");
    fgets(searchKey, MAX_LENGTH, stdin);
    searchKey[strcspn(searchKey, "\n")] = '\0'; // Remove newline

    for (int i = 0; i < count; i++) {
        if (strcmp(arr[i], searchKey) == 0) {
            printf("String '%s' found at position %d.\n", searchKey, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("String '%s' not found in the array.\n", searchKey);
    }
}

