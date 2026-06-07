//write a program to find largest prime factor
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int max_prime=-1;
    while(n%2==0)
    {
        max_prime=2;
        n=n/2;
    }
    for(int i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            max_prime=i;
            n=n/i;
        }
    }
    if(n>1)
    {
        max_prime=n;
    }
    printf("largest prime factor:%d\n",max_prime);
    return 0;
}