//recur sum series : 1-2+3-4+.........n
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf
int recur_PlusMinusSum(int n)
{
    if(n==1)
        return 1;
    else
        return pow(-1,n+1)*n+recur_PlusMinusSum(n-1);
}
int main()
{
    int n;
    pf("You are calculating Series Sum: 1-2+3-4+.........n==>");
    pf("\nEnter the value of 'n'==>");
    sf("%d",&n);
    pf("\nThe Sum of the Series: 1-2+3-4+.........n ==>");
    pf("\nThe sum is==>> %d",recur_PlusMinusSum(n));
}
