//recur fn for fibonacci
#include<stdio.h>
#define pf printf
#define sf scanf
int recur_FIBO(int n)
{
    if(n==1||n==0)
        return n;
    else
        return recur_FIBO(n-1)+recur_FIBO(n-2);
}
int main()
{
    int n,i,sum=0;
    pf("You are calculating Fibonacci Series Sum==>");
    pf("\nEnter the value of 'n'==>");
    sf("%d",&n);
    pf("\nThe Fibonacci Series==>");
    for(i=0;i<=n;i++)
    {
        sum+=recur_FIBO(i);
        pf("%d ",recur_FIBO(i));
    }
    pf("\nThe sum is==>> %d",sum);
}
