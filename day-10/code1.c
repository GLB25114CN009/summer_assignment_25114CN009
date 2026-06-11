//write a program to print star pyramid

#include<stdio.h>
int main()
{
    int m,i,j,k;
    printf("enter number of rows");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m-i;j++)
        { 
            printf(" ");
        }
            for(k=1;k<=(2*i-1);k++)
            {
               printf("*");
            }
            printf("\n");
    }
        
    return 0;
}