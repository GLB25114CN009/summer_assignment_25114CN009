//write a program to reverse array
#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter numbers\n");
        scanf("%d",&a[i]);
    }
    for(i=n;i>=0;i--)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}