// write a program to recursive reverse number
#include<stdio.h>
int reverse(int x,int y)
{
    if(x==0)
    return y;
    else
    return reverse(x/10,y*10+x%10);
    
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    int rev=reverse(num,0);
    printf("reverse of number is :%d",rev);
}