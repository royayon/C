//Displaying Factors
#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int n,i;
    pf("Enter the Number:");
    sf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            pf("%d ",i);
    }
}
