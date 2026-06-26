//write a program to create number guessing game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, user_guess, attempts = 0;

    // Seed the random number generator using the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    secret_number = (rand() % 100) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a secret number between 1 and 100.\n");

    // Loop runs until the user guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);
        attempts++;

        if (user_guess > secret_number) {
            printf("Too high! Try a lower number.\n\n");
        } 
        else if (user_guess < secret_number) {
            printf("Too low! Try a higher number.\n\n");
        } 
        else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (user_guess != secret_number);

    return 0;
}
