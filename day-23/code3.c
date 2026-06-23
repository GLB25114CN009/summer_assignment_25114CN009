//write a program to check anagram string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int count1[26]={0};
    int count2[26]={0};
    int i=0;
    printf("enter first string:");
    scanf("%s",str1);
    printf("enter second string:");
    scanf("%s",str2);
    //if lengths are different, they cannot be anagrams
    if(strlen(str1) !=strlen(str2))
    {
        printf("the strings are not anagrams.\n");
        return 0;
    }
    //count frequencies of each character for both strings
    //(assuming lowercase alphabets 'a' through'z')
    while(str1[i]!='\0')
    {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
        i++;

    }
    //compare the character frequencies
    for(i=0;i<26;i++)
    {
        if(count1[i] != count2[i])
        {
            printf("the strings are not anagrams.\n");
            return 0;
        }
    }
    //if all characters frequencies match
    printf("the strings are anagarms.\n");
    return 0;
}