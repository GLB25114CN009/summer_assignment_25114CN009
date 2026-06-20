//write a program to find column wise sum.
#include <stdio.h>

int main() {
    int m, n, i, j;
    
    // Step 1: Get the matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    
    int matrix[m][n];
    
    // Step 2: Input the matrix elements
    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i< m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Step 3: Display the input matrix for visualization
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Step 4: Calculate and print the column-wise sum
    printf("\n--- Column-wise Sum ---\n");
    for (j = 0; j < n; j++) {
        int col_sum = 0;
        for (i = 0; i < m; i++) {
            col_sum += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, col_sum);
    }
    
    return 0;
}



