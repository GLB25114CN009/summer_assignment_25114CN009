//write a program to find gcd of two numbers
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter two number:");
    scanf("%d%d",&n1,&n2);
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    printf("gcd of two number is: %d",n1,n2);
    return 0;

}