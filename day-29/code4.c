//write a program to create inventory management system.
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

// Define a structure to hold item details
struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

// Global array to store items and a counter for current stock size
struct Item inventory[MAX_ITEMS];
int itemCount = 0;

// Function prototypes
void addItem();
void viewInventory();
void updateStock();

int main() {
    int choice;

    // Continuous loop for menu selection
    while (1) {
        printf("\n=== INVENTORY MANAGEMENT SYSTEM ===\n");
        printf("1. Add New Product\n");
        printf("2. View Current Inventory\n");
        printf("3. Update Product Stock\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                viewInventory();
                break;
            case 3:
                updateStock();
                break;
            case 4:
                printf("\nExiting program. Thank you!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please choose a valid option.\n");
        }
    }
    return 0;
}

// Function to add an item to the inventory
void addItem() {
    if (itemCount >= MAX_ITEMS) {
        printf("\nInventory full! Cannot add more items.\n");
        return;
    }

    struct Item newItem;

    printf("\nEnter Item ID (Integer): ");
    scanf("%d", &newItem.id);
    
    // Check if ID already exists
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == newItem.id) {
            printf("Error: An item with ID %d already exists!\n", newItem.id);
            return;
        }
    }

    printf("Enter Item Name: ");
    scanf("%s", newItem.name);
    printf("Enter Quantity: ");
    scanf("%d", &newItem.quantity);
    printf("Enter Price: ");
    scanf("%f", &newItem.price);

    // Save the new item into the inventory array
    inventory[itemCount] = newItem;
    itemCount++;

    printf("\nItem added successfully!\n");
}

// Function to print all items in the inventory
void viewInventory() {
    if (itemCount == 0) {
        printf("\nThe inventory is empty!\n");
        return;
    }

    printf("\n-----------------------------------------------------\n");
    printf("%-10s %-20s %-10s %-10s\n", "ID", "Name", "Quantity", "Price");
    printf("-----------------------------------------------------\n");
    
    for (int i = 0; i < itemCount; i++) {
        printf("%-10d %-20s %-10d $%-9.2f\n", 
               inventory[i].id, 
               inventory[i].name, 
               inventory[i].quantity, 
               inventory[i].price);
    }
    printf("-----------------------------------------------------\n");
}

// Function to change the quantity of an existing item
void updateStock() {
    int searchId, found = 0;
    
    if (itemCount == 0) {
        printf("\nThe inventory is empty!\n");
        return;
    }

    printf("\nEnter the Item ID to update stock: ");
    scanf("%d", &searchId);

    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == searchId) {
            printf("Current quantity of %s: %d\n", inventory[i].name, inventory[i].quantity);
            printf("Enter new quantity: ");
            scanf("%d", &inventory[i].quantity);
            printf("\nStock updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nItem with ID %d not found!\n", searchId);
    }
}

