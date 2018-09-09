//max between 5 nums
#include<stdio.h>
#define pf printf
#define sf scanf

int main()
{
    int max,i,a[100];
    pf("Enter 5 Numbers:");
    for(i=0;i<5;i++)
    {
        sf("%d",&a[i]);
    }
    max=0;
    for(i=0;i<5;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    pf("Maximum number is==> %d",max);
}
