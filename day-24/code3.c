//write a program to find longest word
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char largest_word[50] = "";
    int max_len = 0;

    // 1. Get string input from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the trailing newline character added by fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    // 2. Split the sentence into individual words using spaces
    char *word = strtok(sentence, " ");

    while (word != NULL) {
        // 3. Compare lengths to track the largest word
        if (strlen(word) > max_len) {
            max_len = strlen(word);
            strcpy(largest_word, word);
        }
        // Move to the next word
        word = strtok(NULL, " ");
    }

    // 4. Output the result
    printf("\nThe largest word is: %s\n", largest_word);
    printf("Its length is: %d\n", max_len);

    return 0;
}
