//write a program count words in a sentence
#include<stdio.h>
int main()
{
    char str[100];
    int i=0,words=0,in_word=0;
    printf("enter a sentence:");
    scanf("%[^\n]s",str);

    //loop through each character of the string until the null terminator
    while(str[i]!='\0')
    {
        //check if the current character is a space,tab, or new line
        if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
        {
            in_word=0;//we hit a space, so we are no longer inside a word
        } 
        //if it's a regular character and the previous statewas outside a word
        else if(in_word==0)
        {
            in_word=1;//we found the start of a new word
            words++;//increment the word counter
        }
        i++;
    }
    printf("Total number of words:%d\n",words);
    return 0;
}