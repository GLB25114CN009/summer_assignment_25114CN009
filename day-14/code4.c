//write a program to find duplicates in array

#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicate elements in the array:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d\n",a[j]);
                break;
            }
        }
    }
    return 0;


}