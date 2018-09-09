//recur sum series : 1^2+2^2+....+n^2
#include<stdio.h>
#define pf printf
#define sf scanf
int recur_NSqr(int n)
{
    if(n==1)
        return 1*1;
    else
        return n*n+recur_NSqr(n-1);
}
int main()
{
    int n;
    pf("You are calculating Series Sum:1^2+2^2+3^2+4^2+....+n^2 ==>");
    pf("\nEnter the value of 'n'==>");
    sf("%d",&n);
    pf("\nThe Sum of the Series==>");
    pf("\nThe sum is==>> %d",recur_NSqr(n));
}
