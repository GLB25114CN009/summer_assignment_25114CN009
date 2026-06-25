//write a program to sort names alphabeticaly
#include<stdio.h>
#include<string.h>
char str[50][50],temp[50];
int i,j,number;
void sortNamesAlphabetically()
{
    for(i=0;i<=number;i++)
    {
        for(j=i+1;j<=number;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);

            }
        }
    }
}
int main()
{
    printf("how many words you want to enter:");
    scanf("%d",&number);
    printf("enter one by one\n");
    for(i=0;i<=number;i++)
    {
        fgets(str[i],50,stdin);
    }
    sortNamesAlphabetically();
    printf("\n**********");
    for(i=0;i<=number;i++)
    {
        puts(str[i]);
    }
    return 0;

    
}