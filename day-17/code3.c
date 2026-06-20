// write a program to intersection of arrays
#include<stdio.h>
int main()
{
    int n1,n2,a1[100],a2[100],i,j;
    printf("enter the number of elements in first array:");
    scanf("%d",&n1);
    printf("enter %d elements of first array:\n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the number of elements in second array:");
    scanf("%d",&n2);
     printf("enter %d elements of second array:\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
    //find and print the intersection
    printf("intersection of the two arrays:");
    int foundintersection = 0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a1[i]==a2[j])
            {
                printf("%d",a1[i]);
                foundintersection=1;
                break;
            }
        }
    }
    if(!foundintersection)
    {
        printf("no common elements found.");
    }
    printf("\n");
    return 0;

}