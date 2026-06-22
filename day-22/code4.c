//write a program to remove space from string
#include<stdio.h>
int main()
{
    char str[100];
    int i, j=0;
    printf("enter a string:");
    scanf("%[^\n]",str);
    //loop through the string to remove spaces
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }
    //add the null terminator to mark the end of the new string
    str[j]='\0';
    //print the final result
    printf("string after removing spaces:%s",str);
    return 0;

}