//write a program to frequency of an element
#include<stdio.h>
int main()
{
    int a[100],n,i,target,count=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the numbers to find its  frequency:");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            count++;
        }
    }
    printf("the number %d appears %d times:\n",target,count);
    return 0;
}