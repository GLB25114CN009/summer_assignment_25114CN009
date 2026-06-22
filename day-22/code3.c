//write a program to character frequency
#include<stdio.h>
int main()
{
    char str[100], ch;
    int count=0,i;
    printf("enter a string:");
    scanf("%[^\n]",str);
    printf("enter a character to find its frequency:");
    scanf(" %c", &ch);

    //loop through the string until the end marker '\0 is reached
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        {
            count++;
        }
    }
    printf("frequency of '%c' = %d\n",ch,count);
    return 0;
}