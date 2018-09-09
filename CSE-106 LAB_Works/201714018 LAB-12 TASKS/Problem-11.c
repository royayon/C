//recur sum series : 1 + (1*2) + (1*2*3) + ........ + (1*2*3*.....*n)
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf
int factorial(int n)
{
    int i,k=1;
    for(i=1;i<=n;i++)
    {
        k*=i;
    }
    return k;
}
int recur_MulNSum(int n)
{
    if(n==1)
        return 1;
    else
        return factorial(n)+recur_MulNSum(n-1);
}
int main()
{
    int n;
    pf("You are calculating Series Sum: 1 + (1*2) + (1*2*3) + ........ + (1*2*3*.....*n)==>");
    pf("\nEnter the value of 'n'==>");
    sf("%d",&n);
    pf("\nThe Sum of the Series: 1 + (1*2) + (1*2*3) + ........ + (1*2*3*.....*n) ==>");
    pf("\nThe sum is==>> %d",recur_MulNSum(n));
}
