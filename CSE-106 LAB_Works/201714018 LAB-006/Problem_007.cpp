//Remove Vowels
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    gets(str);
    int j;

    for(int i=0;str[i]!='\0';i++)
    {
        while(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')    //pashapashi onekgula aaaaaaa ba ekoi char thakar karone while lagbe ekhane ekarone if kaj kore naa!
        {                   //if diye korle while er jaygay if and while er seshe i-- likhte hbe!
            for(j=i;str[j]!='\0';++j)
            {
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }

    puts(str);
}
