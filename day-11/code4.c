//write a program to write function to find factorial
#include<stdio.h>
int find_fact(int n);

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("factorial is:%d",find_fact(n));
    return 0;
}
int find_fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;

}