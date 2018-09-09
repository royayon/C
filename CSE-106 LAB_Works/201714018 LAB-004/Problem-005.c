//check if its a Perfect Number
#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int n,i,sum=0;
    pf("Enter a number to check: ");
    sf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0&&i!=n)
            sum+=i;
    }
    if(sum==n)
        pf("Its a Perfect Number!");
    else
        pf("Its not a Perfect Number!");

}
