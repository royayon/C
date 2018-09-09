//Sum Digits
#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int n,m,c,i,sum=0;
    pf("Enter a number: ");
    sf("%d",&n);
    m=n;
    while(m!=0)
    {
        m=m/10;
        c++;
    }
    for(i=1;i<=c;i++)
    {
        sum+=n%10;
        n=n/10;
    }
    pf("Sum of the Digits ==> %d",sum);
}
