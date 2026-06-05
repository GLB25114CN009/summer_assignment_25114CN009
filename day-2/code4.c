//write a program to check whether a number is pallindrone
#include<stdio.h>
int main()
{
    int n,r,n1,reverse=0;
    printf("enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("pallindrone is:\n%d",reverse);
    return 0;
}