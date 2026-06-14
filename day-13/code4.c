//write a program to count even and odd element
#include<stdio.h>
int main()
{
    int a[100],n,i,even=0,odd=0;
    printf("emter size of array:");
    scanf("%d",&n);
    printf("array elements are:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
    even++;
    }
    else
    {
    odd++;
    }
    
}
printf("\ntotal even=%d and total odd=%d",even,odd);
return 0;
}