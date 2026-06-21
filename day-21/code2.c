//Write a program to reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  char temp;
  int i,len;
  printf("enter a string:");
  scanf("%99s",str);
  //find the length of the string
  len=strlen(str);
  //reverse the string by swapping characters
  for(i=0;i<len/2;i++)
  {
    temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;
  }
  //print the reversed result
  printf("reversed string:%s\n",str);
  return 0;
  
}