//write a program to second largest element
#include<stdio.h>
int main()
{
int a[100],n,i,max1,max2;
printf("enter size of array:");
scanf("%d",&n);
printf("enter the numbers:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max1=max2=0;
for(i=0;i<5;i++)
{
    if(a[i]>max1)
    {
        max2=max1;
        max1=a[i];

    }
    else if(a[i]>max2 && a[i]<max1)
    {
    max2=a[i];
    }
    

}
printf("first largest element=%d\n",max1);
printf("second largest element=%d\n",max2);
return 0;
}




