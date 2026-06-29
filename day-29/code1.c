//write a program to create menu driven calculator.
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        // Displaying the menu options
        printf("\n--- MENU CALCULATOR ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Exit condition checked first
        if (choice == 5) {
            printf("Exiting the calculator. Goodbye!\n");
            break; 
        }

        // Check for invalid choice before asking for numbers
        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select a number between 1 and 5.\n");
            continue; 
        }

        // Asking user for the two numbers
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Performing operation based on choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                // Error checking for division by zero
                if (num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
        }
    }

    return 0;
}
