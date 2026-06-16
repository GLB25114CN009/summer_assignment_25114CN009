//write a program to moves zeroes to end
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count++]=arr[i];
        }
    }
    // Fill the remaining positions with zeros
    while (count < n)
    {
        arr[count++] = 0;
    }
    printf("Array after moving zeros to the end: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }


}