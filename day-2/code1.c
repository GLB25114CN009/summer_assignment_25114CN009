//write a program to find sim of digit of a number
#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digit is:%d",sum);
    return 0;
}