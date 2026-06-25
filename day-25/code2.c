//write a program to find common character in strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    int checked[256] = {0}; // Tracks characters we already printed
    int found = 0;

    // Get the first string from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Get the second string from the user
    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Common characters: ");

    // Compare each character of str1 with str2
    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            
            // If characters match and we haven't printed this character yet
            if (str1[i] == str2[j] && checked[(unsigned char)str1[i]] == 0) {
                printf("%c ", str1[i]);
                checked[(unsigned char)str1[i]] = 1; // Mark as printed
                found = 1;
                break; // Move to the next character in str1
            }
        }
    }

    if (!found) {
        printf("None");
    }
    
    printf("\n");
    return 0;
}
