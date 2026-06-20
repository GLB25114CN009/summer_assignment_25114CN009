//write a program to find diagonal sum.
#include<stdio.h>
int main()
{
    int matrix[10][10],n,i,j,sum=0;
    printf("enter the size of the square matrix:");
    scanf("%d",&n);
    printf("enter the elements of the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          printf("elements at [%d][%d:]:",i,j);
          scanf("%d",&matrix[i][j]);
        }
    }
    //calculate the sum of the main diagonal elements
    for(i=0;i<n;i++)
    {
        sum+=matrix[i][i];
    }
    printf("\nthe sum of the main diagonal element is:%d\n",sum);
    return 0;
}