//write a program to check pallindrome string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, length, isPallindrome=1;
    printf("emter a string:"); 
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            isPallindrome=0;
            break;
        }
    }
    if(isPallindrome==1)
    {
        printf("%s is a pallindrome string.\n",str);
    }
    else
    {
        printf("%s is not a pallindrome string.\n",str);
    }
    return 0;
}