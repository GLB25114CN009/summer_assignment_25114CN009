//write a program to input and display array
#include<stdio.h>
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    printf("\n array elements are:");
    for(int i=0;i<10;i++)
    
        printf("\n%d",a[i]);
        return 0;

}