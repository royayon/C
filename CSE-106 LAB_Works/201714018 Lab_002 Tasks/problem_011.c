//triangle is valid or not
#include<stdio.h>
#define pf printf
#define sf scanf

int main()
{
    int a,b,c;
    pf("Enter three angles:");
    sf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
        pf("Triangle is Valid!");
    else
        pf("Triangle is not Valid!");
}
