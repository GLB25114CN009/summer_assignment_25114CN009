//write a program to Transpose matrix.
#include<stdio.h>
int main()
{
    int m,n,i,j;
    int matrix[100][100],transpose[100][100];
    printf("enter rows and columns of matrix:");
    scanf("%d %d",&m,&n);
    printf("enter elements of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter elements at [%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    //display the original matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    //transpose the matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    //display the transposed matrix
    printf("\nTransposed matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
         return 0;
}