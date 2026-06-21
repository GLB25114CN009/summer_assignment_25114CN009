//write a program to count vowels and consonants
#include<stdio.h>
int main()
{
    char str[100];
    int vowels=0;
    int consonants=0;
    //take string input from the user
    printf("enter a string:");
    scanf("%[^\n]",str);
    //line through each character until the end of the string
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        //check if the character is vowel(both lower case and uppercase)
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            vowels++;
        }
        //check if the character is consonant(must be a valid letter)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
    }
    //display the results
    printf("total vowels:%d\n",vowels);
    printf("total consonants:%d\n",consonants);
    return 0;


}