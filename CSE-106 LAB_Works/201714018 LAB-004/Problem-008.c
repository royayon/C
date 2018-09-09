//Reverse a Number
#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int n,c=0,sum=0,i,m;
    pf("Enter a Number to Reverse: ");
    sf("%d",&n);
    m=n;
    while(m!=0)
    {
        m=m/10;
        c++;
    }
    for(i=c-1;i>=0;i--)
    {
        sum+=(n%10)*pow(10,i);
        if(i==0)
            sum+=(n)*pow(10,i);
        n=n/10;
    }
    pf("Reversed Number is==> %d",sum);
}
