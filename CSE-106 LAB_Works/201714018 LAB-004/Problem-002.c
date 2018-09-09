//Multiplication Table
#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int n,i;
    pf("Enter a Number:");
    sf("%d",&n);
    
    pf("Multiplication Table==>\n");
    for(i=1;i<=10;i++)
    {
        pf("%d * %d = %d\n",n,i,n*i);
    }
	

}
