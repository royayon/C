#include<stdio.h>
#define pf printf
#define sf scanf
int isPerfect(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0&&i!=n)
            sum+=i;
    }
    if(sum==n)
        return 1;
    else
        return 0;

}
int main()
{
    int n,i;
    sf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(isPerfect(i)==1)
            pf("%d ",i);
    }
}
