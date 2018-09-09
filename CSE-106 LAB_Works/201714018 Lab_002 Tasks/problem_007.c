//uppercase or lowercase
#include<stdio.h>
#define pf printf
#define sf scanf

int main()
{
    char c;
    pf("Enter a Character:");
    sf("%c",&c);

    if(c>=65&&c<=91)
        pf("Uppercase");
    else
        pf("Lowercase");
}
