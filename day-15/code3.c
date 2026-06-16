//write a program to rotate array right
#include <stdio.h>
int main()
{
    int n, d;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);
    d = d % n; // In case the number of rotations is greater than array size
    int temp[d];
    // Store the last d elements in a temporary array
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[n - d + i];
    }
    // Shift the remaining elements to the right
    for (int i = n - 1; i >= d; i--)
    {
        arr[i] = arr[i - d];
    }
    // Copy the temporary array back to the beginning of the original array
    for (int i = 0; i < d; i++)
    {
        arr[i] = temp[i];
    }
    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}