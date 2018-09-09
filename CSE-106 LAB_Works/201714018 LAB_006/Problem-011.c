//1.prime 2.armstrong 3.perfect number Function
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


int isArmstrong(int n)
{
    int sum=0,m;
    m=n;
    while(n!=0)
    {
        sum+=(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(sum==m)
        return 1;
    else
        return 0;
}


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
    int n;
    sf("%d",&n);
    if(isPrime(n)==1) pf("Its a Prime Number!\n");
    else pf("Its Not a Prime Number!\n");

    if(isArmstrong(n)==1) pf("Its an Armstrong Number!\n");
    else pf("Its Not an Armstrong Number!\n");

    if(isPerfect(n)==1) pf("Its a perfect Number!\n");
    else pf("Its Not a perfect Number!\n");
}
