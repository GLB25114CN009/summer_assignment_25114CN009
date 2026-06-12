//write a program to write function to find maximum
#include<stdio.h>
int large(int a,int b);

int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("large is:%d",large(a,b));
    return 0;
}

int large(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
}