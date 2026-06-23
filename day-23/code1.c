//write a program to find first non-repeating character
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count[256]={0};//array to store frequency of all 256 ascii characters
    int i;
    int found=0;
    printf("enter a string:");
    fgets(str,100,stdin);
    //remove the new line character added by fgets,if present
    str[strcspn(str,"\n")] = '\0';
    //step 1: count the occurence of each character
    for(i=0;str[i]!='\0';i++)
    {
        count[(unsigned char)str[i]]++;
    }
    //step 2:find the first character with a count of 1
    for(i=0;str[i]!='\0';i++)
    {
        if(count[(unsigned char)str[i]]==1)
        {
            printf("the first non-repeating character is:'%c'\n",str[i]);
            found=1;
            break;
        }
    }
    //if no unique character is found
    if(!found)
    {
        printf("all characters are repeating or the string is empty.\n");
    }
    return 0;
}