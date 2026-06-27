//write a program to create marksheet management system.
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float math;
    float science;
    float english;
    float total;
    float percentage;
};

int main() {
    int numStudents;

    printf("=== Marksheet Management System ===\n");
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    // Input data
    for (int i = 0; i < numStudents; i++) {
        printf("\n--- Entering details for Student %d ---\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Enter Name (No spaces): ");
        scanf("%s", students[i].name);
        
        printf("Enter Math marks: ");
        scanf("%f", &students[i].math);
        
        printf("Enter Science marks: ");
        scanf("%f", &students[i].science);
        
        printf("Enter English marks: ");
        scanf("%f", &students[i].english);

        // Calculations
        students[i].total = students[i].math + students[i].science + students[i].english;
        students[i].percentage = (students[i].total / 300.0) * 100;
    }

    // Display Marksheets
    printf("\n================================== GENERATED MARKSHEETS ==================================\n");
    printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s\n", "Roll No", "Name", "Math", "Science", "English", "Total", "Percentage");
    printf("------------------------------------------------------------------------------------------\n");
    
    for (int i = 0; i < numStudents; i++) {
        printf("%-10d %-20s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f%%\n", 
               students[i].rollNo, 
               students[i].name, 
               students[i].math, 
               students[i].science, 
               students[i].english, 
               students[i].total, 
               students[i].percentage);
    }
    printf("==========================================================================================\n");

    return 0;
}
