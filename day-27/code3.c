//write a program to create salarey management system.
#include <stdio.h>
#include <string.h>

// Define a structure to hold individual employee records
struct Employee {
    int id;
    char name[50];
    float basic_salary;
    float allowance;
    float deduction;
    float net_salary;
};

int main() {
    int count;

    printf("=== Simple Salary Management System ===\n\n");
    printf("Enter the number of employees: ");
    scanf("%d", &count);

    // Create an array of structures based on user input size
    struct Employee emp[count];

    // Collect data for each employee
    for(int i = 0; i < count; i++) {
        printf("\n--- Enter Details for Employee %d ---\n", i + 1);
        
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);
        
        printf("Enter Employee Name (No spaces): ");
        scanf("%s", emp[i].name);
        
        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basic_salary);
        
        printf("Enter Allowances (Bonus, HRA, etc.): ");
        scanf("%f", &emp[i].allowance);
        
        printf("Enter Deductions (Tax, PF, etc.): ");
        scanf("%f", &emp[i].deduction);

        // Core business logic: Net Pay calculation
        emp[i].net_salary = emp[i].basic_salary + emp[i].allowance - emp[i].deduction;
    }

    // Display formatted results
    printf("\n================================== SALARY SHEET ==================================\n");
    printf("%-10s %-20s %-15s %-12s %-12s %-15s\n", "Emp ID", "Name", "Basic Salary", "Allowance", "Deduction", "Net Salary");
    printf("----------------------------------------------------------------------------------\n");
    
    for(int i = 0; i < count; i++) {
        printf("%-10d %-20s %-15.2f %-12.2f %-12.2f %-15.2f\n", 
               emp[i].id, 
               emp[i].name, 
               emp[i].basic_salary, 
               emp[i].allowance, 
               emp[i].deduction, 
               emp[i].net_salary);
    }
    printf("==================================================================================\n");

    return 0;
}
