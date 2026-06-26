//write a program to create ATM simulation.
#include <stdio.h>

int main() {
    // Initialize default pin, initial balance, and other tracking variables
    int default_pin = 1234;
    int entered_pin;
    float balance = 5000.0; // Default starting balance
    int choice;
    float amount;
    int pin_attempts = 0;

    printf("=== Welcome to the ATM Simulation System ===\n");

    // Pin verification loop (Maximum 3 attempts)
    while (pin_attempts < 3) {
        printf("Please enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == default_pin) {
            printf("PIN verification successful!\n\n");
            break;
        } else {
            pin_attempts++;
            printf("Incorrect PIN. Remaining attempts: %d\n\n", 3 - pin_attempts);
        }
    }

    // If pin attempts exceed 3, terminate the session
    if (pin_attempts == 3) {
        printf("Too many incorrect attempts. Your card has been blocked.\n");
        return 0;
    }

    // Infinite loop for ATM menu operations until the user chooses to exit
    while (1) {
        printf("************* ATM MENU *************\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Cash\n");
        printf("3. Withdraw Cash\n");
        printf("4. Exit\n");
        printf("************************************\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // View balance
                printf("\nYour current balance is: $%.2f\n\n", balance);
                break;

            case 2:
                // Money deposition
                printf("\nEnter amount to deposit: $");
                scanf("%f", &amount);
                
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited $%.2f. New Balance: $%.2f\n\n", amount, balance);
                } else {
                    printf("Invalid deposit amount!\n\n");
                }
                break;

            case 3:
                // Money withdrawal
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);
                
                if (amount > balance) {
                    printf("Transaction Failed! Insufficient balance.\n\n");
                } else if (amount <= 0) {
                    printf("Invalid withdrawal amount!\n\n");
                } else {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                    printf("Successfully withdrew $%.2f. New Balance: $%.2f\n\n", amount, balance);
                }
                break;

            case 4:
                // Exit terminal simulation
                printf("\nThank you for choosing our banking services. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid selection! Please pick a valid option from the menu.\n\n");
        }
    }

    return 0;
}
