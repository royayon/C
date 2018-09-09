//Reverse a Number Function
#include<stdio.h>
#define pf printf
#define sf scanf
int power(int base,int p)
{
    int i,s=1;
    for(i=1;i<=p;i++)
    {
        s*=base;
    }
    return s;
}
int revNum(int n)
{
    int c=0,sum=0,m;
    m=n;
    while(m!=0)
    {
        m=m/10;
        c++;
    }
    //c=c-1;
    while(n!=0)
    {
        sum+=(n%10)*power(10,c-1);
        n=n/10;
        c--;
    }
    return sum;
}
int main()
{
    int n;
    sf("%d",&n);
    pf("%d",revNum(n));
}
