// write a program to selection sort
#include<stdio.h>
int main()
{
   int a[50],n,i,j,temp,min_index;
   printf("how many numbers do you want to sort?");
   scanf("%d",&n);
   printf("enter %d elements:\n",n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   //selection sort logic
   for(i=0;i<n-1;i++)
   {
    min_index=i;//assume current position is the smallest

    //find the actual smallest number in the rest of the array
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[min_index])
        {
            min_index=j;
        }
    }
    //swap the smallest number found eith the current position
    temp=a[i];
    a[i]=a[min_index];
    a[min_index]=temp;
   }
   //print the sorted array 
   printf("\nsorted array:\n");
   for(i=0;i<n;i++)
   {
    printf("%d\n",a[i]);
   }
   return 0;
}