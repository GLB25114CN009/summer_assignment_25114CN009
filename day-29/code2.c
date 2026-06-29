//write a program to create menu-driven array operations system.
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int arr[MAX];
    int size = 0;
    int choice, element, position, i, found;

    while (1) {
        // Display the operations menu
        printf("\n--- ARRAY OPERATIONS MENU ---\n");
        printf("1. Create / Initialize Array\n");
        printf("2. Display Array Elements\n");
        printf("3. Insert an Element\n");
        printf("4. Delete an Element\n");
        printf("5. Search an Element\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // 1. Create/Initialize Array
                printf("Enter the number of elements: ");
                scanf("%d", &size);
                
                if (size < 0 || size > MAX) {
                    printf("Invalid size! Please enter a value between 1 and %d.\n", MAX);
                    size = 0;
                } else {
                    printf("Enter %d elements:\n", size);
                    for (i = 0; i < size; i++) {
                        printf("Element %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                    printf("Array created successfully!\n");
                }
                break;

            case 2:
                // 2. Display Array Elements
                if (size == 0) {
                    printf("Array is empty! Create it first.\n");
                } else {
                    printf("Array elements are: ");
                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                // 3. Insert an Element
                if (size >= MAX) {
                    printf("Array overflow! Cannot insert more elements.\n");
                } else {
                    printf("Enter the element to insert: ");
                    scanf("%d", &element);
                    printf("Enter the position (1 to %d): ", size + 1);
                    scanf("%d", &position);

                    // Check validation for position entry
                    if (position < 1 || position > size + 1) {
                        printf("Invalid position!\n");
                    } else {
                        // Shift elements right to create space
                        for (i = size; i >= position; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[position - 1] = element; // Insert item
                        size++; // Increase array length count
                        printf("Element inserted successfully!\n");
                    }
                }
                break;

            case 4:
                // 4. Delete an Element
                if (size == 0) {
                    printf("Array underflow! No elements to delete.\n");
                } else {
                    printf("Enter the position of element to delete (1 to %d): ", size);
                    scanf("%d", &position);

                    if (position < 1 || position > size) {
                        printf("Invalid position!\n");
                    } else {
                        printf("Deleted element: %d\n", arr[position - 1]);
                        // Shift elements left to fill vacancy
                        for (i = position - 1; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--; // Decrease array length count
                    }
                }
                break;

            case 5:
                // 5. Search an Element (Linear Search)
                if (size == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter the element to search: ");
                    scanf("%d", &element);
                    found = 0;
                    
                    for (i = 0; i < size; i++) {
                        if (arr[i] == element) {
                            printf("Element found at position: %d (Index: %d)\n", i + 1, i);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Element not found in the array.\n");
                    }
                }
                break;

            case 6:
                // 6. Exit
                printf("Exiting the program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid option! Please pick a choice from 1 to 6.\n");
        }
    }

    return 0;
}

