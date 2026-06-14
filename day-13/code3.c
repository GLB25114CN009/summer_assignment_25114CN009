//write a program to find largest and smallest element
#include<stdio.h>
int main()
{
    int a[100],n,i,max,min;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter values in array\n:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}
printf("maximum value of array:%d\n",max);
min=a[0];
for(i=0;i<n;i++)
{
    if(a[i]<min)
    {
        min=a[i];
    }

}
printf("minimum value of array:%d\n",min);
return 0;

}