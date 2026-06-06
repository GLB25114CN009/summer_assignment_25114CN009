//write a program to check whether a number is prime 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    {
    printf("prime\n");
    }
    else
    {
        printf("not prime:");
    }
    return 0;
    
}