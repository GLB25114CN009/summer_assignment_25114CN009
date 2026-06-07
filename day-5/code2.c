//write a progrram to check strong number
#include<stdio.h>
int main()
{
    int n,n1,r,i,sum=0,fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        fact=1;
        r=n%10;
        for(i=r;i>=1;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(n1==sum)
    {
        printf("%d is strong number",n1);
    }
    else{
        printf("%d is not strong number",n1);
    }
    return 0;
}