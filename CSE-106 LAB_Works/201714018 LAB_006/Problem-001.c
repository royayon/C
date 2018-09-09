#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int i,j,c=65;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<=5-i;j++)
        {
            pf("%d",j);
        }
        for(j=1;j<=2*i-2;j++)
        {
            pf(" ");

        }
        for(j=0;j<=5-i;j++)
        {
            pf("*");
        }
        pf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            pf("*");
        }
        for(j=1;j<=10-2*i;j++)
        {
            pf(" ");

        }
        for(j=1;j<=i;j++)
        {
            pf("%c",c);
            c++;
        }
        pf("\n");
    }
}
