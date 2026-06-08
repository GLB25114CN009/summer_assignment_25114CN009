//write a program to recursive sum of digits
#include<stdio.h>
int sum(int);
int main()
{
int x;
printf("enter a number:");
scanf("%d",&x);
printf("sum is %d",sum(x));
return 0;
}
int sum(int x)
{
    if(x/10==0)
    return (x);
    return(x%10+sum(x/10));


}

