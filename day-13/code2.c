//write a program to find sum and average of array
#include<stdio.h>
int main()
{
int a[5],i,sum=0;
float avg;
for(i=0;i<5;i++)
{
  printf("enter number:");
  scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    sum=sum+a[i];

}
printf("sum=%d\n",sum);
avg=sum/5;
printf("average=%f\n",avg);
return 0;
}