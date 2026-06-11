//write a program to print number pyramid
#include<stdio.h>
int main()
{
    int m,i,j,k,r,rev=0;
    printf("enter number of rows:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
          printf("%d",k);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}


