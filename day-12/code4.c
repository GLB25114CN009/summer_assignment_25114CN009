//write a program to write function for perfect number
#include<stdio.h>
int isPerfect(int n);
 
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(isPerfect(n))
    {
        printf("%d is perfect number\n",n);
    }
    else{
        printf("%d is not a perfect number\n",n);
    }
    return 0;
}
int isPerfect(int n)
{
    if(n<=0)
    {
        return 0;
    }
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
       if(n%i==0)
       {
        sum=sum+i;
       }
    }
    return (sum==n);

}