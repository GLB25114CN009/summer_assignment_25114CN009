//write a program to create voting eligibility system.
#include <stdio.h>

int main() {
    int age;

    // Prompt user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the age is 18 or older
    if (age >= 18) {
        printf("Congratulations! You are eligible to vote.\n");
    } else {
        printf("Sorry, you are not eligible to vote yet.\n");
        printf("You will be able to vote in %d years.\n", 18 - age);
    }

    return 0;
}
