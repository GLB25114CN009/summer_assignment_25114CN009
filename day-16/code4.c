// write a program to remove duplicates from array
#include<stdio.h>
int main()
{
    int a[100],n,i,j,k;

    printf("enter the size of the array:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //logic to remove duplicate elements
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            // if duplicate is found
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]==a[k+1];
                }
            
            //reduce the size of array since an element is removed
            n--;
            //stay at the same index 'j' to check shifted elements
            j--;
            }
        }
    }
    //print the final unique array
    printf("\narray after removing duplicates:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;

}