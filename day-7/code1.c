//write a program to recursive factorial
#include<stdio.h>
int factorial(int x);
int main()
{
    int num,fact;
    printf("enter the number:");
    scanf("%d",&num);

    fact=factorial(num);
    printf("factorial of %d is %d",num,fact);
    return 0;
}
int factorial(int x)
{
    if(x==1)
    return 1;
    return x*factorial(x-1);
}
