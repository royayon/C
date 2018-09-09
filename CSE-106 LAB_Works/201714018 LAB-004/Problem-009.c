//Fibonacci Serial
#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int d1=0,d2=1,n,d,i;
    pf("0 1 ");
    for(i=1;i<=12;i++)
    {
        d=d1+d2;
        pf("%d ",d);
        d1=d2;
        d2=d;
    }
}
