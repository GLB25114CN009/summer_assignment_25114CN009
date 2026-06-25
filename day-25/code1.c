//write a program to merge two sorted arrays
#include <stdio.h>

int main() {
    int n1, n2;

    // Input size of the first array
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d sorted elements for the first array:\n", n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of the second array
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d sorted elements for the second array:\n", n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Create a third array to store the merged result
    int arr3[n1 + n2];
    int i = 0; // Index for arr1
    int j = 0; // Index for arr2
    int k = 0; // Index for arr3

    // Merge elements while both arrays have elements left
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from the first array
    while (i < n1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // Copy any remaining elements from the second array
    while (j < n2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    // Print the final merged sorted array
    printf("\nThe merged sorted array is:\n");
    for(int m = 0; m < n1 + n2; m++) {
        printf("%d ", arr3[m]);
    }
    printf("\n");

    return 0;
}
