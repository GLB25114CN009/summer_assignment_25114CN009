//write a program to find maximum frequency element
#include<stdio.h>
int main()
{
    int n,i,j;
    int max_element,max_count=0;
    printf("enter the number of elements:"); 
    scanf("%d",&n);
     int a[n];
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
           int count=0;
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
            if(count>max_count)
            {
                max_count=count;
                max_element=a[i];
            }
        }
               printf("\nElement with maximum frequency:%d\n",max_element);
               printf("it appears %d times.\n",max_count);
               return 0;
    }
