//Remove chars except Alphabets
#include<stdio.h>
#include<string.h>
#define pf printf
#define sf scanf

int main()
{
    char str[1000];
    gets(str);

    int len=strlen(str);
    int j;

    for(int i=0;str[i]!='\0';i++)
    {
        while(!((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')||str[i]=='\0'))     //pashapashi onekgula 99999 ba ekoi char(alphabet chara) thakar karone while lagbe ekhane ekarone if kaj kore naa!
        {
            for(j=i;str[j]!='\0';++j)
            {
                str[j]=str[j+1];
            }
            str[j]='\0';
        }

    }
    puts(str);

}
