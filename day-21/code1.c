//write a program to find string length without strlen()
#include<stdio.h> 
int main()
{
    char str[100];
    int length=0;
    printf("enter a string:");
    scanf("%[^\n]",str);
    //loop through the string until the null character '\0'is hit
    while(str[length] != '\0')
    {
        length++;
    }
    //print the final calculated length
    printf("length of the string is:%d\n",length);
    return 0;
}
