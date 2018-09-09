//recur sum series : 1 + 2^2 + 3^3 + 4^4 +.....+ n^n
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf
int recur_NpowN(int n)
{
    if(n==1)
        return 1;
    else
        return pow(n,n)+recur_NpowN(n-1);
}
int main()
{
    int n;
    pf("You are calculating Series Sum: 1 + 2^2 + 3^3 + 4^4 +.....+ n^n==>");
    pf("\nEnter the value of 'n'==>");
    sf("%d",&n);
    pf("\nThe Sum of the Series: 1 + 2^2 + 3^3 + 4^4 +.....+ n^n ==>");
    pf("\nThe sum is==>> %d",recur_NpowN(n));
}
