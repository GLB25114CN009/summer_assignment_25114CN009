// write a program to Union of arrays
#include<stdio.h>
int main()
{
    int n1,n2,i,j,k=0,found;
    int a1[100],a2[100],unionArray[200];
    
    printf("enter the size of the first array:");
    scanf("%d",&n1);
    printf("enter %d elements of first array:",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the size of the second array:");
    scanf("%d",&n2);
    printf("enter %d elements of second array:",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
    printf("Union of the arrays:");
    for(i=0;i<n1;i++)
    {
        printf("%d",a1[i]);
    }
    for(i=0;i<n2;i++)
    {
        found=0;
        for(j=0;j<n1;j++)
        {
            if(a2[i]==a1[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            printf("%d",a2[i]);
        }
    }
    printf("\n");
    return 0;


}