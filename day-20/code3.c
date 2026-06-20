//write a program to find row-wise sum.
#include <stdio.h>

int main() {
    int m, n,matrix[50][50],i,j;
    // 1. Get matrix size from the user
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    // 2. Get matrix elements from the user
    printf("\nEnter the elements of the matrix:\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate and display row-wise sum
    printf("\n--- Row Sums ---\n");
    for ( i = 0; i < m; i++) {
        int row_sum = 0;
        for ( j = 0; j < n; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, row_sum);
    }

    return 0;
}
