//write a program to multiply matrices
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;

    // 1. Get dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // 2. Get dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // 3. Check if multiplication is mathematically possible
    if (c1 != r2) {
        printf("Error: Columns of the first matrix must match rows of the second matrix!\n");
        return 0;
    }

    // 4. Input elements for the first matrix
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // 5. Input elements for the second matrix
    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // 6. Initialize the result matrix elements to 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // 7. Multiply the two matrices using 3 nested loops
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 8. Display the final multiplied matrix
    printf("\nResultant Output Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
