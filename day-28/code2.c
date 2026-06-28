//write a program to create bank account system.
#include <stdio.h>
#include <string.h>

// Structure to store account information
struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount userAccount;
    int isAccountCreated = 0; // Tracks if account exists (0 = No, 1 = Yes)
    int choice;
    float amount;

    printf("=== Welcome to the Simple Bank System ===\n");

    while (1) {
        // Display Menu Options
        printf("\n--- MAIN MENU ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Create Account
                printf("\nEnter Account Number: ");
                scanf("%d", &userAccount.accountNumber);
                
                // Clear input buffer before reading string
                while (getchar() != '\n'); 
                
                printf("Enter Account Holder Name: ");
                fgets(userAccount.name, sizeof(userAccount.name), stdin);
                userAccount.name[strcspn(userAccount.name, "\n")] = '\0'; // Remove newline character

                userAccount.balance = 0.0; // Initial balance set to zero
                isAccountCreated = 1;
                
                printf("\n Account created successfully!\n");
                break;

            case 2:
                // Deposit Money
                if (isAccountCreated == 0) {
                    printf("\n Error: Please create an account first!\n");
                } else {
                    printf("\nEnter amount to deposit: $");
                    scanf("%f", &amount);
                    if (amount > 0) {
                        userAccount.balance += amount;
                        printf(" Success: $%.2f deposited.\n", amount);
                    } else {
                        printf(" Error: Invalid amount.\n");
                    }
                }
                break;

            case 3:
                // Withdraw Money
                if (isAccountCreated == 0) {
                    printf("\n Error: Please create an account first!\n");
                } else {
                    printf("\nEnter amount to withdraw: $");
                    scanf("%f", &amount);
                    if (amount > userAccount.balance) {
                        printf(" Error: Insufficient balance!\n");
                    } else if (amount <= 0) {
                        printf(" Error: Invalid amount.\n");
                    } else {
                        userAccount.balance -= amount;
                        printf(" Success: $%.2f withdrawn.\n", amount);
                    }
                }
                break;

            case 4:
                // Check Balance
                if (isAccountCreated == 0) {
                    printf("\n Error: Please create an account first!\n");
                } else {
                    printf("\n--- Account Details ---\n");
                    printf("Account Number: %d\n", userAccount.accountNumber);
                    printf("Holder Name   : %s\n", userAccount.name);
                    printf("Current Balance: $%.2f\n", userAccount.balance);
                }
                break;

            case 5:
                // Exit
                printf("\nThank you for banking with us. Goodbye!\n");
                return 0;

            default:
                printf("\n Error: Invalid choice! Please select an option between 1 and 5.\n");
        }
    }
    return 0;
}
