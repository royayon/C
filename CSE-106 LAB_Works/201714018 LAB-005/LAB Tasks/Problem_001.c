#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int n,i,j,k,sum=0;
    pf("Enter the value of 'n' : ");
    sf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=i;j++)
        {
            k+=i;
        }
        sum+=k;
    }
    pf("Total==> %d",sum);
}
