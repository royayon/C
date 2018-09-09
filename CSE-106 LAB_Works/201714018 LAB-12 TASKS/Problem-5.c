//recur fn for GCD
#include<stdio.h>
#define pf printf
#define sf scanf
int recur_GCD(int a,int b)
{
    if(a==0)
        return b;
    else
        return recur_GCD(b%a,a);
}
int main()
{
    int n,max,min;
    pf("You are calculating GCD of two numbers==>");
    pf("\nEnter the value of Maximum Number==>");
    sf("%d",&max);
    pf("\nEnter the value of Minimum Number==>");
    sf("%d",&min);
    pf("\nThe GCD of %d and %d is==>>",max,min);
    pf("\n GCD(%d,%d) = %d\n\n",min,max,recur_GCD(min,max));
}

