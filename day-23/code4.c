//write a program to find maximum occuring character
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Array to hold count of all 256 ASCII characters
    int i, max_count = 0;
    char max_char;

    // 1. Get input string from user
    printf("Enter any string: ");
    fgets(str,100, stdin);

    // Remove newline character added by fgets if present
    str[strcspn(str, "\n")] = '\0';

    // 2. Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // 3. Find the character with maximum frequency
    for (i = 0; str[i] != '\0'; i++) {
        // Skip spaces if you only want to track actual characters
        if (str[i] == ' ') {
            continue;
        }

        if (freq[(unsigned char)str[i]] > max_count) {
            max_count = freq[(unsigned char)str[i]];
            max_char = str[i];
        }
    }

    // 4. Print results
    if (max_count > 0) {
        printf("Maximum occurring character is '%c', appearing %d times.\n", max_char, max_count);
    } else {
        printf("The string is empty.\n");
    }

    return 0;
}
