//write a program to linear search
#include<stdio.h>
int main()
{
    int a[100],n,i,search,found=-1;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to search:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            found=i;
            break;
        }
    }
    if(found!=-1)
    {
        printf("element found at index is:%d\n",found);
    }
    else{
        printf("element not found in the array\n");
    }
    return 0;

}