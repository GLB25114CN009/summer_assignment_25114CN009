//write a program to write function to find sum of two numbers
#include<stdio.h>
int sum(int a,int b);

int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("sum is: %d",sum(a,b));
    return 0;
}

int sum(int a,int b)
{
  return a+b;
}