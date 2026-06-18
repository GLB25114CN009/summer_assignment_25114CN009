//write a program to find missing number in array
#include<stdio.h>
int main()
{
  int n,i,a[100-1];
  int actual_sum=0;
  int expected_sum=0;
  int missing_number=0;
  printf("enter total numbers of elements expected(n):");
  scanf("%d",&n);
  printf("enter %d elements(from 1 to %d with one missing):");
  for(i=0;i<n-1;i++)
  {
    scanf("%d",&a[i]);
    actual_sum+=a[i];
  }
   expected_sum=(n*(n+1))/2;

   missing_number=expected_sum-actual_sum;
   printf("\nThe missing number is:%d\n",missing_number);
   return 0;



}