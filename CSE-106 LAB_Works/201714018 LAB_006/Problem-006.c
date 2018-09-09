//decimal to binary Function
#include<stdio.h>
#define pf printf
#define sf scanf
int power(int base,int p)
{
    int i,s=1;
    for(i=1;i<=p;i++)
    {
        s*=base;
    }
    return s;
}
int decToBin(int n)
{
   int c=0,sum=0;

    while(n!=0)
    {
        sum+=(n%10)*power(2,c);
        n=n/10;
        c++;
    }
    return sum;


}

int main()
{
    int n;
    sf("%d",&n);
    pf("%d",decToBin(n));
}
