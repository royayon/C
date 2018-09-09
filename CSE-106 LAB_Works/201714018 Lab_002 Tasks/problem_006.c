//+ve/-ve/Zero
#include<stdio.h>
#define pf printf
#define sf scanf

int main()
{
    int n;
    pf("Enter a Number:");
    sf("%d",&n);
    if(n>0)
        pf("Positive");
    else if(n<0)
        pf("Negative");
    else
        pf("Zero");

}
