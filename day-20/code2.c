//write a program to check symmetric matrix
#include <stdio.h>

int main()
 {
    int m, n, i, j;
    int isSymmetric = 1; // Flag initialized to true (1)

    // 1. Get matrix dimensions from the user
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // A matrix can only be symmetric if it is a square matrix
    if (m != n) {
        printf("The matrix is not square, so it cannot be symmetric.\n");
        return 0;
    }

    int matrix[m][n];

    // 2. Accept matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Check for symmetry by comparing index (i, j) with (j, i)
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Found a mismatch, set flag to false
                break;          // Break out of the inner loop
            }
        }
        if (!isSymmetric) {
            break; // Break out of the outer loop if symmetry fails
        }
    }

    // 4. Output the final result
    if (isSymmetric == 1) {
        printf("\nThe given matrix is a Symmetric Matrix.\n");
    } else {
        printf("\nThe given matrix is NOT a Symmetric Matrix.\n");
    }

    return 0;
}
