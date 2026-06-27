//write a program to create employee management system.
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

// Define the employee structure
struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    while (1) {
        // Display the menu
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Check if the system is full
                if (count >= MAX_EMPLOYEES) {
                    printf("\nError: System storage is full!\n");
                    break;
                }

                // Input employee details
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[count].id);
                
                printf("Enter Name: ");
                scanf(" %[^\n]s", emp[count].name); // Reads string with spaces
                
                printf("Enter Department: ");
                scanf(" %[^\n]s", emp[count].department);
                
                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);

                count++;
                printf("\nEmployee added successfully!\n");
                break;

            case 2:
                // Check if any records exist
                if (count == 0) {
                    printf("\nNo employee records found.\n");
                    break;
                }

                // Display all records
                printf("\n--- Employee List ---\n");
                printf("%-5s %-20s %-15s %-10s\n", "ID", "Name", "Department", "Salary");
                printf("------------------------------------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%-5d %-20s %-15s %-10.2f\n", 
                           emp[i].id, emp[i].name, emp[i].department, emp[i].salary);
                }
                break;

            case 3:
                printf("\nExiting program. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    return 0;
}
