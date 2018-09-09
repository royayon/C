//Check if its a Armstrong Number
#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf
int main()
{
    int n,sum=0,m;
    pf("Enter a Number to Check: ");
    sf("%d",&n);
    m=n;
    while(n!=0)
    {
        sum+=(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(sum==m)
        pf("Its an Armstrong Number!");
    else
        pf("Its not an Armstrong Number!");

}
