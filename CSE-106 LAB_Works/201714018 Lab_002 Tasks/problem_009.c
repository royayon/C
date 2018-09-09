//alpha,digit,sp char
#include<stdio.h>
#define pf printf
#define sf scanf

int main()
{
    char c;
    pf("Enter Something:");
    sf("%c",&c);
    if((c>=65&&c<=91)||(c>=97&&c>=123))
        pf("Alphabet");
    else if(c>=48&&c<=57)
        pf("Digit");
    else
        pf("Special character");
}
