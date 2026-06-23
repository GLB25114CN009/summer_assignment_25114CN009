//write a program to find first repeating character
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
    //scan the string from left to right
    for(i=0;str[i]!='\0';i++)
    {
        //increment the count for the current character
        count[(unsigned char)str[i]]++;
        //the moment a character's count becomes 2,it is the first repeating character
        if(count[(unsigned char)str[i]]==2)
        {
            printf("the first repeating character is:'%c'\n",str[i]);
            found=1;
            break;
        }
    }
    //if no character repeats
    if(!found)
    {
        printf("No repeating characters found.\n");
    }
    return 0;
}