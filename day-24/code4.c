//write a program to remove duplicate characters
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, index = 0;
    
    // 1. Take string input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the trailing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';
    
    length = strlen(str);
    
    // 2. Remove duplicate characters
    for (int i = 0; i < length; i++) {
        int j;
        // Check if the current character has appeared before
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break; // Duplicate found, stop looking
            }
        }
        
        // If the loop finished without breaking, the character is unique
        if (j == i) {
            str[index++] = str[i];
        }
    }
    
    // 3. Null-terminate the modified string
    str[index] = '\0';
    
    // 4. Print the final result
    printf("String after removing duplicates: %s\n", str);
    
    return 0;
}
