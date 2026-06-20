// write a program to print merge arrays
#include <stdio.h>
int main()
{
    int n1, n2, n3, i, j;

    printf("enter the size of the first array:");
    scanf("%d",&n1);
    int a1[n1];
    printf("enter %d elements for the first array:\n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the size of the second array:");
    scanf("%d",&n2);
    int a2[n2];
    printf("enter %d elements for the second array:\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
        n3=n1+n2;
        int merged_a[n3];
        for(i=0;i<n1;i++)
        {
            merged_a[i]=a1[i];
        }
        for(j=0;j<n2;j++)
        {
            merged_a[i]=a2[j];
            i++;
        }
        printf("\nthe merged array is:\n");
        for(i=0;i<n3;i++)
        {
            printf("%d",merged_a[i]);
        }
        printf("/n");
        return 0;



}