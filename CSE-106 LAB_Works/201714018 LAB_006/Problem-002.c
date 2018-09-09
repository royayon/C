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
int main()
{
    int base,p;
    sf("%d%d",&base,&p);
    pf("%d",power(base,p));

}
