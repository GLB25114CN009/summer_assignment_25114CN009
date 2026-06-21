//write a program to convert lowercase to uppercase
#include <stdio.h>

int main() {
    char lowerChar, upperChar;

    // Ask user for input
    printf("Enter a lowercase character: ");
    scanf(" %c", &lowerChar);

    // Convert by subtracting 32
    if (lowerChar >= 'a' && lowerChar <= 'z') {
        upperChar = lowerChar - 32;
        printf("The uppercase character is: %c\n", upperChar);
    } else {
        printf("That is not a lowercase alphabet.\n");
    }

    return 0;
}
