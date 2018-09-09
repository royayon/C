//recur fn for LCM
#include<stdio.h>
#define pf printf
#define sf scanf

int recur_LCM(int a,int b)
{
    static int n=1;
    n++;
    if(b%a==0)
        return b;
    else
        return recur_LCM(a,b/(n-1)*n);
}
int main()
{
    int n,max,min;
    pf("You are calculating LCM of two numbers==>");
    pf("\nEnter the value of Maximum Number==>");
    sf("%d",&max);
    pf("\nEnter the value of Minimum Number==>");
    sf("%d",&min);
    pf("\nThe LCM of %d and %d is==>>",max,min);
    pf("\n LCM(%d,%d) = %d\n\n",min,max,recur_LCM(min,max));
}



