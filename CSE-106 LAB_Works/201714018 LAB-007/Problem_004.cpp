//Remove a char from a str
#include<stdio.h>
#include<string.h>
#define pf printf
#define sf scanf

int main()
{
    char str[1000];
    char c;
    gets(str);
    sf("%c",&c);
    int j;

    for(int i=0;str[i]!='\0';i++)
    {
        while(str[i]==c)    //pashapashi onekgula aaaaaaa ba ekoi char thakar karone while lagbe ekhane ekarone if kaj kore naa!
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
