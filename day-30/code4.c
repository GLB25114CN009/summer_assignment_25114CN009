//write a program to develop complete mini project usimg arrays,strings and functions.
#include <stdio.h>
#include <string.h>

// Maximum limit definitions
#define MAX_STUDENTS 5
#define MAX_NAME_LEN 30

// Function Declarations (Prototypes)
void addStudents(char names[MAX_STUDENTS][MAX_NAME_LEN], int rollNumbers[], float marks[], int *count);
void displayStudents(char names[MAX_STUDENTS][MAX_NAME_LEN], int rollNumbers[], float marks[], int count);
void findHighestScorer(char names[MAX_STUDENTS][MAX_NAME_LEN], float marks[], int count);

int main() {
    // 1. Array Declarations
    char studentNames[MAX_STUDENTS][MAX_NAME_LEN]; // 2D Array for Strings
    int rollNumbers[MAX_STUDENTS];                 // 1D Array for Integers
    float marks[MAX_STUDENTS];                    // 1D Array for Floating points
    
    int totalStudents = 0; // Tracks current number of students registered
    int choice;

    printf("=== Welcome to the Mini Student Management System ===\n");

    // Menu-Driven Program Loop
    do {
        printf("\n--- MAIN MENU ---\n");
        printf("1. Add Student Records\n");
        printf("2. Display All Student Records\n");
        printf("3. View Highest Scorer Details\n");
        printf("4. Exit Program\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Routing choices to the correct module functions
        switch (choice) {
            case 1:
                addStudents(studentNames, rollNumbers, marks, &totalStudents);
                break;
            case 2:
                displayStudents(studentNames, rollNumbers, marks, totalStudents);
                break;
            case 3:
                findHighestScorer(studentNames, marks, totalStudents);
                break;
            case 4:
                printf("Thank you for using the program. Goodbye!\n");
                break;
            default:
                printf("Invalid selection! Please enter a valid number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}

// 2. Function Definitions

// Function to safely accept and append records into arrays
void addStudents(char names[MAX_STUDENTS][MAX_NAME_LEN], int rollNumbers[], float marks[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("\nError: System database is full! Cannot add more students.\n");
        return;
    }

    printf("\nEntering details for Student #%d:\n", *count + 1);
    
    printf("Enter Name (No spaces): ");
    scanf("%s", names[*count]); // Reads text into the 2D string array

    printf("Enter Roll Number: ");
    scanf("%d", &rollNumbers[*count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[*count]);

    (*count)++; // Increments database size counter tracking across scopes
    printf("Record added successfully!\n");
}

// Function to traverse arrays and display saved details
void displayStudents(char names[MAX_STUDENTS][MAX_NAME_LEN], int rollNumbers[], float marks[], int count) {
    if (count == 0) {
        printf("\nNo records available. Please add student details first!\n");
        return;
    }

    printf("\n--- CURRENT STUDENT LIST ---\n");
    printf("%-5s %-20s %-10s %-5s\n", "S.No", "Name", "Roll No", "Marks");
    
    for (int i = 0; i < count; i++) {
        printf("%-5d %-20s %-10d %-5.2f\n", i + 1, names[i], rollNumbers[i], marks[i]);
    }
}

// Function to calculate maximum metrics using array searching logic
void findHighestScorer(char names[MAX_STUDENTS][MAX_NAME_LEN], float marks[], int count) {
    if (count == 0) {
        printf("\nNo student database records exist to parse!\n");
        return;
    }

    int highestIndex = 0; // Assume first student has the highest mark initially
    
    for (int i = 1; i < count; i++) {
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i; // Track the array element position holding maximum points
        }
    }

    printf("\n🏆 HIGHEST SCORER DETAILS 🏆\n");
    printf("Name: %s\n", names[highestIndex]);
    printf("Marks Obtained: %.2f\n", marks[highestIndex]);
}
