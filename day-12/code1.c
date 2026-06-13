//write a program to write function for palindrome
#include<stdio.h>
int palindrome(int n);

int main()
{
    int n;
    printf("enter numbers:");
    scanf("%d",&n);
    printf("palindrome is:%d",palindrome(n));
    return 0;
}
int palindrome(int n)
{
    int n1,rev=0,r;
    n1=n;
    while(n>0)
    {
        
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(n1==rev)
    {
        return n1;
    }

}