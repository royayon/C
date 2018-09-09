//recur fn for factorial n!
#include<stdio.h>
#define pf printf
#define sf scanf
int recur_FACTORIAL(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*recur_FACTORIAL(n-1);
}
int main()
{
    int n;
    pf("You are calculating Factorial of a number==>");
    pf("\nEnter the value of 'n'==>");
    sf("%d",&n);
    pf("\nThe Factorial of %d is==>>",n);
    pf("\n %d! = %d",n,recur_FACTORIAL(n));
}

