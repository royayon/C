#include<stdio.h>
#define pf printf
#define sf scanf
int numDigit(int m)
{
    int c=0;
    while(m!=0)
    {
        m=m/10;
        c++;
    }
    return c;
}
int main()
{
    int n;
    sf("%d",&n);
    pf("%d",numDigit(n));
}
