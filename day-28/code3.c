//write a program to create ticket booking system.
#include <stdio.h>

// Maximum number of available seats
#define TOTAL_SEATS 10

// Array to track seats: 0 means Available, 1 means Booked
int seats[TOTAL_SEATS] = {0}; 
float ticketPrice = 12.50; // Price per ticket

// Function to display the layout of the seats
void displaySeats() {
    printf("\n--- SEAT ARRANGEMENT ---\n");
    for (int i = 0; i < TOTAL_SEATS; i++) {
        printf("Seat %d: ", i + 1);
        if (seats[i] == 0) {
            printf("[ Available ]\n");
        } else {
            printf("[ BOOKED ]\n");
        }
    }
    printf("------------------------\n");
}

// Function to handle seat booking
void bookTicket() {
    int seatNumber;
    
    displaySeats();
    printf("Enter the seat number you want to book (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNumber);
    
    // Check if the seat number entered by the user is valid
    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
        printf("\n❌ Invalid seat number! Please choose between 1 and %d.\n", TOTAL_SEATS);
        return;
    }
    
    // Check if the selected seat is already taken
    if (seats[seatNumber - 1] == 1) {
        printf("\n❌ Sorry, Seat %d is already booked! Please choose another one.\n", seatNumber);
    } else {
        // Book the seat
        seats[seatNumber - 1] = 1;
        printf("\n✅ Success! Seat %d has been successfully booked.\n", seatNumber);
        printf("💵 Total Bill: $%.2f\n", ticketPrice);
    }
}

int main() {
    int choice;
    
    printf("=== WELCOME TO THE TICKET BOOKING SYSTEM ===\n");
    
    // Menu-driven loop
    while (1) {
        printf("\n1. View Seating Chart\n");
        printf("2. Book a Ticket\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                displaySeats();
                break;
            case 2:
                bookTicket();
                break;
            case 3:
                printf("\nThank you for using our booking system. Goodbye!\n");
                return 0; // Exits the program
            default:
                printf("\n❌ Invalid selection! Please enter 1, 2, or 3.\n");
        }
    }
    
    return 0;
}
