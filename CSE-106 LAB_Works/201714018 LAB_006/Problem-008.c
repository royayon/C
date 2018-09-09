//isBetweem Function
#include<stdio.h>
#define pf printf
#define sf scanf
int isBetween(int a,int b,int n)
{
    if(n>=a&&n<=b)
        return 1;
    else return 0;
}
int main()
{
    int a,b,n;
    sf("%d%d%d",&a,&b,&n);
    if(isBetween(a,b,n)==1)
        pf("The number %d is between %d and %d",n,a,b);
    else if(isBetween(a,b,n)==0)
        pf("The number %d is not between %d and %d",n,a,b);
}
