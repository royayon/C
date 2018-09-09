#include<stdio.h>
#define pf printf
#define sf scanf
int isPrime(int n)
{
    int i,flag=0;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) return 0;
    else if(flag==0) return 1;
}
void printNonPrimes(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(isPrime(i)==0)
        {pf("%d ",i);}
    }
}

int main()
{
    int n;
    sf("%d",&n);
    printNonPrimes(n);
}
