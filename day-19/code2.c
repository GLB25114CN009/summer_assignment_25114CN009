//write a program to subtract matrices.
#include<stdio.h>
int main()
{
    int m,n,i,j;
    int a[100][100],b[100][100],subtract[100][100];
    printf("enter the number of rows:");
    scanf("%d",&m);
    printf("enter the number of columns:");
    scanf("%d",&n);

    printf("enter elements of the first matrix:\n",m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("enter elements at [%d][%d]:",i,j);   
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of the second matrix:\n",m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("enter elements at [%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
        }
    }
    //subtract the corresponding elements of both matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            subtract[i][j]=a[i][j]-b[i][j];
        }
    }
    //display the resultant sum matrix
    printf("\nresultant matrix(subtract):\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",subtract[i][j]);
        }
        printf("\n");

    }
    return 0;


}