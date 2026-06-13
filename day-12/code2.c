//write a program to write function for armstrong
#include<stdio.h>
#include<math.h>
int isarmstrong(int n);

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(isarmstrong(n))
    {
        printf("%d is an armstrong number\n",n);
    }
    else{
        printf("%d is not an armsrong number\n",n);
    }
    return 0;

}
int isarmstrong(int n)
{
    int n1,r,sum=0,digit=0;
    n1=n;
    while(n1!=0)
    {
      digit++;
      n1=n1/10;
    }
    n1=n;
    while(n1!=0)
    {
        r=n1%10;
        sum=sum+round(pow(r,digit));
        n1=n1/10;
    }
    if(sum==n)
    {
        return 1;;
    }
    else{
        return 0;
    }
}