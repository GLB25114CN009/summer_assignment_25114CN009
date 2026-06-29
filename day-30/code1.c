//write a program to create student record system using arrays and strings.
#include <stdio.h>

// Defining a structure to hold student details
struct Student {
    int rollNumber;
    char name[50]; // String (character array) to store names
    float marks;
};

int main() {
    int n, i;

    // Ask the user for the total number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of structures based on user input size
    struct Student s[n];

    // Loop to enter student records
    printf("\n--- Enter Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("\nFor Student %d:\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNumber);
        
        printf("Enter Name (No spaces): ");
        scanf("%s", s[i].name); // Reading string input
        
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Loop to display student records
    printf("\n--- Displaying Student Records ---\n");
    printf("-----------------------------------------\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("-----------------------------------------\n");
    
    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n", s[i].rollNumber, s[i].name, s[i].marks);
    }
    printf("-----------------------------------------\n");

    return 0;
}
