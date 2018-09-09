#include<stdio.h>
#define pf printf
#define sf scanf
int findMax(int a,int b)
{
    if(a>=b)
        return a;
    else return b;
}
int findMin(int a,int b)
{
    if(a<=b)
        return a;
    else return b;
}

int main()
{
    int a,b;
    sf("%d%d",&a,&b);
    pf("Max: %d\nMin: %d",findMax(a,b),findMin(a,b));
}
