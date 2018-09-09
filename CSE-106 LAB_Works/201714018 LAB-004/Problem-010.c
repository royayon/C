//Factorial
#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int n,f=1,i;
    pf("Enter a Number: ");
    sf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    pf("Factorial of the given number is==> %d",f);
}
