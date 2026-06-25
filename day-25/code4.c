//write a program to sort words by length
#include <stdio.h>
#include <string.h>

int main() {
    int n;

    // Ask user for the number of words
    printf("Enter the number of words: ");
    scanf("%d", &n);

    // Create a 2D array to store the words
    char words[n][50];
    char temp[50];

    // Input the words from the user
    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Sort words by length using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare lengths of adjacent words
            if (strlen(words[j]) > strlen(words[j + 1])) {
                // Swap the words if the current one is longer
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    // Display the sorted words
    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
