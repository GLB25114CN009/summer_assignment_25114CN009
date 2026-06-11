//write a program to print reverse pyramid

#include<stdio.h>
int main()
{
    int m,i,j,k;
    printf("enter the height:");
    scanf("%d",&m);
    for(i=m;i>=1;i--)
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