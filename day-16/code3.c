// write a program to find pair with given sum
#include<stdio.h>
int main()
{
    int n,i,target,found=0;
    //get the size of the array from the user
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    //get the array elements from the user
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    //get the target sum from the user
    printf("enter the target sum you want to find:");
    scanf("%d",&target);
    printf("\n---result---\n");

    //nested loop to check every possible pair
    for(i=0;i<n;i++)
    {
        // j start at i+1 to avoid checking the sameelement twice or matching duplicates
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                printf("pair found:%d and %d(at indices %d and %d)\n",a[i],a[j],i,j);
                found=1;
            }
        }
    }
    //if no matches was found during the loop execution
    if(!found)
    {
        printf("no found pair with the sum %d.\n",target);
    }
       return 0;
}