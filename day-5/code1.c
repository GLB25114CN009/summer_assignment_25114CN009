//wtite a program to check perfect number
#include<stdio.h>
int main()
{
    int i,n,r,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("\n %d is prfect number,n");
    }
    else{
        printf("/n %d is not perfect number",n);
    }
    return 0;

}