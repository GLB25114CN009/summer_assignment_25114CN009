// write a program to bubble sort
#include<stdio.h>
int main()
{
    int a[50],n,i,j,temp;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter %d elements of array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  } 
  printf("\nsorted list in ascending order:\n");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  } 
  printf("\n");
  return 0;

}