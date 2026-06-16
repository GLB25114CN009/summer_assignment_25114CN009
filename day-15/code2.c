//write a program to rotate array left
#include<stdio.h>
int main()
{
    int a[100],n,k,i,j,temp;
    //get array size from user
    printf("enter size of array:");
    scanf("%d",&n);
    //get array elements from user
    printf("enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //get rotation count from user  
    printf("enter how many times to rotate left:");
    scanf("%d",&k);
    //handle class where k is greater
    k = k % n;//simple fix for large rotation number
    for(i=0;i<k;i++)
    {
        temp=a[0];//save the first number
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];//shift all elements to left

        }
        a[n-1]=temp;//place the saved element at the end

    }
    printf("array after left rotation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
    


}