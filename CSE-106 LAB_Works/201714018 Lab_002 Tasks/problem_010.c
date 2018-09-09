//days of a month
#include<stdio.h>
#define pf printf
#define sf scanf

int main()
{
    char mon[20];
    pf("Enter a Month:");
    sf("%s",&mon);

    if(mon[0]=='j' && mon[1] == 'a'||
       mon[0]=='m' && mon[1] == 'a'&& mon[2]=='r'||
       mon[0]=='m' && mon[1] == 'a'&& mon[2] == 'y'||
       mon[0]=='j' && mon[1] == 'u'&& mon[2]=='l'||
       mon[0]=='a' && mon[1] == 'u'&& mon[2]=='g'||
       mon[0]=='o' && mon[1] == 'c'&& mon[2]=='t'||
       mon[0]=='d' && mon[1] == 'e'&& mon[2]=='c')
        pf("This month has 31 Days!");
    else if(mon[0]=='f' && mon[1] == 'e'&& mon[2]=='b')
        pf("This month has 28 Days!");
    else
        pf("This month has 30 Days!");
}
