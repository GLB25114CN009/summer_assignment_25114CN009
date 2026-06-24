//write a program to compress a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Compressed string: ");
    
    int length = strlen(str);
    for (i = 0; i < length; i++) {
        // Count occurrences of the current character
        count = 1;
        while (i + 1 < length && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        
        // Print the character and its count
        printf("%c%d", str[i], count);
    }
    
    printf("\n");
    return 0;
}
