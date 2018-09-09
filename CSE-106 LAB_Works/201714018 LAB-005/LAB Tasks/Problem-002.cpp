#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
	int n,i,j;
	pf("Enter 'n' :");
	sf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			pf(" ");
		}
		for(j=1;j<=i;j++)
		{
			pf("* ");
		}
		pf("\n");
			
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			pf(" ");
		}
		for(j=i;j<=n;j++)
		{
			pf("* ");
		}
		pf("\n");
	
	}
}
