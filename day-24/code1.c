//write a program to check string rotation
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    // Get the first string from the user
    printf("Enter first string: ");
    scanf("%s", str1);

    // Get the second string from the user
    printf("Enter second string: ");
    scanf("%s", str2);

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Copy str1 into temp to create the concatenated string (str1 + str1)
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) {
        printf("Yes, the strings are rotations of each other.\n");
    } else {
        printf("No, the strings are not rotations of each other.\n");
    }

    return 0;
}
