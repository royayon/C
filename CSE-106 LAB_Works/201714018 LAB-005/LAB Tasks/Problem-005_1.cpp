#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
	int i,j,n;
	pf("input 'n'==>");
	sf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)     
		pf("*");
		if(i!=1) for(j=1;j<=2*i-2;j++) pf(" ");
		for(j=i;j<=n;j++)
		pf("*");
		
		pf("\n");
		
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		pf("*");
		if(i!=n) for(j=1;j<=2*n-2*i;j++) pf(" ");
		for(j=1;j<=i;j++)
		pf("*");
		
		pf("\n");
		
	}
}
