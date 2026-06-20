// write a program to binary search
#include<stdio.h>
int main()
{
    int n,a[100],target,found=0,low,high,mid;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter %d number in sorted array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //get the target number to search
    printf("enter the number to search for:");
    scanf("%d",&target);

    //binary search logic
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=low + (high - low) /2;
        if(a[mid]==target)
        {
            printf("found %d is at index %d.\n",target,mid);
            found=1;
            break;
        }
        if(a[mid]<target)
        {
            low=mid+1;//searc right half
        }
        else{
            high=mid-1;//search left half
        }
    }
    if(!found)
    {
        printf("%d is not in the array.\n",target);
    }
        return 0;
}