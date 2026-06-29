//write a program to create mini employee management system.
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define NAME_LENGTH 50

int main() {
    // Arrays to store employee data
    int ids[MAX_EMPLOYEES];
    char names[MAX_EMPLOYEES][NAME_LENGTH];
    float salaries[MAX_EMPLOYEES];
    
    int count = 0; // Keeps track of the number of employees
    int choice;
    
    while(1) {
        // Display Menu
        printf("\n=== Employee Management System ===\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            // Add Employee
            if (count < MAX_EMPLOYEES) {
                printf("Enter Employee ID: ");
                scanf("%d", &ids[count]);
                
                printf("Enter Employee Name: ");
                getchar(); // Clears the newline character from the buffer
                fgets(names[count], NAME_LENGTH, stdin);
                names[count][strcspn(names[count], "\n")] = 0; // Removes trailing newline
                
                printf("Enter Employee Salary: ");
                scanf("%f", &salaries[count]);
                
                count++;
                printf("Employee added successfully!\n");
            } else {
                printf("System full! Cannot add more employees.\n");
            }
        } 
        else if (choice == 2) {
            // Display All Employees
            if (count == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\n--- Employee List ---\n");
                printf("%-10s %-20s %-10s\n", "ID", "Name", "Salary");
                for (int i = 0; i < count; i++) {
                    printf("%-10d %-20s $%-10.2f\n", ids[i], names[i], salaries[i]);
                }
            }
        } 
        else if (choice == 3) {
            // Search Employee by ID
            if (count == 0) {
                printf("No employee records found.\n");
            } else {
                int searchId;
                int found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);
                
                for (int i = 0; i < count; i++) {
                    if (ids[i] == searchId) {
                        printf("\nEmployee Found!\n");
                        printf("ID: %d\n", ids[i]);
                        printf("Name: %s\n", names[i]);
                        printf("Salary: $%.2f\n", salaries[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Employee with ID %d not found.\n", searchId);
                }
            }
        } 
        else if (choice == 4) {
            // Exit Program
            printf("Exiting system. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice! Please choose between 1 and 4.\n");
        }
    }
    
    return 0;
}
