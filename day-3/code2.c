//write a program to print prime numbers in a range
#include<stdio.h>
int main()
{
    int n1,n2,count,i;
    printf("enter starting value:");
    scanf("%d",&n1);
    printf("enter ending value:");
    scanf("%d",&n2);
    for(int i=n1;i<=n2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
    }
    if(count==2)
    {
        printf("prime number:%d\n",i);
    }
    return 0;

}